/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18898
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_15 = var_12;
                        var_16 = ((/* implicit */unsigned short) 0U);
                        var_17 = (!(arr_6 [i_2] [i_0 + 2] [i_2]));
                        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((var_7), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_1 [i_0 + 2] [i_1])))))))));
                        var_19 = min((max((min((4294967285U), (4294967295U))), (min((0U), (2080374784U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_8))));
                        var_21 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_6)), (var_1)));
                        var_22 = ((/* implicit */_Bool) (-(var_7)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (unsigned short)34909))));
                                arr_17 [(unsigned short)0] [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */short) (~((-(((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                        {
                            arr_24 [i_2] [i_2] = ((/* implicit */short) var_0);
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U)))))));
                        }
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */int) var_11);
                            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_9])) ? (var_7) : (((/* implicit */unsigned int) arr_27 [i_0] [i_0] [i_2] [i_9]))))), (((((/* implicit */_Bool) 686963884549757699ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_7]))) : (arr_21 [i_9]))))), (((/* implicit */unsigned long long int) ((unsigned short) min((arr_5 [i_0] [i_0] [i_2] [i_7]), (((/* implicit */unsigned int) var_6)))))))))));
                        }
                        arr_28 [i_0] [14] [14] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [(unsigned short)2])) * (((/* implicit */int) arr_7 [i_2] [i_0 + 2] [i_0 + 1]))))), (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (((((/* implicit */_Bool) var_6)) ? (17759780189159793929ULL) : (var_5))) : (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (signed char)-70)))))))));
                        var_27 |= ((/* implicit */unsigned short) var_12);
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2])))))));
                        /* LoopSeq 1 */
                        for (int i_11 = 2; i_11 < 22; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(4294967295U)))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_1] [i_2] [i_0] [i_11])))));
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                            var_31 |= (unsigned short)36486;
                        }
                        var_32 = ((/* implicit */unsigned int) var_5);
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 - 3] [i_1] [i_2] [i_10])))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))))) : (((/* implicit */unsigned long long int) (~(var_12)))))))));
                        arr_35 [4] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_8);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */signed char) min((var_2), (min((((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_2] [(signed char)6])), ((+(((/* implicit */int) (unsigned short)36469))))))));
                        var_35 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(unsigned short)13] [i_0 + 1])))))));
                    }
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */short) var_14);
    var_37 = ((/* implicit */unsigned long long int) var_13);
    var_38 = max((var_0), (((/* implicit */unsigned short) var_3)));
}
