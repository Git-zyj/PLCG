/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145277
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_0 [i_0] [i_0])))) > (max((((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (unsigned char)22))))), ((~(var_15)))))));
        var_17 = ((/* implicit */unsigned long long int) ((short) (short)-27832));
        arr_3 [i_0] = (+(min((((/* implicit */int) ((short) arr_1 [i_0] [i_0]))), ((~(var_5))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = -1934939991;
        arr_7 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-7))));
        arr_8 [i_1] = (((+(((/* implicit */int) (_Bool)1)))) >> (((var_16) + (2095762872))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 4; i_2 < 18; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) var_1)))))));
            var_20 = ((/* implicit */short) (+(1732049494)));
            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 - 3])) ? (((/* implicit */int) arr_12 [18U] [i_1])) : (((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 2]))));
        }
        for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            arr_15 [i_3] = ((/* implicit */int) arr_9 [i_1] [i_1]);
            var_22 = var_7;
        }
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) 15240407171090006738ULL);
        var_23 += ((/* implicit */unsigned short) ((_Bool) (~(((((/* implicit */_Bool) arr_0 [i_4] [i_4])) ? (var_5) : (((/* implicit */int) arr_16 [i_4])))))));
    }
    var_24 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)5239))));
    var_25 = ((short) ((var_2) == (var_2)));
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_26 = ((_Bool) (_Bool)1);
        /* LoopSeq 1 */
        for (int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) ((unsigned char) var_1))))) : (min((((/* implicit */int) ((arr_21 [i_5]) == (((/* implicit */unsigned int) -325116122))))), (((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_13 [i_5] [i_5] [i_6]) : (((/* implicit */int) var_8))))))));
            arr_25 [i_5] [i_6] = ((/* implicit */short) -419981872);
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) arr_16 [i_6]);
                arr_29 [i_7] [i_7] = ((/* implicit */signed char) arr_1 [i_5] [i_5]);
                arr_30 [i_6] [i_7] [i_5] [i_6] = ((((/* implicit */int) var_10)) & (var_15));
                arr_31 [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)10))))), (14429689703949161929ULL)))));
                arr_32 [i_7] [i_7] = ((/* implicit */_Bool) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_24 [i_5] [i_6])) ? (((/* implicit */int) var_11)) : (arr_11 [i_8])))));
                arr_35 [i_5] [i_6] [i_5] [i_5] |= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)46)))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) (short)15619))))));
                arr_36 [i_5] [i_6] [i_5] = (~((+(((/* implicit */int) var_0)))));
            }
            for (unsigned char i_9 = 1; i_9 < 17; i_9 += 4) 
            {
                var_30 = ((/* implicit */unsigned short) var_16);
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) 1997631912)))))) ? (var_13) : (((/* implicit */int) (_Bool)1))));
            }
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3206336902619544874ULL)) || (((/* implicit */_Bool) 1030620035U))));
        }
    }
}
