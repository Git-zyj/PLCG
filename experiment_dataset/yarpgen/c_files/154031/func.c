/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154031
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
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_17 = (i_2 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))))) ^ (((/* implicit */int) arr_7 [i_2] [i_3] [i_1] [i_2])))) + (2147483647))) << (((((long long int) var_10)) - (1903763906LL)))))) : (((/* implicit */unsigned long long int) ((((((((((/* implicit */int) min((var_9), (((/* implicit */unsigned short) arr_4 [i_0] [i_0]))))) ^ (((/* implicit */int) arr_7 [i_2] [i_3] [i_1] [i_2])))) - (2147483647))) + (2147483647))) << (((((long long int) var_10)) - (1903763906LL))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 5960285236052487864LL)) ? (var_14) : (((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_8 [i_4] [i_3] [1LL] [i_1] [(short)3] [i_0] [i_0]) == (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_4 [i_0 - 2] [6LL])))))))) : (min((arr_6 [i_1] [i_2] [i_1] [i_4 - 1] [i_4 - 2] [i_0 - 1]), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1] [i_3] [i_2] [i_1]))))))))))));
                                var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (+(((1556092191U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-2500)))))))), (11798845118504583600ULL)));
                            }
                        } 
                    } 
                    arr_10 [i_0 + 1] [i_0 + 1] [i_2] = ((/* implicit */short) arr_2 [i_0] [(short)9] [i_2]);
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (short)19323);
        arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((6647898955204967985ULL), (((/* implicit */unsigned long long int) -1095518009))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1] [(short)0]))) : (717598388U)));
        arr_12 [i_0 + 1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 14613960723038035307ULL)) ? (-5960285236052487864LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20576))))) & (((((/* implicit */_Bool) max((14068914380723216888ULL), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))))) ? (max((8974388500750595135LL), (((/* implicit */long long int) (short)4028)))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) 1095518008)) & (var_10))))))));
    }
    var_21 *= ((/* implicit */unsigned short) var_14);
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5]))))), (((((/* implicit */int) (short)32496)) * (((/* implicit */int) (short)-26646))))));
        /* LoopSeq 3 */
        for (short i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            var_23 -= ((/* implicit */long long int) ((((/* implicit */int) ((short) max((6647898955204968015ULL), (((/* implicit */unsigned long long int) var_14)))))) % (min((((((/* implicit */int) (short)32496)) >> (((((/* implicit */int) arr_13 [i_5])) - (11590))))), ((~(((/* implicit */int) var_11))))))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 19; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    {
                        arr_23 [(short)2] [i_7] [i_8] |= ((/* implicit */short) (-(((int) ((646059677) / (((/* implicit */int) arr_13 [i_8])))))));
                        var_24 = ((/* implicit */long long int) (~(arr_21 [i_5] [i_5] [i_5] [i_5])));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((646059677), (((/* implicit */int) max((var_11), (((short) (unsigned short)55470))))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) arr_18 [i_5] [i_6] [i_5]);
        }
        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (short)29460))) / (-5960285236052487864LL))), (-2854437511284675583LL)))) ? (arr_25 [i_5] [i_5] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(2618199143U))))))))));
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_12)))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -4397730197216657773LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 7621154258008581806LL)))))) : (var_10)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 646059677)) : (arr_21 [i_5] [i_5] [i_9] [i_9])))));
        }
        for (unsigned int i_10 = 2; i_10 < 19; i_10 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                arr_33 [i_5] [(short)8] [i_11] = -5960285236052487850LL;
                arr_34 [4ULL] [i_10] [i_5] = ((/* implicit */long long int) (short)29085);
                /* LoopSeq 1 */
                for (long long int i_12 = 1; i_12 < 18; i_12 += 1) 
                {
                    var_29 -= ((long long int) 3546614087U);
                    arr_37 [i_10] [i_5] [i_10] [i_10] [i_10] = ((/* implicit */short) ((unsigned short) (unsigned short)47444));
                    var_30 ^= ((/* implicit */short) (+(9519357027126142679ULL)));
                }
            }
            for (unsigned short i_13 = 4; i_13 < 19; i_13 += 1) 
            {
                arr_40 [i_5] [6U] [6U] [i_5] = ((/* implicit */long long int) max((((((/* implicit */int) arr_24 [i_13 - 2] [i_10 - 2])) / (-718142865))), (((/* implicit */int) min((arr_24 [i_13 + 1] [i_10 - 1]), (arr_24 [i_13 - 3] [i_10 + 1]))))));
                var_31 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -7621154258008581802LL)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_16 [(short)16]))) ^ (arr_16 [(unsigned short)16])));
            }
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                var_32 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_30 [i_5] [i_5] [i_5] [i_5])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_10 - 2]))) ^ (max((10765104745026995913ULL), (((/* implicit */unsigned long long int) 368765891))))))));
                var_33 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)21943)), (1333845876417349119LL)))), (((((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned short) (short)-25685))))) ? (max((arr_21 [i_14] [14U] [i_14] [i_14]), (((/* implicit */unsigned long long int) 2134236458)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1824265937)), (3491573668123446748LL))))))));
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_35 [i_14] [i_10] [i_5])) + (2147483647))) >> (((arr_28 [(short)6]) - (7963429623487021639LL)))))), (((unsigned long long int) arr_27 [i_5] [i_10] [i_14])))), (((/* implicit */unsigned long long int) var_0)))))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 20; i_15 += 1) 
                {
                    var_35 ^= ((/* implicit */unsigned short) ((long long int) (((-(((/* implicit */int) arr_13 [i_10])))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(unsigned short)10]))))))));
                    var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) min((((/* implicit */unsigned long long int) arr_41 [i_5])), ((((+(4520396875785619204ULL))) / (max((1395142641204681335ULL), (((/* implicit */unsigned long long int) arr_42 [17LL] [i_10] [i_14])))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 3) 
                    {
                        var_37 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_25 [i_10 - 1] [(short)14] [i_10 - 2])) & (min((((/* implicit */unsigned long long int) max((arr_29 [14ULL]), (((/* implicit */long long int) -2126283299))))), (min((arr_49 [i_16] [i_16] [6U] [6U] [6U] [i_5] [i_5]), (arr_18 [i_16] [i_15] [i_14])))))));
                        var_38 += ((/* implicit */long long int) min((((arr_16 [0LL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_5] [4U] [(short)6] [i_15] [i_15] [i_14] [i_14])) ? (((/* implicit */int) var_15)) : (min((((/* implicit */int) var_2)), (var_14))))))));
                    }
                }
            }
            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_14) + (((/* implicit */int) arr_32 [0LL]))))) ? (((/* implicit */int) (short)-2422)) : (-1597886250))))));
            var_40 = ((/* implicit */int) var_6);
        }
        var_41 = ((/* implicit */unsigned long long int) max((-1654312067244720913LL), (-1591104965554002839LL)));
    }
    for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
    {
        var_42 -= ((/* implicit */short) var_10);
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
        {
            arr_56 [i_17] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1824265937)), (max((4743704516664208580ULL), (((/* implicit */unsigned long long int) -1104412078)))))))));
            arr_57 [i_18] [i_18] [i_17] |= ((/* implicit */short) min((((/* implicit */int) (!(((((/* implicit */int) arr_35 [11U] [i_18] [i_18])) < (((/* implicit */int) var_9))))))), (min((var_12), (arr_30 [i_17] [i_17] [i_17] [10])))));
        }
    }
    var_43 += ((/* implicit */long long int) var_1);
}
