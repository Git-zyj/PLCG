/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168387
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 += ((/* implicit */int) var_9);
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) -1655351456)), (334375501392743346LL)));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) min(((-(arr_2 [(_Bool)1]))), (min((((/* implicit */unsigned long long int) var_6)), (arr_2 [(_Bool)1]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((var_0) + (min((((/* implicit */long long int) (+(var_10)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41536))) : (334375501392743346LL)))))));
    var_14 = ((/* implicit */int) ((unsigned int) (~((+(var_10))))));
    /* LoopSeq 2 */
    for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 3; i_3 < 10; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4769706018190222618ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 1] [i_3 + 1] [i_4 + 2])))) >= (min((0), (((/* implicit */int) (_Bool)1))))));
                arr_12 [i_3] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) arr_7 [i_3])), (arr_10 [(short)0] [i_3] [i_3] [i_3])));
            }
            for (long long int i_5 = 1; i_5 < 9; i_5 += 1) 
            {
                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -572744440)) ? (min((((/* implicit */long long int) arr_6 [i_2])), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_5 + 3] [(_Bool)1])))))) ? (((/* implicit */long long int) (~(min((arr_9 [i_3 + 2] [i_3] [i_3]), (((/* implicit */unsigned int) arr_6 [(unsigned short)3]))))))) : (min((var_2), (334375501392743346LL)))));
                var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 1] [2LL] [i_5]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_2])), (arr_9 [i_2] [i_3] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (min((241260527832598970LL), (7637161561850193198LL)))))));
            }
            var_18 = (+(arr_13 [i_2] [i_2] [i_2]));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_25 [i_2] [i_2] [i_7] [10LL] = ((/* implicit */unsigned short) var_1);
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            var_19 &= ((/* implicit */unsigned char) var_4);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2 - 1] [i_2 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))));
                            var_21 = ((/* implicit */unsigned short) arr_17 [i_2 + 3]);
                            var_22 = ((/* implicit */int) ((((-3095469560165340518LL) + (10900700993223886LL))) % (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_0) : (var_5)))));
                            var_23 = ((/* implicit */_Bool) (~((~(var_10)))));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7192)) + (((/* implicit */int) arr_18 [i_2] [5LL] [i_2]))));
            var_25 = ((/* implicit */long long int) var_6);
            var_26 |= ((/* implicit */unsigned char) ((arr_9 [i_2 + 2] [i_6] [i_6]) != (arr_9 [i_2 + 1] [i_6] [i_6])));
        }
        /* LoopSeq 2 */
        for (long long int i_10 = 2; i_10 < 10; i_10 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((9904971236127603843ULL) / (((/* implicit */unsigned long long int) 7637161561850193198LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((572744440) >= (((/* implicit */int) (unsigned char)0)))))) : (((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_1))))) ? (((-3292846711595593168LL) / (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            var_28 = ((/* implicit */_Bool) ((signed char) min((((/* implicit */int) (unsigned char)236)), (-467928229))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                var_29 = ((/* implicit */int) ((unsigned char) 384079039534081185LL));
                var_30 ^= ((/* implicit */int) (+(arr_24 [10ULL] [i_2] [i_2 - 2] [i_2] [i_2 + 4])));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */short) (unsigned short)0);
                            var_32 = var_6;
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                arr_40 [(_Bool)0] [i_10] [(short)7] = ((/* implicit */unsigned long long int) var_5);
                arr_41 [(short)8] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 + 1]))));
            }
        }
        /* vectorizable */
        for (unsigned short i_15 = 2; i_15 < 10; i_15 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 3) 
            {
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        {
                            var_33 = ((unsigned long long int) var_7);
                            arr_52 [i_17] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned short) arr_28 [i_2 + 1] [i_15 + 1] [i_17]));
                            var_34 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_29 [i_17] [i_2 + 1] [i_15 + 1]))));
                            arr_53 [i_17] [i_15 + 2] [i_16] [i_17] [i_18] [i_17] [i_17] = ((/* implicit */unsigned short) (-(467928229)));
                            var_35 = ((/* implicit */int) ((((/* implicit */long long int) 11)) % (9223372036854775782LL)));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */short) ((int) var_7));
            /* LoopNest 3 */
            for (unsigned char i_19 = 1; i_19 < 8; i_19 += 3) 
            {
                for (long long int i_20 = 1; i_20 < 11; i_20 += 1) 
                {
                    for (unsigned int i_21 = 2; i_21 < 10; i_21 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)7192))))) ? (((/* implicit */unsigned long long int) arr_17 [i_2 - 1])) : (((((/* implicit */_Bool) arr_10 [i_21] [i_20] [i_19] [i_15])) ? (arr_20 [(_Bool)1] [i_19] [i_19] [i_19]) : (((/* implicit */unsigned long long int) var_10))))));
                            var_38 = ((/* implicit */_Bool) (~((+(arr_33 [i_2] [i_2] [1LL] [i_20] [i_21] [i_19])))));
                            arr_60 [i_2] [i_19] [i_19] [i_19] [i_20] [i_21] = (~(-134272286));
                            var_39 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                            arr_61 [i_2] [i_2] [i_2] [i_2] [i_19] = ((/* implicit */long long int) ((int) arr_33 [i_2] [i_15 - 1] [i_19] [i_20] [i_20] [i_19]));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_22 = 0; i_22 < 12; i_22 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_23 = 2; i_23 < 11; i_23 += 1) 
                {
                    for (long long int i_24 = 1; i_24 < 11; i_24 += 1) 
                    {
                        {
                            var_40 ^= (~(0LL));
                            var_41 = ((/* implicit */long long int) min((var_41), ((+(((arr_44 [i_2] [i_15] [i_15 - 2]) - (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */int) var_0);
            }
            for (int i_25 = 3; i_25 < 10; i_25 += 3) 
            {
                arr_75 [i_2] [i_15] [i_15] [i_25] = ((((/* implicit */_Bool) (unsigned short)58343)) ? (((/* implicit */long long int) -741016966)) : (-9223372036854775804LL));
                /* LoopNest 2 */
                for (long long int i_26 = 4; i_26 < 8; i_26 += 3) 
                {
                    for (int i_27 = 4; i_27 < 11; i_27 += 3) 
                    {
                        {
                            arr_81 [i_26] [i_15] [(short)1] [i_26] [i_27] [i_25] [1ULL] = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)230)))) ? (((((/* implicit */long long int) -793713199)) + (arr_28 [i_2] [i_2] [i_25]))) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_15 - 2] [i_15 - 2] [i_15 + 1] [i_15])))));
                            arr_82 [i_2] [i_15] [i_25] [i_26] [i_25] = ((/* implicit */int) var_2);
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned long long int i_28 = 0; i_28 < 12; i_28 += 3) 
            {
                for (long long int i_29 = 4; i_29 < 9; i_29 += 1) 
                {
                    for (unsigned short i_30 = 0; i_30 < 12; i_30 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_80 [i_29 + 3] [i_15 + 1] [i_15] [i_15 - 2] [i_15] [i_15] [i_2 + 1])))))));
                            arr_90 [i_2] [i_2] [i_28] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_9)))) - (((((/* implicit */_Bool) -9142599971628161597LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)126))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_31 = 0; i_31 < 12; i_31 += 3) 
        {
            var_44 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_2] [i_2 + 2] [i_2] [i_2]))) : (arr_15 [i_2 - 1] [i_31] [i_31])));
            arr_93 [(unsigned short)7] [i_31] [i_31] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((var_10) + (1545861381)))));
            /* LoopNest 3 */
            for (unsigned long long int i_32 = 3; i_32 < 11; i_32 += 3) 
            {
                for (long long int i_33 = 1; i_33 < 9; i_33 += 3) 
                {
                    for (long long int i_34 = 0; i_34 < 12; i_34 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_33] [i_33 + 3] [i_32 - 3] [i_2 - 1] [i_2])) ? (((/* implicit */int) arr_37 [i_33] [i_33 - 1] [i_32 - 2] [i_2 - 2] [i_2])) : (((/* implicit */int) arr_37 [i_33 + 2] [i_33 + 2] [i_32 + 1] [i_2 - 1] [i_2]))));
                            arr_101 [i_2] [i_31] [i_31] [i_32] [i_33] [2ULL] [i_34] = ((/* implicit */_Bool) 3675104804274929113ULL);
                            var_46 = ((/* implicit */_Bool) min((var_46), (((_Bool) -643493567))));
                            var_47 -= ((/* implicit */unsigned long long int) ((unsigned char) var_2));
                        }
                    } 
                } 
            } 
            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)22)) ? ((+(arr_9 [i_2] [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
            var_49 = ((/* implicit */long long int) ((_Bool) 2147483647));
        }
        var_50 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) var_5)) != (4885964638729444687ULL)));
    }
    /* vectorizable */
    for (unsigned short i_35 = 0; i_35 < 22; i_35 += 3) 
    {
        var_51 = ((/* implicit */int) var_3);
        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_103 [i_35])) ? (((unsigned long long int) (unsigned char)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_8))))));
    }
}
