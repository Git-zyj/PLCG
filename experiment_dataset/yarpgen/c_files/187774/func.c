/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187774
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(min((((/* implicit */int) (short)32767)), (260046848)))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_19 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned char) min((((/* implicit */int) var_17)), (2147483647))))) : (var_0));
                        var_20 ^= (~((((-(((/* implicit */int) (short)32767)))) / (((((/* implicit */int) arr_0 [i_2])) * (((/* implicit */int) (unsigned short)23859)))))));
                        var_21 ^= (((((-(((/* implicit */int) (short)(-32767 - 1))))) + (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)37))))))) + (((/* implicit */int) min(((unsigned short)23982), (((/* implicit */unsigned short) (short)7401))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        var_22 = (-(max((((/* implicit */int) arr_0 [i_1])), (((((/* implicit */int) arr_4 [i_0] [5])) * (((/* implicit */int) arr_5 [i_4] [i_0])))))));
                        arr_14 [i_2] [i_1] [(unsigned short)4] |= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_11 [i_4] [(signed char)5] [i_2] [i_1] [i_0] [i_0]))))));
                        var_23 = ((/* implicit */int) var_9);
                        var_24 |= ((/* implicit */signed char) (-(min((((long long int) 1181668466942221800LL)), (max((var_5), (((/* implicit */long long int) var_14))))))));
                    }
                    var_25 += ((((/* implicit */_Bool) (~(max((arr_10 [i_0]), (arr_12 [i_2] [i_0] [i_1] [i_0])))))) ? (((/* implicit */int) arr_13 [i_2] [i_1] [i_2] [i_2])) : (((/* implicit */int) var_3)));
                    /* LoopSeq 4 */
                    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        arr_17 [i_1] [i_1] [i_2] [13] = ((/* implicit */long long int) min((((/* implicit */int) (unsigned char)170)), (arr_7 [i_1] [i_1])));
                        var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [(short)5]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_8)))) : (((int) (unsigned short)20716))))) ? ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_5 [i_5] [i_1])))))) : ((~(((/* implicit */int) (short)32767))))));
                    }
                    for (int i_6 = 2; i_6 < 11; i_6 += 3) 
                    {
                        arr_20 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_6 - 2] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_6 + 3] [i_6 + 2] [i_6 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 795803258)) ? (((/* implicit */int) (short)(-32767 - 1))) : (1825936480))))))) : (((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_5)) ? (2147483647) : (((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_27 = ((/* implicit */short) max((((/* implicit */int) var_14)), (min((((/* implicit */int) min((arr_16 [i_1] [i_2] [i_1]), ((short)32766)))), (((-683240283) % (683240283)))))));
                        arr_21 [i_6 - 2] [i_1] [i_1] [i_0] = arr_19 [i_0] [i_0] [i_2] [(short)9];
                    }
                    for (int i_7 = 2; i_7 < 12; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_4))));
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_0)))) | (6953714180057109135LL))))));
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) -5800075270607899220LL))));
                            arr_27 [(unsigned short)1] [i_1] [i_2] [i_1] [2] [i_1] = ((/* implicit */signed char) min((min((((/* implicit */int) arr_11 [i_0] [i_0] [8LL] [i_0] [i_0] [i_0])), (arr_10 [i_1]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_2])))))));
                        }
                        for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) min((arr_18 [(unsigned short)1] [i_1] [i_7] [(short)7]), (var_10)))) ? ((+(-848034855))) : (((((/* implicit */_Bool) 3223254311276880242LL)) ? (((/* implicit */int) arr_28 [i_0] [i_1] [(signed char)14] [0] [i_9] [i_0] [0])) : (((/* implicit */int) var_4)))))));
                            var_31 = ((/* implicit */short) ((((int) max((((/* implicit */long long int) 876598022)), (6603215007979520568LL)))) + (min((((/* implicit */int) ((short) (unsigned char)255))), (51530716)))));
                            arr_30 [i_0] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */int) ((unsigned short) (-(arr_22 [i_1] [i_9] [i_1] [i_7 - 1] [i_7 - 2]))));
                            var_32 = ((((/* implicit */int) arr_23 [i_0] [i_0] [5] [i_2] [i_0] [i_9])) % (((/* implicit */int) ((unsigned char) (-(5062508572877420865LL))))));
                            var_33 += ((/* implicit */unsigned char) (-(min((((((/* implicit */int) (short)32767)) + (arr_7 [i_0] [i_1]))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [(signed char)1] [i_1] [i_9])) : (((/* implicit */int) arr_5 [i_0] [i_1]))))))));
                        }
                        for (int i_10 = 2; i_10 < 14; i_10 += 4) 
                        {
                            arr_35 [i_7] [i_7 + 2] [i_1] [i_7] [i_7] [i_7] = ((/* implicit */long long int) var_9);
                            arr_36 [i_0] [i_1] [i_0] [i_7] [i_0] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_23 [i_7 - 2] [i_10 + 1] [i_10] [i_10] [i_10] [i_10 - 1])), (arr_15 [i_7 - 2] [i_10 + 1] [i_10] [i_1])))) ? (max((var_5), (((/* implicit */long long int) (short)(-32767 - 1))))) : (((/* implicit */long long int) ((2147483647) - (arr_7 [i_1] [i_10 - 2])))));
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((short) ((((/* implicit */int) (short)13029)) / (848034854)))))));
                            arr_37 [(unsigned short)9] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-408052563946873412LL))) - (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_1] [i_1] [i_7 + 2] [i_10 - 2]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((602589473940061091LL), (((/* implicit */long long int) var_18))))))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_35 = ((/* implicit */int) ((max((((/* implicit */long long int) var_12)), (var_10))) * (((/* implicit */long long int) ((int) arr_5 [i_0] [i_0])))));
                        var_36 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((-8636499723938190220LL) + (((/* implicit */long long int) -1905623903))))))) ? (min((((876598022) / (var_6))), (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [(signed char)11])))) : (((((/* implicit */_Bool) ((arr_15 [i_0] [i_0] [i_0] [i_1]) / (((/* implicit */int) var_12))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned short)13] [i_0])))))))));
                        var_37 = (+(((((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_11] [i_11])) / (-376522444))) ^ (((/* implicit */int) min(((short)-8192), (((/* implicit */short) (signed char)127))))))));
                    }
                }
            } 
        } 
    } 
    var_38 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_18) : (((/* implicit */int) var_17))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)103))) : (var_5))), (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-8582)) * (((/* implicit */int) (short)-8192))))) ? ((+(var_7))) : (((/* implicit */int) var_15)))))));
    var_39 ^= ((/* implicit */long long int) var_18);
    var_40 = ((/* implicit */unsigned short) (+((-(7558179637389434819LL)))));
}
