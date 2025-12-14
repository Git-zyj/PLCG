/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182160
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        arr_14 [i_1] [i_2] = ((/* implicit */signed char) var_3);
                        arr_15 [i_0] [i_0] [i_0] [i_0] [(short)11] [i_0] = ((/* implicit */_Bool) ((2617927443U) | (arr_4 [i_0] [i_0] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            arr_18 [i_0] [i_4] = ((/* implicit */_Bool) ((short) var_0));
                            var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [1U] [i_1] [i_0] [i_4])))))) : ((-(var_9)))));
                        }
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) arr_0 [i_1])))))));
                        arr_19 [i_3] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((1732837329U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2] [i_3])))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        arr_24 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_0 [i_1]) ? (((/* implicit */int) arr_5 [i_5 + 1] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_0 [i_1]))));
                        var_13 = (signed char)127;
                        arr_25 [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (short)9682))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_10))));
                            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-123))));
                        }
                        var_16 = ((/* implicit */short) arr_22 [i_5 - 1] [i_5] [(short)7] [(signed char)12]);
                    }
                    var_17 = ((/* implicit */unsigned short) arr_12 [i_0] [i_0] [(unsigned short)0] [i_2]);
                    var_18 = ((/* implicit */signed char) (+((~(4016260403U)))));
                }
                arr_28 [i_0] = min((((/* implicit */unsigned int) var_0)), (min((arr_11 [16] [i_0]), (((/* implicit */unsigned int) var_7)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_7 = 1; i_7 < 23; i_7 += 2) 
    {
        arr_31 [i_7 + 1] [i_7] = ((/* implicit */signed char) (short)-9682);
        var_19 |= ((/* implicit */_Bool) ((((var_8) + (2147483647))) >> (((((/* implicit */int) arr_29 [(unsigned short)10])) - (42499)))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)5] [(_Bool)1] [i_8] [i_8]))) : (((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (2035244605819464672ULL)))));
        arr_34 [i_8] [i_8] = arr_11 [i_8] [(signed char)20];
        arr_35 [i_8] = (!(((/* implicit */_Bool) arr_12 [i_8] [i_8] [i_8] [i_8])));
        arr_36 [i_8] [1ULL] = arr_2 [i_8] [i_8];
    }
}
