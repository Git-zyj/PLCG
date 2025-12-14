/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130340
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_18))))) ? (arr_1 [i_1 - 1] [i_1 + 3]) : (((/* implicit */long long int) max((2063567746), (((/* implicit */int) var_11)))))))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) : (17081544373084544108ULL)))));
                        var_21 += ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)-64)) ? (arr_2 [i_0] [(unsigned short)0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))) << (((((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_2] [i_1 + 3] [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-47)))) - (22151))))) & (((/* implicit */unsigned int) max((1235840972), (((((/* implicit */_Bool) (unsigned char)238)) ? (131071) : (((/* implicit */int) (_Bool)0)))))))));
                        arr_10 [i_0] [i_1] = ((/* implicit */long long int) max((min((((/* implicit */int) (unsigned short)59023)), (-932921161))), (((((((/* implicit */_Bool) var_7)) ? (var_13) : (arr_6 [(signed char)2] [i_1] [i_2] [i_3]))) & (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */int) var_6))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            {
                                var_22 = (i_1 % 2 == zero) ? ((!(((/* implicit */_Bool) (((~(-1235840973))) << (((((670272485) >> (((arr_8 [i_0] [i_1] [i_0] [i_0]) - (841153986U))))) - (670272485)))))))) : ((!(((/* implicit */_Bool) (((~(-1235840973))) << (((((((((670272485) >> (((((arr_8 [i_0] [i_1] [i_0] [i_0]) - (841153986U))) - (3007126255U))))) - (670272485))) + (669617953))) - (30))))))));
                                var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) -1235840958)) * (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned int) var_5))))) : (3696349994629356828ULL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned int) var_4);
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)-31)))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */int) ((_Bool) arr_5 [i_0] [i_1 + 3] [i_2]))) : (((((/* implicit */int) arr_3 [i_0] [(unsigned char)1])) ^ (((/* implicit */int) arr_18 [6U] [i_0] [i_0] [i_2] [9])))))), (((/* implicit */int) ((((/* implicit */int) min((var_18), (((/* implicit */unsigned short) (_Bool)1))))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2])))))))))))));
                    var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) 1843785961U)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (-3477572656502989255LL)))))) ? (((/* implicit */long long int) 1235840967)) : (((((/* implicit */_Bool) (~(1235840966)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (-7662471367872258021LL)))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 3; i_8 < 10; i_8 += 4) 
                {
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_12))));
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((2451181339U) & (((/* implicit */unsigned int) 1235840977)))))));
                }
                arr_24 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_1)) : (((-4484670470335930693LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 + 2])))))));
                var_30 = ((/* implicit */unsigned long long int) var_16);
            }
        } 
    } 
    var_31 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((var_16) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) <= (((/* implicit */long long int) ((int) var_4)))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_8)) ? (15331085661656153683ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
    var_32 |= ((((/* implicit */long long int) ((/* implicit */int) var_15))) & (max((((var_8) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-111))))), (((/* implicit */long long int) ((unsigned char) (unsigned short)51338))))));
}
