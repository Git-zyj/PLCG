/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121057
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
    var_18 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((13253676485852311009ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (var_17)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_17))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))));
                                var_21 = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        for (long long int i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) var_6);
                                var_23 = ((((/* implicit */_Bool) min((((var_1) ? (var_5) : (var_5))), (min((((/* implicit */long long int) var_10)), (var_17)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_9)))) : (var_11));
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (signed char)-52)))))));
                            }
                        } 
                    } 
                }
                var_25 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_17) : (var_17)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) ? (min((((/* implicit */long long int) (_Bool)1)), (6350914011248001834LL))) : (var_5)));
            }
        } 
    } 
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((var_3) ? (var_17) : (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((var_3) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        arr_21 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                {
                    var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))));
                    arr_27 [i_7] [i_7] [i_9] [i_7] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_17));
                    /* LoopNest 2 */
                    for (signed char i_10 = 3; i_10 < 13; i_10 += 4) 
                    {
                        for (int i_11 = 1; i_11 < 13; i_11 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */int) var_16)))))));
                                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                    arr_36 [(signed char)2] [i_9] [i_9] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                }
            } 
        } 
    }
    for (unsigned char i_12 = 4; i_12 < 8; i_12 += 4) 
    {
        arr_39 [(unsigned char)9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_2)) ? (var_9) : (var_6))), (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned char) var_3)))))));
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            arr_42 [(unsigned char)1] [i_13] = ((/* implicit */short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_15))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_13), (((/* implicit */unsigned char) (signed char)34)))))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) var_2))))))));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_6)))) ? (max((((/* implicit */long long int) var_16)), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        }
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) ? (var_17) : (var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_16)))))) : (min((((/* implicit */long long int) var_12)), (var_9))))))));
        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_1))));
    }
    for (unsigned char i_14 = 1; i_14 < 15; i_14 += 2) 
    {
        var_33 *= ((/* implicit */unsigned short) var_10);
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (short)-5736))));
            var_35 += ((/* implicit */short) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))), (((/* implicit */int) min(((signed char)-65), ((signed char)-9))))));
            var_36 = var_7;
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
    {
        /* LoopSeq 4 */
        for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                for (unsigned short i_19 = 0; i_19 < 10; i_19 += 4) 
                {
                    {
                        var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3707)) ? (((/* implicit */int) (unsigned short)43648)) : (((/* implicit */int) (short)-5717)))))));
                        arr_60 [i_16] [(signed char)0] [i_17] [(signed char)0] [i_18] [i_19] |= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_5));
                    }
                } 
            } 
            arr_61 [i_16] [i_17] |= ((/* implicit */_Bool) var_10);
        }
        for (signed char i_20 = 0; i_20 < 10; i_20 += 2) 
        {
            var_38 += ((/* implicit */short) var_17);
            arr_65 [i_20] &= ((/* implicit */unsigned short) var_1);
            /* LoopNest 2 */
            for (unsigned short i_21 = 1; i_21 < 8; i_21 += 1) 
            {
                for (long long int i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    {
                        var_39 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))));
                        arr_72 [5LL] = ((/* implicit */unsigned long long int) ((var_3) ? (var_6) : (var_9)));
                        arr_73 [i_16] = ((/* implicit */unsigned long long int) var_0);
                        arr_74 [(short)7] [i_20] [i_21] [7ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_9)));
                    }
                } 
            } 
            var_40 = ((/* implicit */int) var_4);
        }
        for (signed char i_23 = 0; i_23 < 10; i_23 += 3) 
        {
            var_41 = var_12;
            arr_79 [i_16] [i_23] = ((/* implicit */long long int) var_11);
            var_42 ^= ((/* implicit */signed char) var_4);
            var_43 -= ((/* implicit */long long int) var_13);
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))));
        }
        for (short i_24 = 1; i_24 < 8; i_24 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_25 = 4; i_25 < 9; i_25 += 4) 
            {
                for (unsigned int i_26 = 0; i_26 < 10; i_26 += 2) 
                {
                    {
                        var_45 ^= ((/* implicit */short) var_5);
                        var_46 -= ((/* implicit */short) var_4);
                    }
                } 
            } 
            var_47 = ((/* implicit */signed char) var_15);
            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))));
        }
        var_49 = ((/* implicit */short) var_4);
        arr_88 [i_16] = ((var_3) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
        /* LoopSeq 2 */
        for (unsigned int i_27 = 3; i_27 < 8; i_27 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_28 = 0; i_28 < 10; i_28 += 1) 
            {
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    {
                        arr_95 [1ULL] [i_27] [i_27] [i_28] [i_28] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))));
                        /* LoopSeq 1 */
                        for (unsigned short i_30 = 0; i_30 < 10; i_30 += 1) 
                        {
                            arr_98 [i_30] [i_30] [i_29] [i_28] [i_30] [i_16] = ((/* implicit */unsigned long long int) var_10);
                            arr_99 [i_16] [i_27] [i_30] [i_28] [i_28] [(unsigned char)1] [i_30] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-30327)) : (((/* implicit */int) (unsigned short)20499))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6))));
                            arr_100 [i_16] [i_16] [i_28] [i_28] [(_Bool)1] [i_29] [i_30] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_2)) : (var_15)));
                        }
                    }
                } 
            } 
            var_50 = ((/* implicit */long long int) var_12);
        }
        for (long long int i_31 = 0; i_31 < 10; i_31 += 2) 
        {
            var_51 -= ((/* implicit */unsigned int) var_7);
            /* LoopNest 2 */
            for (short i_32 = 1; i_32 < 9; i_32 += 4) 
            {
                for (unsigned char i_33 = 0; i_33 < 10; i_33 += 2) 
                {
                    {
                        var_52 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (short)27034))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                        arr_110 [i_31] [i_31] [(unsigned short)6] [(short)4] |= ((/* implicit */short) var_16);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_34 = 0; i_34 < 10; i_34 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_35 = 0; i_35 < 10; i_35 += 2) 
                {
                    for (short i_36 = 1; i_36 < 8; i_36 += 2) 
                    {
                        {
                            var_53 += ((/* implicit */short) var_17);
                            var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) var_9))));
                            var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                var_56 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned long long int) var_17))));
                var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) var_10))));
            }
        }
        var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_11)));
    }
}
