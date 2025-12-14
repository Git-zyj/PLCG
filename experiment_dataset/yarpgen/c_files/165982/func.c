/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165982
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((((/* implicit */_Bool) 2083247883U)) && (((/* implicit */_Bool) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((signed char) (signed char)111);
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                arr_6 [i_2] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4172740255U)))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_16))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 122227056U))))) : (((int) arr_5 [i_1] [i_2]))));
                var_20 ^= ((((/* implicit */_Bool) max((4172740258U), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2] [i_0]))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)81)), ((-(((/* implicit */int) (signed char)33))))))) : (max((var_0), ((+(2036308041U))))));
                var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_0]))))));
                arr_7 [i_1] [8U] [i_1] = ((/* implicit */signed char) ((((unsigned int) ((var_7) | (var_7)))) <= (((unsigned int) ((4172740238U) == (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
            }
            for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                arr_10 [i_1] [i_1] [i_1] = arr_9 [i_3] [i_1] [i_0] [i_0];
                var_22 = ((((/* implicit */_Bool) ((((var_2) / (1792928503U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [1U]))) >= (var_0)))))))) ? (((((unsigned int) arr_4 [i_0] [i_0] [i_0] [2])) % (arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))));
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 15; i_4 += 2) 
                {
                    arr_15 [12U] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_8 [i_1])))) / (((/* implicit */int) ((_Bool) arr_0 [i_0])))));
                    var_23 = ((/* implicit */signed char) (+(arr_13 [i_0] [i_1] [i_1] [i_4])));
                }
                var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_3])), (min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
            }
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_18 [i_5] = ((/* implicit */short) ((signed char) var_6));
            var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_8 [i_0]))));
        }
        arr_19 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-91)) ? (min((arr_2 [i_0] [i_0]), (23666052U))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(122227021U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0] [0U] [i_0]))))))));
        arr_20 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((short) arr_8 [i_0])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [18] [i_0] [i_0] [10U])))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_7 = 4; i_7 < 11; i_7 += 3) 
        {
            arr_26 [i_7] = ((/* implicit */short) min((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7))) | (((/* implicit */unsigned int) (~(arr_23 [i_6] [i_7])))))), (((/* implicit */unsigned int) ((arr_23 [i_7 - 4] [i_7 - 1]) >> (((((/* implicit */int) arr_24 [i_7 + 1] [i_7 + 1] [i_7 + 1])) + (16509))))))));
            var_26 *= ((/* implicit */int) arr_11 [i_6] [i_7] [i_6] [(signed char)18] [i_7]);
            var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) min(((signed char)79), (((/* implicit */signed char) (_Bool)0)))))));
            arr_27 [i_6] [i_6] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
        }
        var_28 = arr_24 [i_6] [i_6] [i_6];
        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_23 [i_6] [i_6]), (((/* implicit */int) arr_22 [i_6]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_16 [i_6] [i_6]))) : (min((arr_12 [i_6] [i_6]), (var_3)))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        var_30 = ((/* implicit */int) var_2);
        arr_30 [i_8] = var_3;
        arr_31 [i_8] [i_8] = ((/* implicit */signed char) var_6);
    }
    var_31 = ((/* implicit */unsigned int) var_16);
    var_32 = ((/* implicit */short) (+(((/* implicit */int) var_11))));
}
