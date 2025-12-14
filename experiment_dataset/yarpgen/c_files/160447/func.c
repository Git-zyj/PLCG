/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160447
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
    var_19 = ((/* implicit */int) var_8);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (5504524723312923241ULL)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) 109894476)) ? (((((/* implicit */unsigned long long int) var_6)) - (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_6 [i_0] [i_1] = arr_4 [i_0] [i_0] [8ULL];
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8383785510036156395LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))) : (1699743923496834891ULL)));
                arr_10 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (-(var_8)));
                var_21 = ((/* implicit */unsigned long long int) var_9);
            }
            for (short i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        {
                            arr_20 [i_0] [i_3] [i_4] [i_0] = ((/* implicit */unsigned int) var_14);
                            var_22 = ((/* implicit */unsigned char) var_10);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) arr_19 [i_0] [3ULL] [i_0] [16ULL]);
            }
            for (short i_6 = 1; i_6 < 22; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((2619472777223854405ULL) >> (((min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_8])), (36028797018963967ULL))) - (64567ULL)))))));
                            var_25 = ((/* implicit */signed char) ((_Bool) min((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-113))))))));
                            var_26 &= ((/* implicit */unsigned short) (-((-(var_6)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_9 = 3; i_9 < 20; i_9 += 3) 
                {
                    arr_31 [i_0] = ((/* implicit */long long int) var_3);
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)56974)) ? (arr_14 [i_0] [i_9 + 2] [i_6] [i_1] [i_0]) : (arr_14 [i_0] [i_1] [15ULL] [i_1] [i_0])));
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_33 [i_6] [i_6 - 1] [i_6] [i_6]))));
                        var_29 = ((/* implicit */long long int) var_10);
                        arr_35 [(_Bool)1] [i_1] [i_6] [i_9 - 2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_6] [i_9 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-100))));
                        var_30 &= ((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_9 + 2] [i_9] [i_9 - 1])) ? (arr_33 [i_9 - 2] [i_9 - 2] [i_9 + 4] [i_9 + 2]) : (((/* implicit */long long int) var_18)));
                    }
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_6 - 1] [i_9])) && (((/* implicit */_Bool) arr_25 [i_6 + 2] [i_0] [i_1] [i_0] [i_1]))));
                        var_32 = ((/* implicit */_Bool) ((int) (unsigned short)56986));
                    }
                    for (unsigned short i_12 = 3; i_12 < 23; i_12 += 2) 
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) / (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)95))) : ((~(var_6)))));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-5926)) : (((/* implicit */int) var_13))))) : ((+(4634901488392971897ULL))))))));
                        var_34 = ((/* implicit */short) (~(((/* implicit */int) arr_40 [i_6 + 1] [i_9 - 1]))));
                    }
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_44 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_13] [i_13 + 1] [i_13 + 1])) : (((/* implicit */int) arr_15 [i_13] [i_13 + 1] [i_13]))));
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((arr_19 [i_0] [i_1] [i_1] [i_13 + 1]) ? ((+(var_6))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_9] [(short)20]))))))))));
                    }
                    arr_45 [i_0] [16ULL] [i_0] [i_9] [i_9] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2035714006)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5504524723312923252ULL)));
                }
                for (unsigned int i_14 = 2; i_14 < 21; i_14 += 1) /* same iter space */
                {
                    arr_49 [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                    arr_50 [i_0] [i_0] = ((/* implicit */unsigned short) ((var_8) == (((/* implicit */unsigned int) min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) arr_15 [i_0] [i_6] [i_6])) : (((/* implicit */int) var_1)))))))));
                }
                for (unsigned int i_15 = 2; i_15 < 21; i_15 += 1) /* same iter space */
                {
                    var_36 = (!(((/* implicit */_Bool) min((16049019232254161218ULL), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_6] [i_0]))))));
                    var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -109894476)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    arr_53 [i_0] [i_6 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) max(((signed char)85), (arr_40 [i_1] [i_0])))) : (((/* implicit */int) (signed char)-108))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((var_13) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_15] [3U] [i_0] [i_0] [i_0]))) : (var_4)))))));
                }
            }
            var_38 = ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) var_5)), (var_15))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1]))))) - (min((((/* implicit */unsigned long long int) var_0)), (max((12474023879534482166ULL), (((/* implicit */unsigned long long int) -1))))))));
            var_39 = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_30 [i_0] [i_1]), (arr_30 [i_0] [i_1])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (1214184722U)))) ? (((/* implicit */int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) (short)8848)))))) : (((/* implicit */int) (_Bool)1))))));
        }
        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((long long int) (-(arr_33 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (signed char i_16 = 0; i_16 < 15; i_16 += 2) 
    {
        arr_56 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_42 [i_16] [i_16] [i_16] [i_16] [i_16]))))) : (((((/* implicit */_Bool) arr_4 [i_16] [(unsigned char)13] [i_16])) ? (arr_25 [i_16] [i_16] [i_16] [i_16] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_16] [i_16] [i_16] [i_16] [i_16])))))));
        /* LoopNest 3 */
        for (short i_17 = 0; i_17 < 15; i_17 += 4) 
        {
            for (short i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                for (signed char i_19 = 2; i_19 < 12; i_19 += 2) 
                {
                    {
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_60 [i_16] [(unsigned short)4] [i_16] [i_16])) && (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_17))))), (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */long long int) 1124757496U))))))))))));
                        arr_66 [i_16] [i_17] [i_16] [i_16] = ((/* implicit */_Bool) var_16);
                        var_42 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_37 [i_19 - 1] [i_19 + 1] [i_19 - 2] [i_19 - 2] [i_19 + 2] [i_19] [i_19 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned int) arr_2 [i_18])), (arr_11 [i_16] [i_16] [i_16] [i_16]))))));
                        arr_67 [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 723605732U)) ? (6227326194297554770LL) : (arr_47 [i_19 - 1] [i_17] [i_17] [i_19])))) ? (((((((/* implicit */_Bool) arr_37 [i_16] [i_16] [i_17] [i_17] [i_18] [i_18] [i_19 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1524))) : (arr_55 [i_16]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_2)))))))) : (((/* implicit */unsigned long long int) ((long long int) arr_64 [i_19 + 1] [i_19 + 1] [i_19 + 3])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 1) 
    {
        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_20])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) var_13))))) ? (arr_37 [(unsigned char)19] [i_20] [i_20] [i_20] [i_20] [(unsigned char)19] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_43 [i_20] [i_20] [i_20]), (arr_43 [i_20] [i_20] [i_20]))))))))));
        var_44 = ((/* implicit */unsigned short) ((short) min((var_14), (((/* implicit */long long int) arr_13 [i_20] [i_20] [i_20] [i_20])))));
    }
}
