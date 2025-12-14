/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113161
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((unsigned int) (short)63));
                        arr_9 [i_0] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_1] [i_2] [i_3]) & (arr_4 [i_0] [i_0] [i_0] [i_0])))) ? (((var_6) ? (arr_4 [i_0] [i_1] [i_2] [i_0]) : (((/* implicit */unsigned long long int) var_0)))) : (min((((/* implicit */unsigned long long int) var_14)), (arr_4 [i_0] [i_1] [i_2] [i_3])))));
                        var_20 = (-(((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_0)) : (var_2))) / (((4294967282U) + (arr_3 [i_0] [i_0]))))));
                        arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (_Bool)0);
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_4] [i_1] [i_2] [3LL] = ((/* implicit */unsigned long long int) var_11);
                        /* LoopSeq 3 */
                        for (int i_5 = 1; i_5 < 16; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4] [i_5 + 3] = ((/* implicit */int) (~(min((((/* implicit */unsigned int) var_9)), (max((var_11), (((/* implicit */unsigned int) arr_5 [i_1] [i_4] [i_5]))))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_11 [i_5 + 1] [i_4] [i_2] [i_4] [5U]), (max((var_2), (var_11)))))) ? (min((arr_14 [i_0] [i_1] [i_2] [i_0] [i_5 + 3]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7274)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))))))));
                            var_22 = ((/* implicit */_Bool) ((((((/* implicit */long long int) (~(var_11)))) ^ (((arr_6 [i_0] [i_1] [(short)7] [(short)7]) & (var_10))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)49845))))));
                        }
                        for (int i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65532)), (arr_14 [i_1] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6 - 1])))) ^ (((((/* implicit */_Bool) var_15)) ? (arr_0 [i_6 + 1]) : (((/* implicit */unsigned long long int) arr_14 [i_6 + 3] [i_6 - 1] [i_6 + 1] [i_6] [i_6 + 2]))))));
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_16 [i_0] [i_1] [i_2] [i_4] [3ULL]) - (4294967288U))))));
                        }
                        for (int i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            var_24 -= ((/* implicit */int) max((min(((((_Bool)1) ? (((/* implicit */long long int) arr_12 [i_0] [i_1] [i_2] [i_0])) : (var_18))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), (arr_8 [i_2] [i_1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_7 + 1])) ? (((/* implicit */int) (unsigned short)49844)) : (((/* implicit */int) (unsigned short)49844)))))));
                            arr_26 [i_0] [i_0] [i_4] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) (short)24471)) : (((/* implicit */int) max(((unsigned short)15672), (var_17))))))));
                            arr_27 [i_0] [i_4] [i_2] [i_0] [i_7] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_11)), (var_1))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_0] [12] [i_2] [i_7 + 3] [i_7 + 3] [i_7] [i_7 + 3])) - (((/* implicit */int) arr_25 [i_7] [i_7 + 2] [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 1] [i_7 + 3])))))));
                        }
                        var_25 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49845)))))))), (max((((/* implicit */int) ((_Bool) arr_19 [i_0] [i_1] [i_4] [i_4] [0ULL]))), (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned short)15688))))))));
                        var_26 = ((/* implicit */unsigned int) 12720466661832705900ULL);
                    }
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) var_5);
                            arr_33 [i_0] [i_1] [i_2] [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)15690)) < (((/* implicit */int) (_Bool)1))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) var_5))));
                            arr_34 [4] [i_2] [4] [i_0] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_8 + 3] [i_8 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((long long int) arr_2 [i_8 + 1] [i_8 + 2]))));
                        }
                        arr_35 [i_0] [i_1] [i_8] [i_8 - 1] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) - (((arr_14 [i_8 + 1] [i_8 + 3] [i_8 + 3] [i_8 + 1] [i_8 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_8 + 3] [i_8 + 2] [i_8 + 2] [i_8 + 3] [i_8 + 2])))))));
                        var_29 = ((/* implicit */long long int) min((((/* implicit */int) min((((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_4))))), (min(((_Bool)1), (arr_21 [i_2] [i_1] [(_Bool)1] [i_1] [i_1] [i_8])))))), (((var_7) - (((/* implicit */int) (!((_Bool)1))))))));
                        arr_36 [i_0] [i_1] [i_0] [i_8] = ((/* implicit */short) var_2);
                    }
                    arr_37 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2])) & (((/* implicit */int) (_Bool)1))))) ? ((~(161060253U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1024)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_13)), (arr_7 [i_0])))), (min((9223372036854775806LL), (((/* implicit */long long int) var_9))))))));
                    arr_38 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_0] [i_0])) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15692))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(var_10))), (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)32764)))))))) : (((/* implicit */unsigned long long int) var_3))));
    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */int) var_14)) * (var_3))), (min((-1096880152), (((/* implicit */int) var_4))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_3)))) / (var_1))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), ((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65512))))))))));
}
