/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162502
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_10 = ((/* implicit */_Bool) min((var_10), (((_Bool) (~(((/* implicit */int) (signed char)127)))))));
        var_11 -= ((/* implicit */signed char) (~(arr_2 [i_0 - 2] [i_0 - 2])));
        var_12 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29430)) && (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned short) (signed char)124)))));
            var_14 -= arr_3 [i_0] [i_0 - 1] [i_0 + 2];
        }
        var_15 -= ((/* implicit */int) ((unsigned short) var_5));
    }
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) max((((/* implicit */signed char) ((var_3) <= (arr_7 [i_2])))), (max(((signed char)-127), (((/* implicit */signed char) (_Bool)1))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) var_9))))), (var_9)))));
        var_17 -= ((/* implicit */unsigned short) (-(min((var_4), (((/* implicit */int) arr_6 [i_2]))))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned int) min((max((((/* implicit */unsigned short) var_8)), ((unsigned short)29430))), (((/* implicit */unsigned short) ((_Bool) arr_8 [i_2])))));
            arr_10 [i_3] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((max((var_3), (((/* implicit */int) (signed char)(-127 - 1))))), ((-(((/* implicit */int) arr_8 [i_2]))))))), (min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) min((arr_7 [18ULL]), (((/* implicit */int) (signed char)22)))))))));
        }
    }
    for (unsigned char i_4 = 4; i_4 < 16; i_4 += 2) 
    {
        arr_14 [i_4 - 4] = (~(max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) (signed char)(-127 - 1))))));
        var_19 &= ((((/* implicit */_Bool) ((arr_9 [i_4 - 1] [i_4 - 2] [i_4 + 1]) ? (((/* implicit */int) arr_9 [i_4 - 2] [i_4 - 4] [i_4 - 1])) : (((/* implicit */int) (unsigned short)36105))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 9ULL))))) : (((/* implicit */int) ((short) arr_9 [i_4 - 4] [i_4 + 2] [i_4 - 3]))));
        var_20 = ((/* implicit */unsigned char) min(((unsigned short)65531), ((unsigned short)33922)));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        arr_17 [i_5] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5])) ? ((+(((/* implicit */int) (unsigned short)29441)))) : (var_3)));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((int) arr_8 [i_5]));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) arr_15 [i_7]))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_6]))) : (1985993921U)));
                    var_24 = var_5;
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_6 [i_6]))));
                }
            } 
        } 
    }
}
