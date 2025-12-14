/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103184
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
    var_12 += ((/* implicit */int) var_11);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */int) (unsigned char)21);
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 260611372228645105ULL)) ? (4136113213U) : (((/* implicit */unsigned int) var_1))));
                        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (short)23183)))));
                    }
                } 
            } 
        } 
        var_16 ^= ((/* implicit */_Bool) ((signed char) ((long long int) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) -662551403)) ? (2146865753195902506LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
        var_18 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 15996355763987087908ULL)) ? (((/* implicit */int) (signed char)-85)) : (-2039924419)))) || (((/* implicit */_Bool) var_8))))))));
        var_19 = ((/* implicit */long long int) ((unsigned int) 3802471674U));
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [18U])) ? (-2109607478) : (((/* implicit */int) arr_14 [i_4] [i_4] [i_4])))) & (((/* implicit */int) ((_Bool) (signed char)54))))))));
            /* LoopSeq 1 */
            for (signed char i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                var_21 ^= ((/* implicit */long long int) ((arr_13 [i_6]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5])) ? (812093766U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4] [i_5] [i_6 + 2]))))))));
                var_22 ^= max((((/* implicit */long long int) ((signed char) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_16 [i_6] [i_5] [i_4])))))), (min((((/* implicit */long long int) (unsigned short)32113)), (-7120919629109239881LL))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_13 [i_6 - 1]) & (arr_13 [i_6 + 1])))) ? (min((((/* implicit */unsigned long long int) arr_17 [i_5] [i_6 - 1])), (arr_13 [i_6 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (-2039924419) : (((/* implicit */int) (_Bool)1)))))));
            }
            arr_18 [i_4] [i_4] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161))) / (1244169462591098533ULL))), (((/* implicit */unsigned long long int) max((2039924422), (((/* implicit */int) (_Bool)1))))));
        }
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                arr_27 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_8 - 1] [i_8 - 1])) | (((/* implicit */int) arr_17 [i_8 - 1] [i_8 - 1]))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_8])) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) arr_20 [i_7] [i_7] [i_8])))))));
            }
            var_25 = (!(((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) (unsigned char)99)), (-1))))));
        }
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            var_26 = (~(((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)101)), (arr_30 [i_4] [i_4] [i_4])))) ? (max((var_0), (((/* implicit */int) (short)-12719)))) : (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-125)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_10 = 2; i_10 < 18; i_10 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-12719))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_4] [i_10 - 2] [i_4]))) : ((~(var_3)))));
                var_28 = (-(var_7));
            }
            for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (((((+(((/* implicit */int) arr_20 [i_11] [i_9] [i_11])))) + (2147483647))) >> (((((((/* implicit */_Bool) 2039924419)) ? (-1286758652) : (((/* implicit */int) (_Bool)1)))) + (1286758665))))))));
                /* LoopSeq 1 */
                for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) 745978676939636048ULL)) ? (((/* implicit */unsigned long long int) 1426612661577980005LL)) : (arr_13 [i_12]))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        arr_42 [2LL] [i_4] [i_9] [i_9] [2LL] [i_12] [i_13] = ((((/* implicit */long long int) ((/* implicit */int) (signed char)11))) ^ (7478254116625653825LL));
                        var_31 = ((/* implicit */signed char) ((unsigned int) -1286758652));
                    }
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) -696645910)), (arr_24 [i_14] [i_4] [i_4] [i_9]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_4] [i_12] [(signed char)11] [i_9] [i_4])) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_37 [i_4] [i_9] [i_11] [i_12])))) : (((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (unsigned short)127)))))))));
                        var_33 = ((/* implicit */_Bool) ((((-9058448478808599920LL) % (((/* implicit */long long int) -1)))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)19341)) <= (((/* implicit */int) arr_39 [i_4] [i_9] [i_11] [i_4] [9U]))))))));
                    }
                    for (signed char i_15 = 2; i_15 < 19; i_15 += 4) /* same iter space */
                    {
                        arr_49 [i_15] [i_12] [i_4] [i_9] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) 2039924409))));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((((/* implicit */_Bool) 3062058622375459954ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_15] [i_15] [i_15] [i_11] [i_15]))) : (arr_19 [i_15] [i_11] [i_4]))) != (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2796577353U)))))))));
                    }
                    for (signed char i_16 = 2; i_16 < 19; i_16 += 4) /* same iter space */
                    {
                        var_35 ^= ((/* implicit */_Bool) arr_24 [i_4] [i_16] [i_4] [i_16]);
                        arr_52 [i_4] [i_9] [i_11] [(unsigned short)2] [i_12] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_16 + 1] [i_16] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_11] [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1]))) : (var_3)))) ? (((arr_38 [i_12] [i_16] [i_4] [i_16] [i_16]) ? (1868697502852904925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_16] [i_16] [i_4] [14ULL] [i_16 - 2]))))) : (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) arr_40 [i_9] [i_9] [i_16 - 2] [i_16] [i_4])))))));
                        var_36 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_35 [i_4] [i_11] [i_4]))));
                    }
                    var_37 = ((/* implicit */int) (unsigned short)0);
                    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_43 [i_4] [i_4] [i_4] [i_4] [i_4])))) & (((/* implicit */int) ((_Bool) var_9)))))) ? ((~((+(((/* implicit */int) arr_31 [i_4] [i_9] [(unsigned char)0])))))) : (var_0)));
                }
            }
        }
        arr_53 [i_4] [i_4] = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) (unsigned char)245)));
    }
    /* vectorizable */
    for (unsigned int i_17 = 2; i_17 < 21; i_17 += 4) 
    {
        var_39 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)124))));
        var_40 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (arr_55 [i_17] [i_17])))));
        /* LoopSeq 1 */
        for (int i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            var_41 = ((/* implicit */long long int) ((int) arr_58 [i_18]));
            arr_60 [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 8052676453285878218LL)) % (16578046570856646696ULL)));
        }
        /* LoopSeq 3 */
        for (signed char i_19 = 0; i_19 < 25; i_19 += 4) 
        {
            var_42 = ((/* implicit */long long int) 14358177643220107058ULL);
            /* LoopSeq 1 */
            for (long long int i_20 = 0; i_20 < 25; i_20 += 4) 
            {
                arr_65 [i_17] [i_17] [i_20] |= (!(((/* implicit */_Bool) arr_64 [i_20])));
                arr_66 [i_17] [i_19] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_61 [i_19]))) <= (4294967295U)));
                var_43 = ((/* implicit */_Bool) (~(((unsigned int) (unsigned short)0))));
            }
        }
        for (unsigned char i_21 = 0; i_21 < 25; i_21 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_22 = 1; i_22 < 23; i_22 += 3) 
            {
                for (int i_23 = 1; i_23 < 23; i_23 += 4) 
                {
                    {
                        arr_77 [23LL] [i_17] [i_21] [i_17] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((int) (_Bool)1)) & (((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) arr_76 [i_23 - 1] [i_22] [i_22] [i_17]))))));
                        /* LoopSeq 1 */
                        for (int i_24 = 0; i_24 < 25; i_24 += 2) 
                        {
                            var_44 = ((/* implicit */unsigned int) (_Bool)0);
                            var_45 = (signed char)106;
                        }
                        arr_80 [i_17] [i_22] [i_21] [i_22] [i_23] = ((/* implicit */int) arr_76 [i_17 - 2] [i_21] [i_22] [i_23]);
                        var_46 = ((/* implicit */unsigned long long int) arr_71 [i_22] [i_22]);
                    }
                } 
            } 
            var_47 *= ((/* implicit */signed char) (_Bool)1);
            var_48 = ((/* implicit */unsigned short) arr_55 [i_17] [i_17]);
            var_49 = ((/* implicit */int) (-(arr_79 [i_17 - 1] [i_17 - 2] [i_21] [i_17 - 2] [20ULL] [i_17])));
        }
        for (unsigned char i_25 = 1; i_25 < 22; i_25 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_26 = 2; i_26 < 24; i_26 += 1) 
            {
                var_50 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 5776105320668064380LL)))) ? (14721654236648317991ULL) : (((/* implicit */unsigned long long int) -5776105320668064378LL))));
                arr_86 [i_25] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_68 [i_17])) & (((/* implicit */int) var_8))))));
                var_51 *= ((/* implicit */short) ((((_Bool) (signed char)68)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [i_17])))))));
            }
            for (short i_27 = 0; i_27 < 25; i_27 += 2) 
            {
                var_52 |= ((/* implicit */_Bool) ((signed char) ((short) arr_74 [i_17])));
                var_53 = ((/* implicit */unsigned long long int) var_7);
            }
            arr_89 [i_25] = ((/* implicit */unsigned int) (_Bool)1);
        }
    }
    for (int i_28 = 3; i_28 < 17; i_28 += 1) 
    {
        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_61 [i_28])) & (((/* implicit */int) arr_56 [i_28] [i_28] [i_28]))))) ? (((unsigned long long int) (short)28565)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))))))) && (((/* implicit */_Bool) ((((unsigned long long int) (_Bool)1)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19317))))))));
        var_55 = (i_28 % 2 == zero) ? (((/* implicit */unsigned char) min((((/* implicit */int) ((((((arr_91 [i_28]) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) - (1))))) <= (max((((/* implicit */long long int) (_Bool)1)), (var_7)))))), (((((/* implicit */_Bool) -4)) ? (((/* implicit */int) arr_58 [i_28 + 2])) : (((/* implicit */int) ((arr_88 [i_28] [i_28] [i_28 - 3] [i_28]) && (((/* implicit */_Bool) (signed char)90)))))))))) : (((/* implicit */unsigned char) min((((/* implicit */int) ((((((((arr_91 [i_28]) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) var_9)) - (1))))) <= (max((((/* implicit */long long int) (_Bool)1)), (var_7)))))), (((((/* implicit */_Bool) -4)) ? (((/* implicit */int) arr_58 [i_28 + 2])) : (((/* implicit */int) ((arr_88 [i_28] [i_28] [i_28 - 3] [i_28]) && (((/* implicit */_Bool) (signed char)90))))))))));
        arr_92 [i_28] = ((/* implicit */long long int) ((((/* implicit */int) arr_62 [i_28 + 2])) <= (((/* implicit */int) arr_76 [i_28] [i_28] [i_28] [i_28]))));
        var_56 = ((/* implicit */long long int) arr_57 [i_28] [i_28] [i_28]);
    }
    var_57 = ((/* implicit */unsigned char) ((unsigned long long int) 2147483647));
    /* LoopSeq 1 */
    for (unsigned int i_29 = 0; i_29 < 16; i_29 += 3) 
    {
        arr_95 [i_29] |= ((/* implicit */unsigned char) 3948154754282191072LL);
        var_58 = ((/* implicit */long long int) (((-(arr_13 [i_29]))) + (((/* implicit */unsigned long long int) var_10))));
        var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) var_7))));
        arr_96 [i_29] = ((/* implicit */long long int) (+((~(((/* implicit */int) (_Bool)1))))));
        var_60 = ((/* implicit */short) max((var_60), (((/* implicit */short) (((-(min((((/* implicit */long long int) (unsigned char)4)), (arr_36 [i_29]))))) == (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
    }
}
