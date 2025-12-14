/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107767
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
    var_15 = (-(((/* implicit */int) (unsigned short)4095)));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (max((((/* implicit */int) var_14)), (var_4))))))));
    var_17 = var_8;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 4; i_3 < 7; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 2] [i_3])) > (((/* implicit */int) var_11))))) | (max((((/* implicit */int) arr_0 [(unsigned short)3])), (6)))))) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_2] [i_3])) : (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))));
                        arr_8 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) min((((int) 9)), (((int) min(((unsigned short)65534), ((unsigned short)16393))))));
                        arr_9 [i_0] [i_1] [i_2] [i_2] = arr_4 [i_0] [i_1] [i_0];
                        arr_10 [(unsigned short)3] [(unsigned short)3] [(unsigned short)3] [i_2] [(unsigned short)3] = min((arr_3 [i_3 - 3]), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)4117)) >= (var_4)))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        var_19 = ((((/* implicit */_Bool) min(((-(var_4))), ((+(((/* implicit */int) (unsigned short)35892))))))) ? (((/* implicit */int) (unsigned short)33447)) : (((/* implicit */int) (unsigned short)61441)));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 2) 
                        {
                            arr_17 [(unsigned short)4] [(unsigned short)4] [(unsigned short)8] [(unsigned short)4] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)42455))));
                            arr_18 [i_0] [(unsigned short)6] [i_2] [i_4] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (unsigned short)35258)) % (((/* implicit */int) (unsigned short)61422))))))));
                            var_20 = ((unsigned short) var_9);
                        }
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((int) max((arr_4 [i_0 + 1] [i_0 - 1] [i_0]), (min((arr_13 [i_0] [7] [i_2] [i_4]), ((unsigned short)35268)))))))));
                        var_22 = ((/* implicit */unsigned short) (~(((var_4) & (max((var_13), (-21)))))));
                        arr_19 [(unsigned short)4] [i_1] [i_2] [i_4] [i_2] &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 - 1])))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] [i_2] = ((/* implicit */int) var_2);
                        var_23 = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61418)) > (((/* implicit */int) (unsigned short)189))))), (((unsigned short) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (unsigned short)4095)) - (4081))))))));
                        arr_24 [i_0] [i_1] [i_2] [i_2] [i_6] = (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (var_13))));
                        arr_25 [i_6] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)61082)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_0] [(unsigned short)2] [(unsigned short)2]) / (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_6]))))) ? ((-(((/* implicit */int) (unsigned short)46839)))) : (((/* implicit */int) ((unsigned short) (unsigned short)65535))))))));
                        var_24 = ((/* implicit */unsigned short) var_8);
                    }
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        arr_28 [i_2] = ((min((((((/* implicit */int) (unsigned short)4453)) / (var_8))), (((/* implicit */int) min(((unsigned short)0), (var_5)))))) / (max((((var_4) / (((/* implicit */int) (unsigned short)65530)))), (((var_3) / (arr_20 [i_0] [i_1 + 3] [0]))))));
                        arr_29 [i_1] = ((/* implicit */unsigned short) ((arr_16 [i_0] [i_0] [i_0] [i_0] [3] [i_2] [i_7]) > (((/* implicit */int) (((-(((/* implicit */int) var_11)))) >= (((((/* implicit */_Bool) (unsigned short)11314)) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_1] [i_1 + 3] [i_0] [8])) : (((/* implicit */int) (unsigned short)27569)))))))));
                        var_25 = (unsigned short)65528;
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            var_26 *= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (unsigned short)61432)))) ? (arr_27 [(unsigned short)7] [(unsigned short)2]) : (((/* implicit */int) ((((/* implicit */_Bool) -1370703433)) || (((/* implicit */_Bool) (unsigned short)3780))))))) != (max((((/* implicit */int) max(((unsigned short)17016), ((unsigned short)61428)))), ((~(arr_11 [i_0] [i_1] [i_2] [i_7] [(unsigned short)6] [i_8])))))));
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(20))))));
                        }
                        for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            var_28 *= min((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_9] [i_9]))))), (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_1 - 1] [(unsigned short)1] [(unsigned short)7])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_1 + 2] [i_1 + 4] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_1 + 3] [i_7] [i_7])))));
                            var_29 ^= ((unsigned short) ((((((/* implicit */int) var_9)) | (var_13))) & (((((/* implicit */_Bool) var_12)) ? (arr_32 [i_7] [(unsigned short)9]) : (0)))));
                            arr_34 [i_7] = (+((((!(((/* implicit */_Bool) var_2)))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) >= (((/* implicit */int) (unsigned short)41006))))))));
                        }
                        for (int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_0 + 2] [i_1] [(unsigned short)0] [i_0 + 2] [i_7] [i_10] = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_27 [i_2] [(unsigned short)5])) ? (((((/* implicit */_Bool) arr_13 [9] [3] [(unsigned short)9] [i_10])) ? (((/* implicit */int) (unsigned short)42404)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_10])) ? (var_3) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) min((var_1), (arr_5 [i_0 + 1] [i_1 + 4] [i_2])))));
                            arr_38 [1] [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))) ? (max((((/* implicit */int) ((unsigned short) var_9))), (max((arr_22 [i_0 + 1] [i_0 + 1] [i_2] [i_7] [i_10]), (arr_36 [2] [2] [i_2] [i_7] [i_10]))))) : (((int) ((arr_32 [i_0] [i_7]) & (((/* implicit */int) arr_30 [i_0] [i_1] [i_1 + 1] [i_2] [i_1 + 1] [i_10])))))));
                        }
                    }
                    arr_39 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) ((unsigned short) var_7))) - (50051)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) arr_33 [(unsigned short)5] [(unsigned short)5] [i_1 + 3] [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)54231))))) ? (((((/* implicit */_Bool) (unsigned short)8534)) ? (-11) : (((/* implicit */int) var_1)))) : ((~(((/* implicit */int) (unsigned short)65506)))))) : (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [(unsigned short)9])))), (((/* implicit */int) (unsigned short)6))))));
                    arr_40 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min((260565557), (var_6))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((unsigned short) ((unsigned short) 0))))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 8; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            {
                                arr_45 [i_0] [i_1] [i_1] [i_11] [i_1] [i_11] = ((/* implicit */int) arr_35 [i_0 + 1] [i_1] [i_2] [i_11] [i_12]);
                                var_30 ^= ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)4108))))))));
                                arr_46 [2] [(unsigned short)0] [i_2] [i_11] [i_12] [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_2])) ? (((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [(unsigned short)3] [i_1 + 1] [i_12])) : (((/* implicit */int) arr_1 [i_1 - 1]))))));
                                var_31 |= (((-(((/* implicit */int) (unsigned short)65535)))) / (arr_11 [i_0] [i_0] [i_1] [i_1 - 1] [(unsigned short)1] [i_11 + 1]));
                                arr_47 [i_0 + 1] [i_1] [i_2] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (+(2139124023)))) ? (var_8) : (((/* implicit */int) var_2))))));
}
