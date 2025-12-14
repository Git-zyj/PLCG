/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149545
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) var_18)) + (2147483647))) << (((/* implicit */int) var_10))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] = ((/* implicit */int) 70368677068800ULL);
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 811829443)))) ? ((~(-811829444))) : ((-(((/* implicit */int) var_8)))))))));
        }
        for (signed char i_2 = 3; i_2 < 22; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (var_0))));
            arr_11 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2])) * ((~(((/* implicit */int) (short)32273))))));
        }
        for (signed char i_3 = 3; i_3 < 22; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                var_21 = ((/* implicit */long long int) ((((((/* implicit */int) (short)0)) + (((/* implicit */int) arr_1 [i_3] [i_4])))) + (((/* implicit */int) ((short) (unsigned char)194)))));
                var_22 = ((/* implicit */int) var_11);
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_6 = 2; i_6 < 23; i_6 += 1) 
                {
                    arr_25 [i_6] [i_5] [i_3] [i_0] = ((/* implicit */unsigned char) var_5);
                    arr_26 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) << (((((unsigned long long int) 9223372036854775807LL)) - (9223372036854775795ULL)))));
                    var_23 = ((/* implicit */_Bool) 18446744073709551612ULL);
                }
                for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    arr_29 [i_0] [i_3] [i_5] [i_7] [i_5] [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_16 [i_3 + 1] [i_3] [i_3 - 1]));
                    arr_30 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (-((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5] [i_7]))) : (3008860654U)))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_16 [i_0] [i_3] [i_7])) ? (4294967295U) : (((/* implicit */unsigned int) 811829443))))));
                        arr_34 [i_0] [i_3] [i_5] [i_7] [i_8] = ((/* implicit */unsigned int) ((signed char) ((arr_8 [i_7] [i_8]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        arr_38 [i_9] [i_7] [i_5] [i_3] [i_0] &= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43419))) / (1ULL))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_9] [i_7] [i_5] [i_5] [i_3] [i_3] [i_0])))))));
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_3] [i_5] [i_7] [i_9])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_5]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_18 [i_0] [i_7] [i_9])) % (811829443)))));
                        var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) arr_35 [i_3] [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 3])) ? (((/* implicit */int) arr_35 [i_3] [i_3 + 1] [i_3] [i_3 + 3] [i_3 - 3])) : (((/* implicit */int) arr_35 [i_0] [i_3 - 3] [i_3] [i_3 - 1] [i_3 + 3]))))));
                    }
                    arr_40 [i_0] [i_3] [i_5] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_7)) : (1))));
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    arr_44 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) + (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (9223372036854775807LL)))));
                    var_26 = ((/* implicit */signed char) (((-(33554432U))) <= (((var_15) << (3ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 22; i_11 += 1) 
                    {
                        arr_48 [i_0] [i_3] [i_5] [i_10] [i_11] = ((/* implicit */int) var_10);
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)61);
                        var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_3] [i_5] [i_10] [i_11 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                        arr_50 [i_0] [i_0] [i_3] [i_5] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) arr_32 [i_0] [i_3] [i_5] [i_10] [i_11]);
                    }
                }
                var_28 = ((/* implicit */int) 16158364368943318313ULL);
                var_29 = ((/* implicit */unsigned short) ((unsigned int) (-(arr_45 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_6)) >> (((var_16) - (13676537682110634054ULL)))))));
                    var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) 3433700437561728376LL))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    for (unsigned short i_15 = 2; i_15 < 24; i_15 += 2) 
                    {
                        {
                            arr_62 [i_0] [i_15] [i_12] [i_14] [i_3] = ((_Bool) (short)-32763);
                            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_12]))) & (((((/* implicit */unsigned long long int) 972285564)) & (var_13))))))));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 19ULL)) ? (((unsigned long long int) var_13)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0])) && (((/* implicit */_Bool) var_6))))))));
                            var_34 = ((/* implicit */unsigned short) (unsigned char)73);
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_56 [i_0] [i_0] [i_3] [i_3] [i_0])) ? (arr_52 [i_0] [i_3]) : (var_16)))));
            var_36 = ((/* implicit */short) ((10004462981936327750ULL) <= (((/* implicit */unsigned long long int) 3433700437561728376LL))));
        }
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 10329845569474875976ULL)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (signed char i_17 = 2; i_17 < 19; i_17 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_18 = 0; i_18 < 21; i_18 += 2) 
                {
                    for (long long int i_19 = 2; i_19 < 18; i_19 += 2) 
                    {
                        for (unsigned char i_20 = 2; i_20 < 18; i_20 += 2) 
                        {
                            {
                                arr_76 [i_16] [i_17] [i_18] [i_18] [i_20] [i_20] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_56 [i_16] [i_17] [i_18] [i_19] [i_20])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_18))))))));
                                var_38 = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */unsigned long long int) var_7)), (arr_23 [i_17 - 1] [i_17 + 2] [i_19] [i_19] [i_19 + 1] [i_20 + 2]))));
                                arr_77 [i_20] [i_19] [i_18] [i_17] [i_16] &= ((/* implicit */unsigned short) min((((unsigned long long int) max((((/* implicit */long long int) (unsigned short)47958)), (3433700437561728376LL)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)246))))), (((((/* implicit */_Bool) (unsigned short)15283)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (4023684004U))))))));
                            }
                        } 
                    } 
                } 
                var_39 = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 21; i_21 += 2) 
                {
                    for (short i_22 = 0; i_22 < 21; i_22 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_23 = 0; i_23 < 21; i_23 += 1) 
                            {
                                var_40 = ((/* implicit */unsigned int) min((var_40), ((((((+(0ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)50253)) / ((-2147483647 - 1))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_23] [i_17 + 2] [i_17 - 1] [i_17] [i_16])) ? (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_21])))))))) : (((((((/* implicit */_Bool) var_6)) ? (303180668U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)140))))) | (((unsigned int) arr_19 [i_23] [i_17] [i_16]))))))));
                                arr_84 [i_23] [i_22] [i_21] [i_17] [i_16] &= ((((unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_12 [i_22]))))) + (18446744073709551610ULL));
                                arr_85 [i_16] [i_17] [i_17] [i_21] [i_21] [i_22] [i_23] = ((/* implicit */unsigned char) ((_Bool) (-((((_Bool)1) ? (((/* implicit */unsigned long long int) 614949245)) : (arr_58 [i_16] [i_23]))))));
                            }
                            var_41 = ((/* implicit */unsigned char) ((_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (signed char)73))) & (arr_42 [i_22] [i_21] [i_17] [i_17] [i_16]))), (((/* implicit */long long int) ((int) arr_28 [i_22] [i_21] [i_17] [i_16] [i_16]))))));
                            arr_86 [i_16] [i_17] [i_21] [i_22] = ((/* implicit */unsigned int) ((long long int) (+(((/* implicit */int) (signed char)(-127 - 1))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) ((signed char) (unsigned short)32143))))));
}
