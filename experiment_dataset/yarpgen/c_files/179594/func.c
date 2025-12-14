/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179594
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) ((unsigned int) arr_0 [i_0]));
        arr_2 [i_0] = ((/* implicit */int) (!(((_Bool) var_10))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_8);
        var_19 ^= ((/* implicit */unsigned short) ((((4194303ULL) / (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) arr_4 [(short)17] [(short)17]))))))));
    }
    for (int i_2 = 2; i_2 < 20; i_2 += 4) 
    {
        var_20 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)4)), (1534665521)))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)13174))))) : (var_6)));
        /* LoopNest 2 */
        for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            for (long long int i_4 = 3; i_4 < 21; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_3 + 4])), (arr_10 [i_3])))) ? (((((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 2] [i_2 - 2] [i_3])))))))));
                    var_22 = ((/* implicit */signed char) var_13);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        arr_15 [i_2] [i_2] [i_2] [i_3] = (-(70128171130623731ULL));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_6 + 1])) ? (arr_12 [i_4 + 1] [i_4 + 1] [i_6] [i_6 + 1]) : (arr_12 [i_4 - 3] [i_4] [i_6 + 1] [i_6 + 1])));
                            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (unsigned short)4))));
                            arr_18 [i_2 - 2] [i_3 + 4] [i_3] [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) ((arr_17 [i_3 + 3]) - (((/* implicit */unsigned long long int) arr_5 [i_2 + 2]))));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_5 [i_4 + 1])) : (var_11)));
                        arr_19 [i_2] [i_3] [i_2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_14))))));
                        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        var_27 += ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_4 - 3] [i_3 + 1] [i_4])) ? (arr_11 [i_4 - 1] [i_3 - 1] [i_7]) : (arr_11 [i_4 - 3] [i_3 - 1] [i_4]))) & (((/* implicit */int) var_14))));
                        var_28 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (min((((/* implicit */unsigned long long int) var_3)), (var_2)))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)65529)) ? (32767LL) : (32767LL))), (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) (unsigned short)65535)))))));
                            var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_16 [(unsigned char)6] [i_3] [i_3])) ? (((/* implicit */int) var_4)) : (arr_16 [i_3] [i_4 - 3] [i_3]))) - ((((!(((/* implicit */_Bool) (unsigned short)4)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)64107)))) : (((/* implicit */int) (!((_Bool)1))))))));
                            arr_25 [i_3] [i_3] [i_3] [i_7] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_8 [i_3] [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])))) ? (((/* implicit */int) ((var_8) <= (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_10 [i_3]) : (arr_10 [i_3])))));
                            var_31 = ((/* implicit */short) (+(max((((4294967295U) >> (((((/* implicit */int) var_7)) - (162))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2204809589539743534LL)) ? (2147483647) : (((/* implicit */int) var_0)))))))));
                        }
                        for (unsigned long long int i_9 = 4; i_9 < 21; i_9 += 3) 
                        {
                            var_32 *= ((/* implicit */short) (!(((/* implicit */_Bool) (+((-(7825004056380018940LL))))))));
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)39)) ? (7825004056380018940LL) : (var_16)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_3))))) : ((+(((arr_8 [i_2] [i_7]) ? (((/* implicit */unsigned long long int) -1299868412046993509LL)) : (var_2))))))))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            arr_32 [i_3] [i_7] [i_4] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3] [i_3])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (~(arr_16 [i_2] [i_2] [i_7]))))));
                            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (+(arr_11 [i_2 + 1] [i_2 - 1] [i_3 - 1]))))));
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) var_8))));
                        }
                        var_37 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_2] [i_3 + 4] [i_3] [i_2 + 2]))))), (max((((/* implicit */unsigned long long int) arr_20 [i_2 - 1] [i_3 + 1] [i_3] [i_2 + 2])), (arr_23 [i_2] [i_2] [i_3 + 4]))));
                        var_38 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) + (arr_10 [i_3]))) == (((/* implicit */int) var_1))));
                    }
                    var_39 = (+(((/* implicit */int) ((unsigned char) arr_21 [i_2 + 1] [i_3] [i_4] [i_4] [i_4 + 1] [i_3]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_11 = 2; i_11 < 20; i_11 += 2) 
        {
            arr_36 [i_11] [i_2] = ((/* implicit */short) ((arr_27 [i_11 - 1] [i_11 + 1] [i_2 + 2] [i_2 - 2] [i_2 - 2]) > (arr_27 [i_11 - 1] [i_11] [i_2 + 2] [i_2 + 1] [i_2 - 2])));
            var_40 = ((/* implicit */signed char) ((int) arr_17 [i_2]));
            var_41 = ((((/* implicit */int) arr_35 [i_2 - 1])) < (986740979));
            arr_37 [i_11] [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14)))));
        }
        for (unsigned short i_12 = 2; i_12 < 21; i_12 += 2) 
        {
            arr_40 [i_2 - 1] [i_2 - 2] [i_2 - 1] = (+((+((+(0U))))));
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)52360))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_12 + 1] [i_12 - 2]))))))))));
            arr_41 [i_12 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))))), (var_6)));
        }
        arr_42 [i_2 + 1] [(unsigned char)2] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_8 [i_2 - 1] [i_2]))))));
        /* LoopSeq 1 */
        for (short i_13 = 1; i_13 < 21; i_13 += 3) 
        {
            var_43 = (+(((/* implicit */int) (unsigned short)13174)));
            var_44 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_7)))));
            var_45 = ((/* implicit */unsigned char) ((((((((((/* implicit */int) var_15)) + (2147483647))) << (((18446744073709551615ULL) - (18446744073709551615ULL))))) << ((((((~(var_13))) + (391094836947767185LL))) - (21LL))))) / (((/* implicit */int) (_Bool)1))));
        }
    }
    var_46 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)13174)) : (var_8)))) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)1029))) + (1099511627775LL)))));
    var_47 = ((/* implicit */signed char) var_6);
}
