/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185776
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) : (((/* implicit */int) ((short) var_10))))))));
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (signed char)-100))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_11 [i_1] [(signed char)6] [(signed char)6] [i_1])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_3))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_10 [12U] [i_1] [i_1] [i_1 + 2] [12U] [i_1 + 2]))))));
                        arr_12 [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_0 [i_0 - 2] [i_1 - 1])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2]))) : (arr_0 [i_0 - 3] [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((102888508U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    var_18 ^= ((/* implicit */short) max(((-(min((((/* implicit */unsigned int) arr_9 [i_0] [i_0])), (var_9))))), (((/* implicit */unsigned int) arr_9 [i_0 + 1] [i_1 + 2]))));
                    /* LoopSeq 4 */
                    for (int i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */int) arr_11 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_1]);
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0 + 1]))) ? (((int) max((var_0), (((/* implicit */unsigned long long int) var_3))))) : (((/* implicit */int) max((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [(_Bool)1]), (((/* implicit */unsigned short) arr_9 [i_1] [i_1 + 1])))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 1; i_6 < 13; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) min((((unsigned char) arr_6 [i_0] [i_0])), (((/* implicit */unsigned char) var_6))));
                            var_22 += ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) - (max((((/* implicit */unsigned int) var_12)), (var_5))))), (((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned int) var_4)), (arr_2 [i_0 + 1])))))));
                            var_23 = max((((((/* implicit */_Bool) max((var_2), (arr_7 [i_0] [i_0] [(_Bool)1])))) ? (max((var_12), (var_4))) : (var_12))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_13) ? (arr_18 [i_0] [i_1] [9] [i_5] [(signed char)11]) : (var_7)))) && (((((/* implicit */_Bool) arr_11 [i_0 + 4] [i_1 + 1] [7U] [i_1])) || (((/* implicit */_Bool) var_14))))))));
                        }
                        for (int i_7 = 1; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            var_24 = (((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_0))))) / (((/* implicit */unsigned long long int) min((((long long int) arr_8 [i_0] [i_1] [(unsigned char)7] [i_0])), (((/* implicit */long long int) arr_7 [(_Bool)1] [(_Bool)1] [i_2]))))));
                            var_25 = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) ((((/* implicit */int) var_6)) >> (((var_2) - (52694815))))))), (((((/* implicit */_Bool) (short)12288)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (signed char)-72))))));
                        }
                        for (int i_8 = 1; i_8 < 13; i_8 += 4) /* same iter space */
                        {
                            var_26 += (+(((/* implicit */int) (short)12288)));
                            var_27 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_16 [(_Bool)1] [i_1] [i_1] [i_1] [i_1])))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1 - 1] [3U] [i_5] [i_8 - 1])))))));
                        }
                        var_28 = ((/* implicit */unsigned int) ((signed char) var_10));
                        var_29 -= max((min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-41)) % (((/* implicit */int) (_Bool)1))))), (arr_5 [(unsigned char)0]))), (((/* implicit */unsigned int) arr_14 [i_0 - 4] [i_1] [i_2] [i_1] [6])));
                        var_30 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (1955785996U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [5U] [(_Bool)1] [i_2] [i_2])))))))) : ((-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_12)) : (arr_18 [i_0] [i_0] [i_0] [(short)14] [i_0])))))));
                    }
                    for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_10 [i_1] [i_1] [14U] [i_1 + 1] [i_1 + 1] [i_1])))));
                        var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_9) / (((/* implicit */unsigned int) var_2)))) >> (((((arr_23 [i_0] [i_0 + 3] [i_0] [i_0 + 1] [i_0 + 2]) << (((var_4) - (209147604))))) - (3665821678U)))))) ? (max((var_11), (max((((/* implicit */unsigned long long int) arr_20 [i_9])), (var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_3))))) ? (max((var_2), (arr_15 [i_0]))) : (((/* implicit */int) arr_17 [i_0 + 2] [i_0 - 2] [i_2] [(unsigned char)0])))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        var_33 |= ((/* implicit */_Bool) var_9);
                        /* LoopSeq 1 */
                        for (int i_11 = 3; i_11 < 14; i_11 += 4) 
                        {
                            arr_39 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((signed char) var_8)))) ? (max((arr_7 [i_1 + 1] [i_1 + 1] [i_10 + 1]), (arr_7 [i_1 + 2] [i_1 + 2] [i_10 + 1]))) : (min(((-(((/* implicit */int) arr_14 [i_0 + 2] [i_1 - 1] [(short)1] [i_10] [i_11 - 2])))), (max((((/* implicit */int) var_6)), (var_12)))))));
                            var_34 = ((int) (+(arr_3 [(_Bool)1] [i_0 - 1])));
                        }
                        arr_40 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_6);
                    }
                    var_35 = ((/* implicit */int) ((unsigned int) min((var_9), (var_9))));
                }
            } 
        } 
    } 
}
