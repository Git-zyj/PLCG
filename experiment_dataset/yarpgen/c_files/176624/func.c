/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176624
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_9 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)43081))))) && (((/* implicit */_Bool) var_17))));
                    var_20 &= ((/* implicit */long long int) ((((arr_4 [i_0] [i_2]) + (2147483647))) >> (((arr_4 [i_0] [i_0]) + (549707582)))));
                    var_21 = ((/* implicit */_Bool) arr_5 [16ULL] [i_1]);
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) max((var_22), (arr_5 [(_Bool)1] [i_3])));
                            arr_18 [i_1] [(unsigned char)15] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
                            var_23 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_15 [i_5] [i_5] [i_3] [i_4 + 1] [i_5] [i_1])))) | (((/* implicit */int) ((_Bool) arr_10 [i_0])))));
                            var_24 = ((/* implicit */long long int) (unsigned short)65535);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 = (+(arr_17 [(unsigned short)4] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_6]));
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_3] [i_4 + 1] [i_6])) + (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_4 + 1] [i_6])))))));
                            arr_22 [i_0] [i_0] [i_6] [i_4] [i_6] [i_1] [i_3] = ((/* implicit */_Bool) arr_5 [i_0] [i_3]);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0])) == (arr_4 [i_6] [i_4 + 1])));
                        }
                        for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                            arr_26 [i_0] [i_1] [i_3] [i_7] [0LL] = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)0))))))));
                            var_29 = ((/* implicit */unsigned int) var_7);
                        }
                        var_30 = ((/* implicit */short) (-(((arr_12 [i_4 - 1]) ? (arr_13 [8LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21807)))))));
                        var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */int) arr_5 [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_0] [i_4 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 2; i_8 < 19; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 2; i_9 < 20; i_9 += 4) 
                        {
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((arr_27 [i_8 - 1] [i_8] [(short)17] [i_8 + 2]) / (arr_27 [i_8 - 1] [i_8] [i_8] [i_8 + 2]))))));
                            var_33 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_3] [(_Bool)1] [i_1] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)16]))) : (var_9))));
                            var_34 = ((/* implicit */short) max((var_34), (((short) (!(((/* implicit */_Bool) var_0)))))));
                        }
                        arr_32 [i_0] [i_1] [(unsigned char)17] [2ULL] [(_Bool)1] [10ULL] &= arr_2 [i_0] [i_0];
                    }
                    var_35 = ((/* implicit */_Bool) max((min(((+(arr_6 [i_1] [20LL]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)768))))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) & (((((/* implicit */int) (unsigned short)21792)) & (((/* implicit */int) (unsigned short)21824)))))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_38 [i_0] [i_1] [i_3] [i_10] [i_11] = ((/* implicit */long long int) arr_24 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]);
                                arr_39 [2LL] [i_1] [i_3] [i_10] [i_1] [(unsigned char)8] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_19)))))))));
                            }
                        } 
                    } 
                    var_36 &= ((/* implicit */unsigned short) 15355603582531922721ULL);
                }
                for (long long int i_12 = 2; i_12 < 17; i_12 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)80)), (4294967295U)))) ? (((/* implicit */long long int) arr_6 [i_0] [i_1])) : (((((/* implicit */_Bool) 5847769086699503168LL)) ? (((/* implicit */long long int) arr_4 [i_1] [i_12 - 1])) : (var_5)))))));
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(543133120147301197LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0] [(signed char)19] [i_12] [(signed char)19])) && (((/* implicit */_Bool) (unsigned short)32332))))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))))))));
                    var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)33200)))) & (((/* implicit */int) (unsigned char)255)))))));
                    arr_42 [i_12] [16ULL] [i_12] [16ULL] = ((/* implicit */unsigned char) max((127U), (((/* implicit */unsigned int) var_16))));
                }
                var_40 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (+(arr_27 [(unsigned char)4] [(unsigned char)4] [i_1] [12])))) && (((/* implicit */_Bool) arr_21 [i_0] [(_Bool)1])))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (137U)))) : (max((((/* implicit */long long int) var_0)), (var_4))))))))));
    var_42 = ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned short) (signed char)-103))));
}
