/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182133
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
    var_10 = ((/* implicit */signed char) var_0);
    var_11 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned short)19] [i_0] [i_2] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_0 [1LL]);
                    arr_10 [i_2] [18LL] [i_0] [i_1] = ((/* implicit */signed char) (unsigned char)148);
                    var_12 = arr_7 [i_2];
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) (-((-(var_9)))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) 18446744073709551604ULL);
                /* LoopSeq 4 */
                for (unsigned short i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    arr_19 [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_18 [i_5 - 1]))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_4))));
                }
                for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 1) 
                {
                    var_16 *= ((/* implicit */short) var_1);
                    var_17 -= ((/* implicit */short) (unsigned char)0);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))), (arr_12 [i_7]))));
                        arr_25 [i_3] [i_6] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_1)))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((unsigned char)169), (((/* implicit */unsigned char) var_0)))))))) | (max((var_1), (((/* implicit */unsigned long long int) arr_20 [i_3] [i_4] [i_6 - 3]))))));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) / (2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80))) : (max((((var_1) ^ (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3])))), (((/* implicit */unsigned long long int) (unsigned short)0))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 2; i_9 < 11; i_9 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65531)) ? ((+(((/* implicit */int) arr_29 [i_6 + 1] [i_6 - 3] [i_6 - 3])))) : (((/* implicit */int) ((_Bool) (unsigned char)171))))))));
                            arr_30 [i_9] [i_4] [i_8] [i_8] [i_8] [i_6] = max((((((/* implicit */_Bool) arr_23 [i_6])) ? (((((/* implicit */_Bool) arr_15 [(signed char)0] [i_3])) ? (((/* implicit */int) var_0)) : (var_8))) : (min((var_8), (var_8))))), (((/* implicit */int) ((short) var_5))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) var_7)) ? (arr_21 [i_3] [i_3] [14U] [i_3]) : (((/* implicit */unsigned int) min((max((arr_16 [i_3] [4] [i_3]), (((/* implicit */int) (unsigned char)164)))), (((/* implicit */int) min(((unsigned short)40768), (((/* implicit */unsigned short) arr_22 [i_4] [8ULL] [i_4] [i_4]))))))))))));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_9 + 1] [i_8] [(short)9] [i_3]))));
                        }
                        for (int i_10 = 2; i_10 < 14; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */unsigned char) arr_32 [i_6 - 1])), (var_5))));
                            var_25 *= ((/* implicit */unsigned char) (_Bool)1);
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_3)), (var_7))), (((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_6 + 1] [i_10 - 2] [i_4] [i_10 - 2] [8] [i_10] [0U]))))))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) max((((unsigned int) ((signed char) var_4))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))))))));
                        }
                        for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((var_8), (((/* implicit */int) arr_33 [i_6]))))) ? (((/* implicit */unsigned long long int) var_4)) : (var_7)))));
                            var_29 = ((/* implicit */signed char) 9480231784955942524ULL);
                            arr_36 [11U] [(unsigned short)2] [i_6] [i_8] [2ULL] = ((/* implicit */unsigned long long int) arr_33 [i_6]);
                        }
                        arr_37 [(unsigned char)2] [i_4] [i_6] = ((/* implicit */int) ((unsigned long long int) var_8));
                    }
                    var_30 = ((/* implicit */int) max((745896758U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_6])))))));
                }
                for (long long int i_12 = 4; i_12 < 12; i_12 += 4) 
                {
                    var_31 = ((/* implicit */unsigned char) min(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) 0U))));
                    arr_42 [i_3] [i_4] = ((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)51)))), (((/* implicit */int) max((arr_29 [i_3] [i_4] [11ULL]), (((/* implicit */unsigned short) var_3))))))) ^ (((/* implicit */int) (unsigned short)26218)));
                    var_32 = ((/* implicit */signed char) var_8);
                }
                for (short i_13 = 2; i_13 < 12; i_13 += 3) 
                {
                    arr_46 [i_3] [i_4] [i_13 - 2] [i_13] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_13]))) : (arr_21 [i_3] [i_3] [(signed char)2] [13LL])))) ? (var_2) : (var_2))) + (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_3] [i_4] [i_4] [i_13 + 2])) - (var_8)))), (var_2)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_3))));
                        var_34 |= ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) (unsigned short)0)))));
                    }
                    for (short i_15 = 1; i_15 < 12; i_15 += 4) 
                    {
                        arr_53 [i_3] [i_15] [11U] [11U] = ((/* implicit */int) ((max((((2ULL) << (7ULL))), (((/* implicit */unsigned long long int) -598478460)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_16 = 1; i_16 < 12; i_16 += 4) 
                        {
                            var_35 = (~(((/* implicit */int) ((unsigned char) max((5681619638726544455LL), (((/* implicit */long long int) var_0)))))));
                            var_36 -= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)163))))), (max((((/* implicit */unsigned long long int) arr_20 [i_16] [i_16] [i_16])), (14989677042074480336ULL))))) ^ (((/* implicit */unsigned long long int) var_8))));
                            var_37 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned char)19)) != (((/* implicit */int) var_0)))))) > (14497229894105745084ULL)));
                        }
                        for (unsigned long long int i_17 = 1; i_17 < 12; i_17 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned int) (unsigned char)86);
                            var_39 += ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) ((9617573857233654278ULL) == (((/* implicit */unsigned long long int) -2147483647)))))) / (((arr_13 [i_13 - 1] [i_4]) / (((/* implicit */long long int) 35630203U)))))), (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_17 - 1] [i_17] [i_17 + 1] [i_17 + 1] [i_17 + 2] [11] [i_17 + 1])) & (((/* implicit */int) arr_28 [i_17 + 3] [i_17 + 3] [i_4] [i_17] [i_17 - 1] [(unsigned char)0] [i_17 + 3])))))));
                            var_40 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((731486962U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_4])))))))), ((+(((((/* implicit */_Bool) (unsigned short)6)) ? (14497229894105745059ULL) : (((/* implicit */unsigned long long int) 4294967284U))))))));
                        }
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 3) 
                        {
                            var_41 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_38 [i_13 - 2] [i_15 - 1])) ? (arr_38 [i_13 + 1] [i_15 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_3] [(short)0] [i_13 + 2] [i_18] [i_18] [i_15 + 1]))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)53843), ((unsigned short)53843))))) > (((var_0) ? (((/* implicit */long long int) arr_61 [i_13] [i_4] [i_13] [i_18])) : (arr_38 [7U] [i_13]))))))));
                            arr_64 [5ULL] [i_15] [i_4] [i_13] [14LL] [i_18] [14LL] = ((/* implicit */unsigned char) arr_29 [4] [4] [i_15]);
                        }
                        var_42 = ((/* implicit */unsigned short) (+(((arr_15 [i_13 - 2] [i_15]) << ((((+(var_8))) + (1233264531)))))));
                        var_43 = ((/* implicit */int) var_6);
                    }
                    for (unsigned short i_19 = 2; i_19 < 12; i_19 += 2) 
                    {
                        var_44 = ((/* implicit */_Bool) (~(var_1)));
                        var_45 = ((/* implicit */unsigned long long int) min((4294967287U), (((/* implicit */unsigned int) (unsigned char)169))));
                        var_46 &= ((/* implicit */unsigned int) var_0);
                        var_47 = var_4;
                    }
                    /* LoopNest 2 */
                    for (short i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        for (unsigned int i_21 = 2; i_21 < 13; i_21 += 4) 
                        {
                            {
                                var_48 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned char)108))))))), (((unsigned long long int) max((var_1), (var_7))))));
                                var_49 = ((/* implicit */int) arr_29 [3ULL] [i_13 + 2] [(unsigned short)2]);
                                var_50 = ((/* implicit */unsigned char) ((unsigned long long int) 710608156));
                                var_51 += (~((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)120)))))));
                                var_52 = ((/* implicit */unsigned char) 6000975971753311393ULL);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
