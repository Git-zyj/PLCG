/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126435
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((((/* implicit */_Bool) 16070070952133712780ULL)) ? (3716655316U) : (4065345036U));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 2) /* same iter space */
            {
                var_10 = ((((/* implicit */_Bool) 4065345016U)) ? (var_2) : (var_4));
                arr_12 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_2 - 1]))));
            }
            for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 2) /* same iter space */
            {
                var_11 = ((/* implicit */unsigned int) ((3565808185U) == (3565808185U)));
                arr_16 [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5797670426876032280ULL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_9)))) ? (((/* implicit */unsigned long long int) 1326928480U)) : (arr_15 [i_3] [i_3 - 1] [i_1 + 1] [i_1 + 3])));
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                {
                    var_12 -= ((/* implicit */unsigned int) (+(((arr_10 [i_0] [i_0] [i_5]) + (11208508002300308096ULL)))));
                    var_13 -= ((/* implicit */unsigned long long int) var_5);
                    arr_21 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 5053985507302425987ULL))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        arr_26 [i_0] [i_0] [i_4] [i_0] = ((unsigned long long int) var_0);
                        arr_27 [i_0] [i_4] [i_4] [i_4] [i_6] = ((unsigned int) arr_24 [i_4] [i_6 + 2] [i_4] [i_4]);
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 0U)) | (806220707019402641ULL)));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_14 -= 3912949985135379439ULL;
                            arr_32 [i_4] [i_6] [i_4] [i_4] = (((+(arr_2 [i_4]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                            var_15 = ((/* implicit */unsigned long long int) var_4);
                            arr_33 [i_6] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((arr_19 [i_4] [i_6 - 2]) <= (arr_0 [i_5])));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned int) arr_17 [i_6 - 2])))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            arr_36 [i_4] [i_4] [i_4] [i_4] = var_7;
                            var_17 = ((((/* implicit */_Bool) 229622280U)) ? (18446744073709551615ULL) : (15899176931932459849ULL));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            arr_40 [i_0] [i_4] [i_0] [i_0] [i_0] = ((18446744073709551590ULL) + (((/* implicit */unsigned long long int) arr_0 [i_5])));
                            var_18 = ((/* implicit */unsigned int) (((~(arr_10 [i_0] [i_0] [i_0]))) < (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) 3565808185U)) : (7238236071409243524ULL)))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (arr_11 [i_5] [i_5] [i_5])));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            var_20 = (~(6589610052939739073ULL));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((((/* implicit */_Bool) arr_31 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_5])) ? (arr_31 [i_6] [i_6 - 1] [i_6 - 2] [i_6 + 2] [i_6]) : (arr_37 [i_0] [i_6 + 1] [i_6 + 2] [i_0])))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(var_3))))));
                            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) 0ULL)))))));
                        }
                        for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((unsigned long long int) arr_0 [i_6 - 2]));
                            var_25 = ((((/* implicit */_Bool) ((arr_34 [i_0] [i_4] [i_4] [i_4] [i_4]) / (var_2)))) ? (((/* implicit */unsigned long long int) var_5)) : (((0ULL) ^ (((/* implicit */unsigned long long int) var_4)))));
                            arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((29ULL) < (((/* implicit */unsigned long long int) 764797577U))));
                        }
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 3) 
                    {
                        arr_48 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */unsigned int) arr_15 [i_5] [i_4] [i_5] [i_12]);
                        var_26 = ((var_4) << (((arr_15 [i_0] [i_0] [i_0] [i_12]) - (8704689194992613073ULL))));
                        var_27 = ((/* implicit */unsigned long long int) ((unsigned int) 12791966967321569347ULL));
                    }
                }
            } 
        } 
        arr_49 [i_0] [i_0] &= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 0U))))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 17; i_13 += 2) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                {
                    arr_57 [i_0] &= ((/* implicit */unsigned int) ((unsigned long long int) arr_29 [i_13] [i_13 + 1] [i_13 - 1] [i_13 + 1] [i_13 - 1]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 3; i_15 < 17; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                arr_62 [i_0] [i_14] [i_0] [i_0] [i_0] = ((10ULL) ^ (3ULL));
                                arr_63 [i_0] [i_14] [i_14] [i_14] [i_13] [i_14] = ((/* implicit */unsigned int) ((143833713099145216ULL) ^ (18318880343364554480ULL)));
                            }
                        } 
                    } 
                    arr_64 [i_14] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 519168061U)) == (745153960743893666ULL)));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_18 = 0; i_18 < 18; i_18 += 2) 
            {
                for (unsigned int i_19 = 0; i_19 < 18; i_19 += 4) 
                {
                    for (unsigned int i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        {
                            var_28 *= ((/* implicit */unsigned int) ((arr_8 [i_0] [i_0]) + (arr_8 [i_0] [i_20])));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), ((-(arr_72 [i_0] [i_0])))));
                            arr_79 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_18])) ? (arr_2 [i_18]) : (arr_2 [i_20])));
                            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((var_1) >= (519168061U))))));
                        }
                    } 
                } 
            } 
            arr_80 [i_0] = var_8;
            arr_81 [i_0] [i_17] = (-(6543875223670711687ULL));
        }
    }
    for (unsigned int i_21 = 0; i_21 < 18; i_21 += 4) /* same iter space */
    {
        arr_84 [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5654777106387982263ULL)) && (((/* implicit */_Bool) 3728103872U))));
        /* LoopNest 2 */
        for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 4) 
        {
            for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 4) 
            {
                {
                    arr_90 [i_21] [i_22] [i_22] [i_23] = ((((/* implicit */unsigned long long int) 3380552027U)) | (7930358589680483046ULL));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 1; i_24 < 17; i_24 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_25 = 0; i_25 < 18; i_25 += 2) 
                        {
                            arr_97 [i_21] [i_21] [i_21] [i_25] = ((/* implicit */unsigned long long int) (-(((arr_70 [i_21] [i_21] [i_24]) % (var_1)))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), ((-(2088738956U)))));
                            arr_98 [i_23] [i_23] [i_23] [i_23] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (arr_39 [i_21] [i_21] [i_21] [i_24] [i_23]) : (88438855474537599ULL)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_26 = 0; i_26 < 18; i_26 += 4) 
                        {
                            arr_102 [i_26] = ((/* implicit */unsigned long long int) min((((arr_85 [i_21]) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16777215ULL)) ? (2306002451U) : (var_5)))))), ((((~(7740602564909560465ULL))) < (((/* implicit */unsigned long long int) min((var_3), (var_2))))))));
                            var_32 = ((/* implicit */unsigned int) min((var_32), ((((+(arr_2 [i_23]))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551598ULL))))))))));
                            var_33 -= ((/* implicit */unsigned long long int) (~((+(1741052851U)))));
                            var_34 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                        }
                        for (unsigned int i_27 = 2; i_27 < 16; i_27 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 7812445440960832741ULL)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) arr_65 [i_24]))))) ? ((+(18446744073709551615ULL))) : (min((arr_3 [i_21] [i_21]), (arr_10 [i_21] [i_21] [i_21])))))));
                            arr_106 [i_21] [i_27] [i_21] [i_27] [i_21] = ((/* implicit */unsigned long long int) ((3488418511U) & (2968038821U)));
                            var_36 = ((/* implicit */unsigned long long int) min((2968038816U), (165273994U)));
                        }
                        var_37 = ((((/* implicit */unsigned long long int) var_5)) | (max((18446742974197923840ULL), (((/* implicit */unsigned long long int) min((2105680241U), (3069024368U)))))));
                        var_38 = max((var_6), ((-(arr_94 [i_21] [i_24 - 1] [i_23] [i_23] [i_22]))));
                    }
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) min((((/* implicit */unsigned long long int) var_4)), (137438953471ULL))))))));
                }
            } 
        } 
        arr_107 [i_21] = (~(max((18446744073709551576ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_8) : (var_7)))))));
        /* LoopNest 2 */
        for (unsigned int i_28 = 2; i_28 < 17; i_28 += 4) 
        {
            for (unsigned long long int i_29 = 2; i_29 < 14; i_29 += 3) 
            {
                {
                    arr_112 [i_21] [i_28] [i_29] &= ((unsigned int) 12791966967321569348ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_30 = 0; i_30 < 18; i_30 += 2) 
                    {
                        for (unsigned int i_31 = 1; i_31 < 17; i_31 += 3) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_70 [i_29] [i_30] [i_31])) > (858053993121395038ULL))))) >= (min((((/* implicit */unsigned long long int) var_2)), (var_0))))))) % (1365880471597901313ULL)));
                                arr_120 [i_28] [i_29] [i_29] [i_31] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2541197128U)) ? (arr_78 [i_21] [i_28] [i_29] [i_30] [i_30] [i_28] [i_31]) : (arr_60 [i_21])))) ^ ((~(7544139352462322259ULL)))))) ? (((/* implicit */unsigned long long int) min((var_2), (((2220351637U) | (var_4)))))) : (var_0));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_41 = ((/* implicit */unsigned int) 18446744073709551602ULL);
}
