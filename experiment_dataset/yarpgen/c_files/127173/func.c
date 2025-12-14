/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127173
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
    var_20 = ((/* implicit */unsigned short) var_10);
    var_21 = ((/* implicit */unsigned int) max((var_21), (var_11)));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!((!(var_5))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (arr_0 [i_0] [i_0])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    arr_10 [i_1] = (unsigned short)4;
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_1 - 1])))))));
                    arr_11 [i_0] [i_1] [i_1] [(unsigned short)8] &= ((/* implicit */long long int) (signed char)35);
                    var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    arr_14 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_1] [i_1 - 2] [i_1 - 2])))));
                    arr_15 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [10U] [i_1] [i_3]))) / ((-(arr_12 [i_1] [i_1] [3U])))));
                    arr_16 [i_1] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_13))))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 2] [i_1])) && (((/* implicit */_Bool) var_16)))))));
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_19)) - (48527))))) : (((/* implicit */int) arr_1 [(unsigned short)11]))));
                }
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (-(((((/* implicit */int) arr_23 [i_0] [i_1] [i_4] [i_1 + 2])) * (((/* implicit */int) var_12)))))))));
                            /* LoopSeq 3 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_27 [i_0] [15U] [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 1])))), (((var_5) || (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_8))))))));
                                arr_28 [(signed char)4] [i_0] [i_4] [i_0] [i_0] |= ((/* implicit */unsigned int) var_9);
                            }
                            for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                            {
                                arr_33 [i_5] [i_5] [i_5] [i_5] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) < (((min((arr_29 [i_0] [i_0] [i_4] [i_4] [i_1] [i_4] [i_7]), (((/* implicit */unsigned int) var_0)))) % (min((var_6), (arr_3 [i_5] [i_1])))))));
                                var_28 = ((/* implicit */unsigned int) min((var_28), (((((/* implicit */_Bool) min((arr_21 [i_4 + 4] [i_1] [i_1]), (((/* implicit */unsigned int) arr_5 [i_4 + 4] [i_0] [i_4]))))) ? (((((/* implicit */_Bool) arr_21 [i_4 + 4] [i_1 + 2] [i_4])) ? (var_1) : (arr_21 [i_4 + 4] [i_4 + 4] [i_4 + 4]))) : ((+(arr_21 [i_4 + 4] [i_7] [i_4 + 4])))))));
                                var_29 ^= ((/* implicit */unsigned short) ((long long int) arr_9 [i_5] [i_4]));
                                var_30 = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                            }
                            /* vectorizable */
                            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                            {
                                var_31 = (unsigned short)21825;
                                var_32 += ((/* implicit */long long int) (-((~(((/* implicit */int) arr_2 [i_0]))))));
                                var_33 = ((((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) >> (((arr_32 [i_0] [i_1 + 2] [i_4 + 4]) - (3013789306U))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
