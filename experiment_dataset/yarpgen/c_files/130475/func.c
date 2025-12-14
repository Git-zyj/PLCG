/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130475
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
    var_10 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1U)) && (((/* implicit */_Bool) 2427172232U)))) ? (1198660359U) : (var_0)))) || (((/* implicit */_Bool) var_9))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] |= ((/* implicit */long long int) var_0);
        var_11 = ((/* implicit */unsigned int) min((var_11), (4294967295U)));
        arr_3 [22LL] = ((((/* implicit */_Bool) min((var_3), (var_5)))) ? ((-(3247293084U))) : ((-(var_7))));
    }
    for (long long int i_1 = 3; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((var_8) >> ((((~(arr_5 [i_1 + 1]))) - (1231819805U))));
        arr_7 [i_1] = arr_5 [i_1 - 3];
        var_12 = ((/* implicit */unsigned int) max((var_12), (var_7)));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 22; i_3 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) 2427172232U)) ? (arr_9 [i_1 - 3] [12LL] [i_3 - 1]) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_1]), (1490086218U)))) ? (1942948193U) : (var_9)))))))));
                    var_14 = max((arr_8 [i_1] [i_1]), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_10 [0U])))) ? (2202795488U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1198660359U)) || (((/* implicit */_Bool) var_4))))))))));
                    var_15 = var_2;
                    var_16 += ((/* implicit */unsigned int) ((0U) < (var_0)));
                }
            } 
        } 
        var_17 *= ((/* implicit */unsigned int) var_1);
    }
    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((2427172232U) * (arr_12 [i_4]))))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 3; i_7 < 19; i_7 += 4) 
                    {
                        arr_23 [i_4] [i_5] [i_6] [i_4] &= 1198660359U;
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 3) /* same iter space */
                        {
                            arr_26 [i_4] [i_4] [i_8] [i_7] [i_7] = ((/* implicit */long long int) 2427172232U);
                            arr_27 [i_8] [i_5] [i_7] [i_6] [i_5] [i_8] = ((((/* implicit */_Bool) (+(arr_21 [i_5 - 1] [i_5] [i_5 + 1] [i_6 + 3])))) ? ((-(arr_21 [i_4] [i_5] [i_5 + 1] [i_6 + 2]))) : (((/* implicit */long long int) (+(4294967295U)))));
                            var_18 = ((/* implicit */unsigned int) var_6);
                        }
                        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((long long int) ((long long int) ((((/* implicit */_Bool) var_4)) ? (285978576338026496LL) : (((/* implicit */long long int) 1077722746U)))))))));
                            var_20 -= ((/* implicit */long long int) ((((max((-646754999808454685LL), (((/* implicit */long long int) 805427008U)))) >= ((-(var_6))))) ? ((~(2537769549U))) : (((3029081310U) % (arr_10 [i_4])))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 3; i_10 < 19; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((max((((/* implicit */long long int) ((1634581687U) / (4294967291U)))), (arr_9 [i_4] [i_4] [22LL]))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) 1879048192U)))))))))));
                            arr_33 [i_5] [i_4] [2U] [i_5] [4U] [1U] [i_4] = (+(max((arr_21 [i_5 + 1] [i_10 - 1] [i_7 - 2] [i_6 + 1]), (-6040830910784667542LL))));
                            var_22 = (+(arr_12 [i_7]));
                            var_23 = ((/* implicit */unsigned int) ((((long long int) var_0)) - (((/* implicit */long long int) ((unsigned int) ((unsigned int) var_8))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            arr_36 [i_4] [i_4] [i_4] [i_4] [i_11] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -6040830910784667542LL)) ? (-7941201161444891473LL) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) : (((/* implicit */long long int) ((((var_2) == (3758096384U))) ? (536870914U) : ((~(16776704U)))))));
                            arr_37 [16U] [i_11] [16U] = ((/* implicit */long long int) var_8);
                        }
                        for (long long int i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            arr_41 [i_4] [i_6 + 2] [i_6 + 2] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(8388352U)))) & (var_1)));
                            var_24 ^= ((/* implicit */unsigned int) (~(max((min((-6040830910784667542LL), (1867278453606451410LL))), (((/* implicit */long long int) 2427172232U))))));
                        }
                    }
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        arr_44 [i_4] [i_4] [i_4] [i_4] = (-(((unsigned int) 3758096398U)));
                        var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) (+(arr_11 [i_4] [10U] [i_13])))) : (((long long int) min((var_3), (((/* implicit */long long int) arr_30 [i_13])))))));
                        arr_45 [15LL] [15LL] [i_6] [i_13] = ((/* implicit */unsigned int) -6040830910784667550LL);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_4])) || (((/* implicit */_Bool) arr_38 [i_6 - 1] [i_6 + 3] [13U] [i_6 - 1] [i_6 - 1])))) || (((/* implicit */_Bool) var_9)))))));
                    }
                    for (long long int i_14 = 1; i_14 < 16; i_14 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min((((/* implicit */long long int) (+((-(867432873U)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 1655638248U)) ? (2639329048U) : (arr_1 [0U])))), (-7887326345514811186LL))))))));
                        arr_48 [i_4] [i_5] [i_6] [i_5] = (+(((var_4) & (((/* implicit */long long int) arr_24 [i_4] [i_4])))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((unsigned int) max((((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */long long int) arr_29 [9U])) : (801375872001097015LL))), (((((/* implicit */_Bool) var_3)) ? (arr_17 [i_4]) : (((/* implicit */long long int) arr_10 [i_4])))))))));
                        var_29 *= ((((/* implicit */_Bool) ((unsigned int) max((2639329048U), (1205141955U))))) ? ((~(arr_46 [7LL] [i_5] [7LL] [i_14]))) : (3910776180U));
                        arr_49 [i_4] [i_4] = ((/* implicit */long long int) ((((arr_25 [i_14 + 4] [i_14 + 4] [i_14 + 3] [i_14] [i_14 + 2] [15U]) / (536870898U))) * (var_7)));
                    }
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_16 = 3; i_16 < 17; i_16 += 2) 
                        {
                            var_30 ^= arr_1 [15LL];
                            arr_55 [i_16] [i_15] [i_4] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((2639329048U) << (((var_0) - (2313842353U))))))))));
                        }
                        for (long long int i_17 = 1; i_17 < 19; i_17 += 4) /* same iter space */
                        {
                            arr_60 [i_4] [i_4] [i_4] [i_4] [i_4] [16U] = ((/* implicit */unsigned int) ((min((min((var_5), (var_5))), (((/* implicit */long long int) 2169262932U)))) / (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_34 [i_4] [i_4] [i_4] [18U] [i_4]) : (arr_52 [i_4] [i_5] [i_5] [i_17])))))));
                            var_31 = ((((((/* implicit */_Bool) 1016431276U)) ? (var_7) : (3427534422U))) & ((~(arr_50 [i_15] [i_17 - 1] [i_6 + 1] [i_15] [i_17 - 1] [i_5 + 1]))));
                            var_32 *= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 4294967295U)), (arr_16 [i_4])))) && (((/* implicit */_Bool) var_6))))), (((2398204173U) >> (((((((/* implicit */_Bool) var_6)) ? (3624615522U) : (arr_20 [3U]))) - (3624615498U))))));
                        }
                        for (long long int i_18 = 1; i_18 < 19; i_18 += 4) /* same iter space */
                        {
                            arr_65 [i_4] [i_5] [i_6] [i_6] [i_18] [i_5] = ((/* implicit */unsigned int) ((max((var_5), (((/* implicit */long long int) var_7)))) >= (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_18 + 1]) >= (arr_35 [i_5 - 1] [i_15] [i_15] [i_15] [i_18] [18U] [i_18 - 1])))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_17 [i_5 - 1])))) ? (((max((2031436749U), (2973947007U))) & (max((4294967295U), (3758096352U))))) : (var_0))))));
                        }
                        for (long long int i_19 = 0; i_19 < 20; i_19 += 2) 
                        {
                            arr_68 [i_19] [i_19] [i_19] [i_19] [8U] [i_19] |= (+(((arr_62 [i_4] [i_5] [i_6 - 1] [14U] [i_6]) * (arr_62 [i_6] [i_6] [i_6 + 1] [i_19] [i_6 + 1]))));
                            arr_69 [i_4] [i_5] [i_6 + 2] [i_15] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (+(arr_14 [i_19]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (var_4)));
                            arr_70 [i_5] = ((/* implicit */long long int) 1U);
                            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1073741823U)) ? (((long long int) var_8)) : (var_6))) / (min(((-(var_3))), (var_4))))))));
                            arr_71 [i_4] [i_4] [i_6 - 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_15])))))));
                        }
                        arr_72 [i_4] [i_5] [i_6 + 3] [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 840631961U)) + (min((((/* implicit */long long int) 4294967295U)), (-801375872001097012LL))))))));
                        arr_73 [i_4] [i_4] [i_4] [i_15] = ((/* implicit */unsigned int) ((max((arr_9 [i_4] [i_4] [i_4]), (var_1))) / (((((((/* implicit */_Bool) 3209171777U)) ? (9223372036854775807LL) : (801375872001096992LL))) >> (((((9223372036854775807LL) - (((/* implicit */long long int) 989707968U)))) - (9223372035865067825LL)))))));
                    }
                    var_35 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) arr_50 [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5])), (var_4)))));
                }
            } 
        } 
    }
}
