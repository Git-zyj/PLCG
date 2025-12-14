/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102761
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
    var_14 = ((unsigned long long int) var_6);
    var_15 = ((unsigned long long int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 += ((/* implicit */unsigned char) var_5);
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((long long int) -1651006912632252787LL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_11 [i_3 - 1] = ((/* implicit */long long int) var_8);
                    var_18 = ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (2046573749839615364ULL));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 4) 
        {
            var_19 = var_4;
            var_20 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3896029918798497004LL)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)15))))) == (var_5))) ? (max((((/* implicit */unsigned long long int) max((var_2), (var_7)))), (max((((/* implicit */unsigned long long int) var_11)), (var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_11))))) % (((/* implicit */int) var_9)))))));
            var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (max((((/* implicit */long long int) var_6)), (((-3432846319269083356LL) & (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
        }
        var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            arr_17 [i_1] = ((/* implicit */unsigned char) ((long long int) var_9));
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
                var_24 = ((/* implicit */unsigned long long int) var_2);
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    var_25 &= ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((unsigned char) var_12)))));
                }
                var_27 = var_2;
                var_28 = ((/* implicit */long long int) var_12);
            }
            for (signed char i_8 = 3; i_8 < 10; i_8 += 4) 
            {
                var_29 = ((/* implicit */long long int) ((var_5) < (var_12)));
                /* LoopSeq 3 */
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((signed char) var_10));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)22))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((long long int) var_11))));
                        var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -3432846319269083344LL)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (signed char)0)))) + (((/* implicit */int) var_7))));
                        arr_33 [i_1] [i_5] [i_8 + 2] [i_8] = ((/* implicit */unsigned long long int) var_10);
                    }
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                    {
                        arr_36 [i_8] [i_5] [i_8] [11ULL] [i_11] = ((/* implicit */unsigned char) ((10291245475043253614ULL) >= (((/* implicit */unsigned long long int) 2741202071922537959LL))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((long long int) var_2))));
                        var_34 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 105553116266496LL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (signed char)-113))));
                        arr_37 [i_8] [(unsigned char)5] [i_8] [i_8] [i_11] [i_8] = ((/* implicit */signed char) ((var_1) | (var_12)));
                    }
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))));
                }
                for (unsigned char i_12 = 1; i_12 < 9; i_12 += 2) 
                {
                    arr_41 [i_8] = ((/* implicit */unsigned long long int) var_2);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) var_8);
                        var_37 = ((/* implicit */unsigned char) ((unsigned long long int) var_12));
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) var_1))));
                        var_39 = ((unsigned long long int) var_3);
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((((/* implicit */_Bool) var_2)) ? (var_4) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((var_5) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))))))));
                }
                for (signed char i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) var_0))));
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 2; i_16 < 12; i_16 += 2) 
                    {
                        var_44 ^= ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((long long int) var_13)) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
                        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (signed char)-113))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)242)))) : (((((/* implicit */_Bool) var_13)) ? (4067011124677879ULL) : (923973216636519268ULL)))));
                    }
                }
                var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_12)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) < (((/* implicit */int) ((unsigned char) (signed char)-12)))));
            }
            for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 4) /* same iter space */
            {
                arr_56 [12LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_4)));
                var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))));
                /* LoopSeq 1 */
                for (signed char i_18 = 2; i_18 < 10; i_18 += 2) 
                {
                    var_50 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (-3432846319269083356LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_19 = 2; i_19 < 10; i_19 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))));
                        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0)))) : (var_1)));
                        var_53 = ((long long int) (unsigned char)254);
                        var_54 = ((/* implicit */signed char) ((long long int) var_3));
                    }
                }
            }
            for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 4) /* same iter space */
            {
                var_55 = ((/* implicit */signed char) ((unsigned long long int) var_1));
                var_56 = ((/* implicit */unsigned long long int) var_3);
                /* LoopSeq 2 */
                for (long long int i_21 = 0; i_21 < 13; i_21 += 2) /* same iter space */
                {
                    arr_68 [i_1] [i_5] [i_1] [i_21] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))));
                    arr_69 [i_20] [i_1] [i_20] [i_21] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5))))));
                }
                for (long long int i_22 = 0; i_22 < 13; i_22 += 2) /* same iter space */
                {
                    var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))));
                    arr_74 [i_1] [i_5] [i_1] [i_20] [i_22] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (17522770857073032348ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99)))));
                    var_58 = ((/* implicit */unsigned long long int) max((var_58), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (((unsigned long long int) var_10))))));
                    var_59 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))));
                    /* LoopSeq 1 */
                    for (signed char i_23 = 1; i_23 < 10; i_23 += 4) 
                    {
                        var_60 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))))));
                        arr_78 [i_1] [i_5] [i_1] [i_1] [i_23] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) : (-1419691998580972780LL)));
                    }
                }
                var_61 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) var_6))));
                arr_79 [i_20] [3LL] [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) & (var_1));
            }
            /* LoopNest 2 */
            for (long long int i_24 = 2; i_24 < 12; i_24 += 2) 
            {
                for (long long int i_25 = 0; i_25 < 13; i_25 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_26 = 0; i_26 < 13; i_26 += 4) 
                        {
                            var_62 = ((/* implicit */signed char) max((var_62), (var_13)));
                            var_63 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) < (var_0))))) < (var_5)));
                            var_64 = ((/* implicit */unsigned long long int) ((unsigned char) var_11));
                        }
                        for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 4) 
                        {
                            var_65 = ((/* implicit */long long int) ((signed char) var_13));
                            arr_90 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (var_4)));
                        }
                        arr_91 [i_1] [i_5] [i_24 + 1] [i_5] [i_25] [i_25] = ((((/* implicit */_Bool) ((signed char) var_0))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))));
                        var_66 *= var_3;
                        /* LoopSeq 3 */
                        for (long long int i_28 = 3; i_28 < 12; i_28 += 4) /* same iter space */
                        {
                            var_67 = ((/* implicit */long long int) ((signed char) var_5));
                            var_68 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4)));
                        }
                        for (long long int i_29 = 3; i_29 < 12; i_29 += 4) /* same iter space */
                        {
                            var_69 = ((/* implicit */signed char) ((unsigned long long int) var_6));
                            var_70 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12)))));
                        }
                        for (long long int i_30 = 3; i_30 < 12; i_30 += 4) /* same iter space */
                        {
                            var_71 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_12))) : (var_0)));
                            arr_98 [i_1] [i_1] [i_24] [i_30] [i_30] = ((/* implicit */long long int) ((((long long int) var_2)) != (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        }
                        var_72 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))));
                    }
                } 
            } 
        }
    }
}
