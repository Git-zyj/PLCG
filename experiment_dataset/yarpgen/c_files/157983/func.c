/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157983
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_0);
        arr_3 [i_0] [i_0] = 123717071;
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_6))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) (+(arr_5 [i_1] [i_1])));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_2] [i_1] = ((/* implicit */unsigned char) arr_5 [i_1] [i_2]);
            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) ((123717062) >= (var_5)))) : (((/* implicit */int) var_11))));
            arr_10 [(unsigned short)4] [i_1] [i_1] &= ((/* implicit */short) ((293719559) << (((/* implicit */int) (_Bool)1))));
            var_16 = ((/* implicit */short) (_Bool)0);
        }
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)124)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_3])) ? (arr_6 [i_1]) : (arr_6 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) -123717072)) : (5U))))));
            var_18 &= (short)-32765;
        }
        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */signed char) (+(((/* implicit */int) arr_7 [i_1] [i_4]))));
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) -16LL))));
            arr_15 [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_1] [i_4])) >= (((/* implicit */int) arr_7 [i_1] [i_4]))));
        }
        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            var_21 |= ((/* implicit */unsigned char) (_Bool)1);
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_14 [i_1] [i_1] [i_5]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_1] [i_5]))))) ? (((/* implicit */int) ((-1571827283162847539LL) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (-1736123240)));
            var_23 = ((/* implicit */unsigned char) (short)-1);
            /* LoopSeq 2 */
            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((var_5) * (((/* implicit */int) arr_22 [i_5] [i_6]))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 123717080)) ? (-1365848064) : (0)));
                        var_26 = ((/* implicit */int) (signed char)124);
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_5] [i_5])) >> ((((((_Bool)1) ? (1229936737) : (((/* implicit */int) (signed char)-125)))) - (1229936718)))));
                        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_9))))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6] [i_8]))) > (0LL))))));
                    }
                    arr_26 [i_1] [i_5] [i_5] [i_7] = ((/* implicit */signed char) ((arr_23 [i_5] [i_1] [i_5] [i_6] [i_7]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_7])))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_29 [i_5] [i_5] [i_6] [i_9] = ((((/* implicit */_Bool) arr_7 [i_9] [i_5])) ? (((/* implicit */int) arr_7 [i_1] [i_6])) : (((((/* implicit */int) arr_4 [i_5] [i_6])) | (((/* implicit */int) var_6)))));
                    var_29 &= ((/* implicit */unsigned long long int) (-(808670160)));
                    arr_30 [i_5] = ((/* implicit */unsigned short) -1229936737);
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 2; i_10 < 17; i_10 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) -2145812454)) || (((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_10 + 3] [i_10 + 2]))))));
                        arr_35 [i_1] [i_5] [i_5] [i_9] [i_10] = ((/* implicit */long long int) arr_20 [i_1] [i_9] [i_10 + 1]);
                        arr_36 [i_1] [i_5] [i_6] [i_9] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 123717060))));
                        var_31 = ((/* implicit */int) min((var_31), (-1229936737)));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */int) 511LL);
                        var_33 += ((/* implicit */int) 0LL);
                        var_34 = ((/* implicit */unsigned short) arr_27 [i_9] [i_6]);
                        var_35 = var_5;
                        arr_39 [i_5] [i_9] [i_9] [i_6] [i_5] [i_5] = ((/* implicit */unsigned char) (signed char)124);
                    }
                    for (int i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        var_36 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_32 [i_9] [i_12] [i_9] [i_9] [i_9] [i_9])) : ((~(((/* implicit */int) var_9))))));
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_12] [i_12] [i_9] [i_6] [i_6] [i_12] [i_1])) ? (arr_24 [i_9] [i_12] [i_6] [i_9] [i_12] [i_9] [i_12]) : (arr_24 [i_1] [i_12] [i_6] [i_1] [i_12] [i_12] [i_5]))))));
                        var_38 = ((/* implicit */long long int) min((var_38), ((((!(((/* implicit */_Bool) -123717071)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51136))) : ((-(var_1)))))));
                        arr_42 [i_1] [i_1] [i_5] [i_5] [i_9] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3LL)))) ? (((-1229936752) / (((/* implicit */int) (signed char)124)))) : (arr_41 [i_1] [i_5] [i_6] [i_9] [i_12] [i_5] [i_12])));
                    }
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */short) ((((/* implicit */int) arr_13 [i_1] [i_6] [i_13])) - (((/* implicit */int) var_4))));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_1] [i_5] [i_6] [i_13])) ? (((14135024677533359464ULL) / (((/* implicit */unsigned long long int) var_10)))) : (((((/* implicit */unsigned long long int) arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [i_5] [i_1])) - (arr_5 [i_1] [i_5])))));
                }
                var_41 = ((/* implicit */unsigned char) var_0);
                /* LoopSeq 2 */
                for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    arr_49 [i_1] [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_6] [i_5])) ? (1127204172) : (arr_37 [i_1] [i_5] [i_6] [i_14])));
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
                    {
                        arr_52 [i_1] [i_5] [i_5] = ((/* implicit */_Bool) arr_7 [i_15] [i_15]);
                        arr_53 [i_1] [i_5] [i_5] [i_14] [i_15] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_41 [i_15] [i_5] [i_14] [i_6] [i_5] [i_5] [i_1]))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_5] [i_14])) ? (var_10) : (((/* implicit */int) var_0))));
                        var_43 = ((/* implicit */int) arr_13 [i_14] [i_6] [i_1]);
                        var_44 += ((/* implicit */short) ((((/* implicit */int) arr_14 [i_6] [i_6] [i_6])) < (((/* implicit */int) arr_14 [i_1] [i_5] [i_6]))));
                        var_45 ^= ((/* implicit */int) ((arr_51 [(unsigned char)6]) > (((/* implicit */int) arr_45 [i_16] [8] [8] [i_1]))));
                    }
                    var_46 &= ((/* implicit */_Bool) (+(-3LL)));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_47 = ((/* implicit */unsigned long long int) var_9);
                    arr_59 [i_17] [i_5] [i_6] [i_5] [i_5] [i_1] = ((/* implicit */short) arr_24 [i_1] [i_5] [i_6] [i_17] [i_5] [i_17] [i_5]);
                }
                var_48 = ((/* implicit */signed char) 3556393423134049331ULL);
            }
            for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) /* same iter space */
            {
                var_49 = ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 18446744073709551604ULL)));
                var_50 = ((/* implicit */unsigned char) var_3);
            }
        }
        /* LoopSeq 4 */
        for (signed char i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
        {
            var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) arr_32 [i_1] [i_19] [i_19] [i_19] [i_19] [i_19])) : (((((/* implicit */int) arr_17 [i_19] [i_1])) | (((/* implicit */int) var_0)))))))));
            var_52 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (arr_58 [i_1] [i_19])))) != (((/* implicit */int) (signed char)-124))));
            var_53 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (1252530975)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_19]))) : (((var_1) & (((/* implicit */long long int) var_5))))));
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (int i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_51 [i_21]) : (arr_71 [i_22] [i_21] [i_21] [i_20] [i_21] [i_1])))) != (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_1) : (((/* implicit */long long int) arr_46 [i_1] [i_1] [i_19] [i_20] [i_21] [i_22]))))));
                            arr_72 [i_21] [i_22] [i_22] [i_21] [i_20] [i_19] [i_21] = ((/* implicit */unsigned short) arr_28 [i_22] [i_21] [i_19] [i_1]);
                        }
                    } 
                } 
                var_55 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 84514580U)) ? (((/* implicit */int) arr_60 [i_19] [i_19] [i_19] [i_20])) : (123717071)));
            }
        }
        for (signed char i_23 = 0; i_23 < 20; i_23 += 2) /* same iter space */
        {
            var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
            var_57 = ((/* implicit */long long int) (((((~(((/* implicit */int) (signed char)123)))) + (2147483647))) << (((((/* implicit */int) ((arr_19 [i_1] [i_23] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_0)))))) - (1)))));
        }
        for (short i_24 = 1; i_24 < 19; i_24 += 3) /* same iter space */
        {
            var_58 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_45 [i_1] [i_24 - 1] [14LL] [i_1])) % (-1229936737)));
            var_59 -= ((/* implicit */_Bool) var_12);
        }
        for (short i_25 = 1; i_25 < 19; i_25 += 3) /* same iter space */
        {
            var_60 = ((/* implicit */signed char) arr_47 [i_1] [i_1]);
            arr_81 [i_25] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((-123717072) - (((/* implicit */int) (signed char)-124))))) - ((-9223372036854775807LL - 1LL))));
            var_61 &= ((/* implicit */int) ((((/* implicit */_Bool) 123717082)) ? (10LL) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            var_62 = (+(((1701423819) % (1229936737))));
        }
    }
    var_63 = ((/* implicit */unsigned short) var_4);
}
