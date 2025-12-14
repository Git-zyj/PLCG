/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188912
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
    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */int) var_11)), (var_1))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))))) * (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [17ULL] [17ULL] [i_0]) ? (arr_1 [i_1]) : (arr_1 [(unsigned short)10])))) ? (((/* implicit */unsigned long long int) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55465)))))) : (arr_0 [i_0] [i_1])));
            var_15 = ((/* implicit */unsigned long long int) max((var_15), ((~(arr_0 [i_1] [i_1])))));
            var_16 = ((/* implicit */int) 1004679558U);
            arr_4 [4ULL] [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned char)6] [i_1])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [14ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((1004679553U) * (2147479552U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))))) * ((+(max((((/* implicit */int) arr_2 [i_0] [i_2] [i_2])), (arr_1 [i_0])))))));
            var_17 = ((/* implicit */unsigned int) ((max((min((((/* implicit */unsigned long long int) (_Bool)0)), (17260905854629350238ULL))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_2] [i_2]) ? (((/* implicit */int) arr_2 [i_0] [i_0] [(short)5])) : (var_2)))))) ^ (min((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_0 [i_0] [i_2])))));
        }
        var_18 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((long long int) var_1))) ^ (((((/* implicit */_Bool) arr_0 [10U] [(unsigned short)7])) ? (((/* implicit */unsigned long long int) var_7)) : (arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (unsigned short)0))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            arr_10 [i_3] = ((_Bool) ((var_12) != (((/* implicit */unsigned int) -2143438047))));
            arr_11 [i_0] [i_3] = ((/* implicit */unsigned char) ((((var_11) && (((/* implicit */_Bool) arr_8 [(unsigned short)15] [i_3] [i_3])))) ? (((unsigned int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */unsigned int) arr_1 [(_Bool)1]))));
            arr_12 [i_3] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))) & (((((/* implicit */unsigned int) var_10)) + (arr_6 [4ULL])))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
        {
            arr_15 [i_0] = ((/* implicit */unsigned long long int) ((var_7) != (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_10))) < (arr_5 [i_4]))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                arr_19 [i_5] = ((/* implicit */unsigned int) (((-(((arr_13 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_14 [i_4 - 1] [i_4 - 1] [i_4]))))));
                var_19 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_4 + 1]) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)208)) ? (13810646021921408582ULL) : (((/* implicit */unsigned long long int) 3290287754U))))) ? (((1004679565U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) 813897557))))));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_26 [4U] [i_4] [i_5] [i_6] [i_0] [i_7] [i_4] = ((/* implicit */long long int) arr_0 [i_4 + 1] [i_4 + 1]);
                            arr_27 [i_0] [(short)12] [i_5] [i_5] [(short)12] [i_6] [(_Bool)1] = ((/* implicit */int) ((((((/* implicit */_Bool) 1004679561U)) ? (0ULL) : (16893582467224164826ULL))) - (((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (arr_0 [i_4 - 1] [i_4]) : (arr_0 [i_4 - 1] [i_6])))));
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_16 [i_0] [i_0] [i_4 - 1] [i_0]), (arr_16 [i_4] [i_6] [i_4 + 1] [i_6])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1]))) * (((arr_16 [i_0] [i_4 - 1] [i_5] [i_6]) % (arr_6 [(short)3]))))))));
                        }
                    } 
                } 
                arr_28 [i_5] [i_4 - 1] [i_5] [i_0] = max((max((arr_5 [i_4 - 1]), (((/* implicit */int) arr_25 [i_4 - 1] [i_5])))), (((/* implicit */int) ((arr_5 [i_4 + 1]) >= (arr_23 [i_4 + 1] [i_4 + 1] [11ULL])))));
                var_21 = (i_5 % 2 == zero) ? (((/* implicit */unsigned long long int) max(((~(max((3290287739U), (((/* implicit */unsigned int) (_Bool)0)))))), (((/* implicit */unsigned int) ((arr_17 [i_5] [i_0] [i_4 - 1] [i_5]) / (((((/* implicit */int) var_4)) >> (((arr_24 [14ULL] [14ULL] [14ULL] [i_4] [i_5] [14ULL]) + (1017376506))))))))))) : (((/* implicit */unsigned long long int) max(((~(max((3290287739U), (((/* implicit */unsigned int) (_Bool)0)))))), (((/* implicit */unsigned int) ((arr_17 [i_5] [i_0] [i_4 - 1] [i_5]) * (((((/* implicit */int) var_4)) >> (((((arr_24 [14ULL] [14ULL] [14ULL] [i_4] [i_5] [14ULL]) + (1017376506))) - (804188106)))))))))));
            }
        }
        for (long long int i_8 = 3; i_8 < 16; i_8 += 1) 
        {
            var_22 = ((/* implicit */int) min((var_22), (((int) max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) -2084551950)) ? (((/* implicit */int) (short)-32755)) : (1787024834)))))))));
            var_23 = ((/* implicit */unsigned char) (~((-(((((/* implicit */_Bool) 6578439063065497949ULL)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_8] [i_8])))))))));
            arr_31 [(unsigned short)14] [(_Bool)1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_8])))))));
            arr_32 [i_8] [i_8] = ((/* implicit */short) max((arr_23 [i_0] [i_0] [i_0]), (max((((((/* implicit */_Bool) var_7)) ? (579324753) : (((/* implicit */int) arr_30 [i_8 - 3] [i_8] [i_8])))), (arr_17 [i_8] [i_8] [i_8] [i_8])))));
        }
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), (max((var_1), (((/* implicit */int) var_6))))))) & (((((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) & (((/* implicit */unsigned long long int) var_2))))));
    var_25 = ((/* implicit */int) min((161576960621572282ULL), (((/* implicit */unsigned long long int) 3290287739U))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
    {
        for (short i_10 = 1; i_10 < 15; i_10 += 1) 
        {
            {
                arr_38 [i_9] [i_9] [i_9] = arr_21 [i_10 + 1] [i_10 + 3] [12LL] [i_9];
                var_26 = ((/* implicit */unsigned int) arr_25 [i_9] [i_9]);
                /* LoopSeq 3 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (long long int i_12 = 1; i_12 < 15; i_12 += 1) 
                    {
                        var_28 += ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) * (1800029685)))));
                        arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_6 [i_10]))))) || (((/* implicit */_Bool) min(((+(((/* implicit */int) arr_20 [i_9])))), (((/* implicit */int) max(((unsigned short)54772), (((/* implicit */unsigned short) (short)-32755))))))))));
                        arr_45 [i_9] [i_9] [12U] [i_9] [14U] [i_12] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1004679558U)) ? ((~(((int) var_5)))) : (((/* implicit */int) ((short) arr_13 [i_12 + 3])))));
                        arr_46 [i_9] = ((/* implicit */short) min(((-(12741475077448372444ULL))), (((/* implicit */unsigned long long int) ((((arr_36 [i_9]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) arr_23 [i_9] [i_12 + 1] [i_11 - 1])) : (((((/* implicit */_Bool) arr_23 [3] [i_11] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_36 [i_9]))))))));
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_29 += ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_10 + 2] [i_10 + 2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_10 + 3] [i_10 + 3]) : (arr_0 [i_10 + 1] [i_10]))))));
                            arr_51 [i_10] [4LL] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) arr_47 [16] [16]))) < (6756474330985120668LL))), (((((/* implicit */int) (unsigned short)0)) != (var_1)))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_41 [i_9] [(unsigned short)4] [i_9] [i_9]))) && (((/* implicit */_Bool) arr_36 [8ULL])))))));
                        }
                    }
                    arr_52 [i_10 + 3] [i_10 + 3] [i_9] = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) ((_Bool) var_1))), (((6014978804995961486LL) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                }
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 2; i_16 < 15; i_16 += 1) 
                        {
                            {
                                arr_60 [i_16] [i_9] [i_9] [i_10] = ((/* implicit */short) (-(max((((((/* implicit */_Bool) arr_13 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_10] [i_10] [i_9]))) : (13942315988724683493ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_9] [i_9])))))))));
                                arr_61 [i_9] [14] [i_9] [i_9] [i_9] [i_9] [i_9] = ((((/* implicit */_Bool) (-(((/* implicit */int) ((4095) > (((/* implicit */int) arr_47 [i_9] [i_9])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_15] [(_Bool)1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9] [i_9] [9])))))) ? (((/* implicit */unsigned int) arr_24 [i_9] [15U] [9U] [i_15] [i_9] [i_16])) : (arr_57 [i_9])))) : (((((((/* implicit */_Bool) arr_17 [i_9] [i_10 - 1] [i_14] [i_14])) ? (((/* implicit */unsigned long long int) 975317870U)) : (arr_37 [i_15] [i_10] [i_10]))) + ((+(var_9))))));
                            }
                        } 
                    } 
                    arr_62 [i_9] [i_9] [i_9] [i_14] = ((/* implicit */_Bool) max((((unsigned long long int) arr_40 [i_9] [i_9])), (((/* implicit */unsigned long long int) (+((-(var_3))))))));
                }
                /* vectorizable */
                for (int i_17 = 2; i_17 < 17; i_17 += 1) 
                {
                    arr_65 [i_9] [i_10 + 3] [i_9] = ((/* implicit */unsigned int) ((arr_0 [i_17 - 1] [i_17 - 1]) > (arr_0 [i_17 - 2] [i_17 - 2])));
                    arr_66 [i_9] [i_9] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_9] [i_17 + 1]))));
                    arr_67 [i_9] [(_Bool)1] [i_9] = (-((-(arr_0 [i_9] [i_10 + 1]))));
                }
                /* LoopNest 3 */
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    for (int i_19 = 1; i_19 < 15; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) 
                        {
                            {
                                arr_75 [i_19] [i_19] [7] [i_19 + 3] [i_9] = ((/* implicit */int) (((((_Bool)1) ? (8376980923876772917LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46176))))) / (((/* implicit */long long int) max((1244524449U), (((/* implicit */unsigned int) arr_63 [i_18] [i_18] [i_18 - 1] [i_18 - 1])))))));
                                var_30 = ((/* implicit */_Bool) max((var_30), ((((-(((/* implicit */int) arr_63 [i_9] [i_18 - 1] [i_19 + 2] [i_19])))) >= (max((arr_70 [12LL] [(_Bool)1] [i_18]), (((((/* implicit */int) (unsigned short)43788)) * (((/* implicit */int) (_Bool)1))))))))));
                                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
