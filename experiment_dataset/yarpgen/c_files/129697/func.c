/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129697
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
    var_10 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))), (((((((/* implicit */_Bool) (unsigned short)18892)) ? (((/* implicit */long long int) 1604154245U)) : (var_8))) < (((/* implicit */long long int) ((/* implicit */int) max((var_9), (var_4)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_11 = ((/* implicit */unsigned short) 2147483647);
            arr_6 [i_1] [i_0] [i_0] = var_4;
            arr_7 [i_1] [i_1 + 2] [i_1] = ((/* implicit */signed char) var_1);
            var_12 = ((/* implicit */unsigned long long int) (-(4278190080U)));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned char) (unsigned short)39225);
            var_14 = ((((/* implicit */_Bool) ((var_7) << (((((/* implicit */int) (short)-25695)) + (25700)))))) ? (((int) arr_9 [i_0] [i_2 - 1] [i_2])) : (((/* implicit */int) (signed char)34)));
        }
        for (int i_3 = 4; i_3 < 10; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) (((+(arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((unsigned short) (signed char)16)))));
        }
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
        {
            var_17 |= ((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (arr_1 [i_0])))));
            var_18 = ((/* implicit */int) ((_Bool) 1350583388U));
        }
        for (signed char i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    arr_23 [i_0] &= ((/* implicit */_Bool) ((int) ((long long int) (_Bool)0)));
                    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) >= (18446744073709551615ULL));
                    var_20 = (+(((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_7 - 1])));
                    arr_24 [i_0] [i_5] [i_0 + 1] [i_7 - 1] [i_5] [i_6] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) -1853475960)) : (var_7)))));
                    var_21 *= ((/* implicit */signed char) (~(256283970686340657ULL)));
                }
                for (unsigned short i_8 = 4; i_8 < 9; i_8 += 4) 
                {
                    /* LoopSeq 4 */
                    for (short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_31 [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1424574422)) || (((/* implicit */_Bool) (unsigned short)39252))));
                        var_22 = 4965297001827196865ULL;
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0)))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_34 [i_0] [i_5] [i_6] [i_6] [i_8] [i_10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 12967149830322898715ULL)) ? (((/* implicit */long long int) arr_27 [i_8 + 2] [i_0 + 1] [i_6] [i_5])) : (9223372036854775807LL)));
                        arr_35 [i_8] [i_8] [i_8] [i_8 - 4] [i_8 - 4] [i_8] [i_8] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))));
                        var_25 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1])))));
                        arr_36 [i_10] [i_8] [i_6] [i_5] [i_0 - 1] = ((/* implicit */signed char) (+((-(arr_21 [i_0] [i_5] [i_0] [i_8 + 3] [i_10])))));
                    }
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */unsigned int) (!((_Bool)0)));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) ((signed char) 364735325)))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)26)) : (arr_29 [i_0 + 1] [i_5] [i_6] [i_5] [i_11] [i_11])))) : (arr_19 [i_8 - 2] [i_6] [i_5] [i_0])));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (1754563271U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))))))));
                    }
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_5] [i_12]))));
                        var_31 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_0 + 1])) / (((/* implicit */int) arr_26 [i_0 + 1]))));
                    }
                    var_32 = ((/* implicit */long long int) (_Bool)1);
                }
                for (int i_13 = 2; i_13 < 10; i_13 += 1) 
                {
                    var_33 |= ((/* implicit */unsigned int) 9223372036854775807LL);
                    arr_44 [i_5] = (+(arr_29 [i_0 + 1] [i_0 - 1] [i_13 - 1] [i_13] [i_13] [i_13]));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_5] [i_6] [i_13 + 2] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -788319112)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) -1)) : (arr_27 [i_0 - 1] [i_0 - 1] [i_6] [i_13])))));
                    arr_45 [i_0] [i_5] [i_5] [i_6] [i_0] = ((/* implicit */signed char) (+(arr_28 [i_0 + 1] [i_5] [i_6] [i_0 + 1] [i_13 + 1])));
                }
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 11; i_14 += 2) 
                {
                    for (signed char i_15 = 3; i_15 < 10; i_15 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((arr_14 [i_5] [i_6] [i_6]) == (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (1350583388U))))));
                            var_36 = ((/* implicit */short) arr_15 [i_0]);
                        }
                    } 
                } 
            }
            for (short i_16 = 0; i_16 < 12; i_16 += 1) 
            {
                arr_55 [i_0] [i_16] = ((((/* implicit */int) var_1)) - (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (short i_18 = 1; i_18 < 11; i_18 += 3) 
                    {
                        {
                            arr_60 [i_0] [i_16] [i_17] [i_18 + 1] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_48 [i_0] [i_5] [i_16] [i_17] [i_18 + 1]))))));
                            arr_61 [i_16] [i_17] [i_16] [i_5] [i_16] = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)-18935))));
                            arr_62 [i_0] [i_16] [i_16] = ((/* implicit */_Bool) ((signed char) var_7));
                            arr_63 [i_0] [i_5] [i_0] [i_16] [i_18 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
                            var_37 = ((/* implicit */_Bool) ((int) -301998616));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_19 = 2; i_19 < 9; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_20 = 3; i_20 < 11; i_20 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                        arr_69 [i_0] [i_5] [i_16] [i_19 + 2] [i_20 - 3] [i_5] = ((/* implicit */unsigned char) 1681112455);
                    }
                    arr_70 [i_0 + 1] [i_5] [i_16] [i_19] [i_16] [i_19] = (((_Bool)1) ? (((int) (_Bool)1)) : (((((/* implicit */_Bool) 13201164623543398851ULL)) ? (((/* implicit */int) (unsigned short)28460)) : (((/* implicit */int) (unsigned char)56)))));
                }
                for (unsigned long long int i_21 = 1; i_21 < 8; i_21 += 1) 
                {
                    var_39 = ((/* implicit */int) max((var_39), ((((+(arr_21 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1]))) % ((+(((/* implicit */int) (signed char)-41))))))));
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (-2147483647 - 1)))));
                    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? ((~(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_21 + 1] [i_21 + 1] [i_0 - 1])))));
                }
                for (unsigned short i_22 = 2; i_22 < 10; i_22 += 2) 
                {
                    var_42 ^= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (var_5))) | (((3294857569529914725ULL) ^ (((/* implicit */unsigned long long int) arr_18 [i_22] [i_16] [i_0] [i_0]))))));
                    var_43 = ((/* implicit */long long int) (-((-(((/* implicit */int) (short)-23653))))));
                    var_44 |= ((/* implicit */short) (!(var_6)));
                    arr_75 [i_22 + 1] [i_16] [i_16] [i_0] = ((/* implicit */unsigned long long int) 2147483647);
                    var_45 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) -624900933)) : (var_7)))));
                }
            }
            /* LoopSeq 2 */
            for (unsigned int i_23 = 2; i_23 < 9; i_23 += 3) 
            {
                var_46 = (signed char)124;
                var_47 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (2944383907U)));
                var_48 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_2))))));
                var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) (unsigned short)10505))));
            }
            for (int i_24 = 1; i_24 < 11; i_24 += 4) 
            {
                arr_82 [i_24] = ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0 + 1])) << ((((~(((/* implicit */int) (signed char)-46)))) - (36)))));
                arr_83 [i_24 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_38 [i_0] [i_5] [i_5] [i_24 - 1] [i_5]);
                arr_84 [i_5] = ((/* implicit */int) 18446744073709551607ULL);
            }
            /* LoopNest 3 */
            for (short i_25 = 4; i_25 < 9; i_25 += 3) 
            {
                for (int i_26 = 0; i_26 < 12; i_26 += 3) 
                {
                    for (int i_27 = 1; i_27 < 10; i_27 += 2) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_27 [i_0 - 1] [i_0 - 1] [i_25] [i_25])))))));
                            var_51 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_25 + 2]))));
                            var_52 = ((/* implicit */short) (~(((((/* implicit */int) arr_13 [i_5])) * (((/* implicit */int) arr_91 [i_0] [i_0]))))));
                            var_53 = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((var_2) + (1715816766))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_28 = 2; i_28 < 10; i_28 += 4) 
            {
                for (int i_29 = 3; i_29 < 10; i_29 += 1) 
                {
                    for (signed char i_30 = 3; i_30 < 9; i_30 += 2) 
                    {
                        {
                            var_54 = ((/* implicit */int) var_7);
                            var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_81 [i_0] [i_5] [i_30])))))));
                            arr_102 [i_29] [i_28 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                            var_56 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)55037)) ? (((/* implicit */int) ((signed char) var_6))) : ((-(((/* implicit */int) var_4))))));
                        }
                    } 
                } 
            } 
        }
        var_57 = ((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))));
        var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_90 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_81 [i_0] [i_0 + 1] [i_0 + 1]))))) : (12708393652637220199ULL)));
        arr_103 [i_0] [i_0] = ((9223372036854775807LL) ^ (5262973885857844238LL));
    }
    for (int i_31 = 1; i_31 < 20; i_31 += 3) 
    {
        var_59 = ((/* implicit */long long int) var_7);
        var_60 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)55702))));
        var_61 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_105 [i_31 + 1])) << (((3983776534U) - (3983776521U)))))) / (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49))) : (14765194294197804398ULL)))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
}
