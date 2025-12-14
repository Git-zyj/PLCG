/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111472
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (var_8))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_11 = ((/* implicit */_Bool) (~((~(max((((/* implicit */int) var_2)), (var_0)))))));
            var_12 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)229));
            var_13 *= ((/* implicit */_Bool) max((((unsigned int) var_8)), (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */long long int) (-(max((max((((/* implicit */int) arr_0 [i_0])), (var_6))), ((-(((/* implicit */int) var_7))))))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (short i_5 = 3; i_5 < 13; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0] [(short)0] [i_0] = min((((/* implicit */unsigned int) min((var_8), (((/* implicit */short) arr_0 [i_0]))))), (min((((/* implicit */unsigned int) arr_18 [(short)0] [i_2 - 1] [i_3] [i_0] [i_5])), (min((arr_15 [i_0] [i_3] [i_3] [7U] [i_0] [i_5 - 2] [i_2 - 1]), (arr_15 [i_0] [i_0] [i_2 - 1] [i_2 - 1] [i_0] [i_4] [i_5]))))));
                            arr_20 [i_5] [i_0] [i_3] [i_3] [i_0] [13U] = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) max((var_3), (var_3)))), (var_8)))) ^ (((((/* implicit */int) arr_8 [i_0] [i_2 - 1] [i_5] [i_0])) - (((/* implicit */int) arr_8 [i_2] [i_2 - 1] [i_3] [i_0]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                for (short i_7 = 3; i_7 < 13; i_7 += 2) 
                {
                    for (int i_8 = 1; i_8 < 13; i_8 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_0])) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [11]) ? (((/* implicit */int) arr_0 [i_0])) : (var_5)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((arr_1 [i_8]), (arr_25 [i_0] [i_2 - 1] [i_2 - 1]))))))) ? (arr_5 [i_8 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((16796030005508546996ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26539))))), ((!(((/* implicit */_Bool) var_1))))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_9 = 1; i_9 < 14; i_9 += 1) 
        {
            arr_32 [i_0] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_21 [i_9] [i_9 - 1] [i_9] [i_0])), (max(((~(arr_28 [i_0] [i_0] [i_0] [i_9 + 1] [i_0] [i_0] [i_9]))), (((unsigned long long int) arr_0 [i_0]))))));
            arr_33 [11] [i_0] = ((/* implicit */unsigned char) arr_28 [i_9 - 1] [i_0] [i_9] [i_9] [i_9 + 1] [i_9] [i_9 - 1]);
            var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_28 [i_9 - 1] [0LL] [i_9] [i_0] [0LL] [0LL] [(unsigned char)6])))) ? (((/* implicit */long long int) ((unsigned int) min((arr_29 [10LL]), (arr_21 [i_0] [i_9 + 1] [i_9 - 1] [i_9]))))) : (((((long long int) var_4)) << ((((-(var_6))) - (558987224)))))));
        }
        for (unsigned int i_10 = 4; i_10 < 14; i_10 += 3) 
        {
            var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) * (((/* implicit */int) var_3)))))))) <= (var_5)));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 1; i_11 < 14; i_11 += 4) 
            {
                /* LoopSeq 4 */
                for (long long int i_12 = 2; i_12 < 14; i_12 += 4) 
                {
                    var_18 &= ((/* implicit */int) ((arr_5 [(short)11] [i_10]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 293376580957447620ULL))))))));
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((!(var_3))) ? (((/* implicit */int) ((arr_15 [(short)1] [i_0] [i_0] [i_10 - 3] [i_0] [9U] [i_12]) < (((/* implicit */unsigned int) var_6))))) : (((/* implicit */int) min((arr_12 [i_0] [i_10] [(short)7] [i_11 - 1] [i_12 - 1]), (((/* implicit */short) arr_41 [i_0] [12LL] [i_10 - 3] [i_11 + 1] [i_0] [(unsigned short)9]))))))))));
                }
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        arr_47 [i_11 + 1] [i_0] [i_14] = ((/* implicit */unsigned int) var_8);
                        arr_48 [i_0] [6U] [i_11] [i_13] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_13])) ? (((/* implicit */int) arr_17 [i_0] [i_10 - 3] [i_11 + 1] [i_13] [i_14])) : (((/* implicit */int) arr_24 [i_0] [i_13] [i_13] [i_13] [(_Bool)1] [i_13]))))));
                        var_20 = ((/* implicit */unsigned char) arr_28 [(_Bool)1] [i_0] [i_13] [7] [i_11 - 1] [i_0] [(_Bool)1]);
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_0] [i_10 + 1] [i_10] [i_11 - 1] [i_14] [(short)12])) ? (arr_3 [i_10 - 2] [i_10 - 4]) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_10 - 4] [i_10] [i_11 + 1] [i_14] [i_14])))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_22 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) ((int) var_9)))), ((~(((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [8] [i_10] [(short)8] [i_10] [8U])))))))));
                        arr_52 [i_15] [i_13] [i_0] [i_10 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((short) arr_39 [(short)8] [(short)11] [(unsigned char)7]))) < (((/* implicit */int) ((_Bool) ((long long int) var_9))))));
                        var_23 = ((/* implicit */int) min((var_23), ((-(((/* implicit */int) arr_12 [i_0] [(short)0] [i_11] [i_13] [i_15]))))));
                    }
                    arr_53 [i_0] = ((/* implicit */_Bool) var_4);
                }
                for (long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_16] [6LL])))))));
                    arr_57 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_44 [i_10 - 2] [8U] [i_0] [12LL] [i_0]))))), ((-(((/* implicit */int) arr_50 [i_11] [i_10] [i_10] [i_10])))))))));
                }
                for (unsigned int i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    var_25 -= ((/* implicit */_Bool) max((min((max((1650714068201004636ULL), (((/* implicit */unsigned long long int) (unsigned char)248)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_17] [i_0] [i_10] [i_17]))))))), (((/* implicit */unsigned long long int) ((long long int) (_Bool)0)))));
                    var_26 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) arr_29 [i_17])), (arr_4 [i_17] [i_17])))) % ((+(((/* implicit */int) arr_8 [i_10 - 3] [4U] [i_10] [i_17]))))))), (min((max((1650714068201004636ULL), (((/* implicit */unsigned long long int) 3834014095U)))), (((/* implicit */unsigned long long int) var_5))))));
                    var_27 = ((/* implicit */unsigned char) (+((-(max((var_4), (((/* implicit */unsigned int) var_6))))))));
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    for (unsigned int i_19 = 2; i_19 < 14; i_19 += 2) 
                    {
                        {
                            arr_70 [i_0] [(unsigned short)12] [i_11] [i_19] [i_18] = ((/* implicit */short) min(((+(((/* implicit */int) ((((/* implicit */int) var_3)) <= (arr_31 [i_0] [i_11] [(unsigned char)9])))))), ((-((-(var_5)))))));
                            var_28 = ((/* implicit */unsigned int) ((unsigned short) arr_55 [i_10 - 1] [i_10 - 4] [i_0] [i_19 + 1]));
                            arr_71 [i_11 + 1] [i_11] [i_0] [i_11] = ((short) var_3);
                            arr_72 [i_10] [i_0] [i_18] [i_10] = ((/* implicit */short) min((((max((arr_28 [(short)14] [i_0] [i_11] [i_18] [i_19] [i_0] [i_10 - 3]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_19])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_8))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_49 [i_0] [i_10 - 2] [i_11 - 1] [i_18] [i_18] [i_19])) ? (arr_31 [i_0] [i_0] [i_11]) : (((/* implicit */int) var_8)))) / (var_5))))));
                            arr_73 [i_0] [i_0] [(unsigned char)10] [i_18] [8ULL] [8ULL] [i_19] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_67 [i_0] [i_10 - 1] [i_11 + 1] [i_18] [i_19 - 1])) || (((/* implicit */_Bool) arr_67 [i_0] [(_Bool)0] [i_11 - 1] [i_0] [i_19 - 2])))));
                        }
                    } 
                } 
            }
        }
        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) min((((min((arr_43 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_4)))) << (((int) var_3)))), (((/* implicit */long long int) ((((/* implicit */int) min((arr_4 [(_Bool)1] [i_0]), (arr_69 [12] [i_0])))) | (((/* implicit */int) min((arr_41 [2LL] [0] [i_0] [12U] [0] [i_0]), (((/* implicit */unsigned char) arr_60 [i_0] [(short)2] [i_0] [i_0])))))))))))));
    }
    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(18144337298000982585ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), (var_1))))))))) % (min(((~(18153367492752103996ULL))), ((~(var_9))))))))));
}
