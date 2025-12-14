/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106692
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((int) 4294967293U));
        var_18 = ((/* implicit */unsigned int) -3629435223054742562LL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)2077)) > (((/* implicit */int) var_4))))) != (((/* implicit */int) ((_Bool) arr_2 [i_1])))))), (((((/* implicit */_Bool) arr_3 [i_1] [(short)8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) % (var_13)))) : (min((17995857856338889860ULL), (((/* implicit */unsigned long long int) var_0))))))));
        var_19 = ((/* implicit */int) arr_3 [i_1] [i_1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 4) /* same iter space */
        {
            var_20 ^= ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [(short)4] [i_3 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_3 [(short)4] [(short)4])) + (136)))));
            /* LoopSeq 4 */
            for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                var_21 = ((/* implicit */short) var_7);
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) -1635861439))));
                var_23 *= ((/* implicit */unsigned long long int) (-(2837752472U)));
                var_24 = ((/* implicit */int) ((16634134092384625987ULL) != (((/* implicit */unsigned long long int) arr_11 [i_3 - 2] [i_4 - 1] [i_4] [i_3 - 2]))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_16 [i_3] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_5] [i_5] [i_3 + 1] [i_2]);
                arr_17 [(unsigned short)11] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
                var_25 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) arr_12 [i_2])));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        arr_27 [i_8] [i_3] [i_6] [i_7] [i_6] = ((/* implicit */short) ((_Bool) 10894703947311820198ULL));
                        arr_28 [i_2] [i_2] [i_2] [i_3 + 1] [(unsigned char)4] [i_8] [7LL] = ((/* implicit */unsigned short) (~(((int) (unsigned char)122))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) ((short) var_16));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (short)16927)) && (((/* implicit */_Bool) arr_15 [i_2] [i_3 - 2] [(short)10] [i_9])))))));
                        arr_31 [i_9] [i_7] [i_6] [i_3] [i_9] = ((/* implicit */unsigned int) (unsigned short)15);
                        var_29 -= ((/* implicit */signed char) arr_23 [i_3 - 3] [i_3] [i_3 - 1] [(unsigned short)0] [i_2] [i_2]);
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) (((+(2163910477U))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-5)))))));
                        arr_35 [i_2] [i_3] [i_6] [i_3] [(unsigned char)13] [i_7] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4921533308362639987LL)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) var_10))));
                        arr_36 [i_10] [i_7] [i_10] [i_3] [i_2] = ((/* implicit */short) 22U);
                    }
                    var_31 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_3 - 3] [i_3 + 1]))));
                    var_32 = ((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_2] [i_3 - 3] [i_6]));
                }
                for (short i_11 = 1; i_11 < 17; i_11 += 4) 
                {
                    var_33 = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-3)) + (2147483647))) << (((arr_2 [i_3 - 3]) - (4931424606462492570LL)))));
                    var_34 = ((/* implicit */unsigned int) arr_23 [i_2] [i_11] [i_6] [i_11 + 1] [(short)15] [i_11 - 1]);
                }
                arr_39 [i_6] = ((/* implicit */signed char) (+(arr_29 [i_3] [i_3] [i_3 - 2] [i_3 - 3] [0LL] [0])));
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-2147483623)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_3] [i_6] [i_2] [i_2])) || (((/* implicit */_Bool) 11080741517464554689ULL)))))));
                var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3217)) ? ((+(((/* implicit */int) arr_7 [(signed char)4])))) : (((/* implicit */int) arr_9 [i_2] [i_3 - 1]))));
                var_37 = ((/* implicit */signed char) (((((-(((/* implicit */int) (signed char)90)))) + (2147483647))) >> (((((/* implicit */int) arr_15 [i_6] [(unsigned char)14] [(unsigned char)14] [i_2])) - (205)))));
            }
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    arr_45 [i_3 - 3] [i_12] [i_3 - 3] [i_2] = ((/* implicit */short) ((unsigned long long int) arr_2 [1]));
                    var_38 += (+(((/* implicit */int) (signed char)-1)));
                }
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */int) arr_9 [i_3 - 3] [i_3 - 3]);
                    var_40 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-49))));
                    var_41 = ((/* implicit */short) 6682375374001833113ULL);
                }
                for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 1) /* same iter space */
                {
                    var_42 = ((/* implicit */unsigned short) arr_47 [9LL] [i_3] [i_12] [i_15]);
                    var_43 |= ((/* implicit */_Bool) ((arr_19 [i_3] [i_3 + 1] [i_3 + 1]) >> (((((/* implicit */int) arr_44 [13] [i_3] [i_3 + 1] [i_3 - 1])) - (157)))));
                }
                /* LoopNest 2 */
                for (signed char i_16 = 0; i_16 < 19; i_16 += 4) 
                {
                    for (short i_17 = 2; i_17 < 17; i_17 += 2) 
                    {
                        {
                            arr_61 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_18 [i_17] [(_Bool)1] [i_2]) ? (((/* implicit */unsigned long long int) arr_8 [i_2] [4U])) : (4611545280939032576ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_17] [i_17] [i_17 - 1] [i_17] [i_17 + 2] [i_17 - 1] [i_17]))) : (arr_24 [i_17] [(signed char)6] [(short)8] [i_2])));
                            var_44 = ((/* implicit */unsigned char) (-(((17995857856338889860ULL) % (((/* implicit */unsigned long long int) arr_8 [i_3] [i_16]))))));
                            var_45 = ((/* implicit */int) ((unsigned short) arr_13 [i_2] [i_12] [i_17 + 2]));
                        }
                    } 
                } 
            }
            var_46 -= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_3 - 2]))) : (var_3)));
        }
        for (unsigned long long int i_18 = 3; i_18 < 18; i_18 += 4) /* same iter space */
        {
            arr_64 [i_18] [i_18] [i_18] = (+((+(((/* implicit */int) var_1)))));
            var_47 = ((/* implicit */_Bool) arr_21 [(unsigned char)6] [10ULL] [i_18 - 2]);
        }
        for (unsigned long long int i_19 = 3; i_19 < 18; i_19 += 4) /* same iter space */
        {
            arr_68 [i_2] [i_19] = var_0;
            /* LoopSeq 1 */
            for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 1) 
            {
                var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (+((-(820014056))))))));
                var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((short) arr_42 [i_2] [i_19 - 2] [i_20])))));
                arr_71 [i_2] [i_19] [i_20] [i_19] = ((/* implicit */short) (+(((/* implicit */int) arr_60 [i_19 - 2] [i_19 + 1] [i_19 - 1] [i_19 + 1] [i_19 - 3]))));
                /* LoopSeq 1 */
                for (unsigned char i_21 = 2; i_21 < 16; i_21 += 1) 
                {
                    var_50 = (_Bool)1;
                    /* LoopSeq 4 */
                    for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) /* same iter space */
                    {
                        var_51 = ((/* implicit */int) min((var_51), ((+(((/* implicit */int) arr_55 [i_21 + 3] [i_20] [i_19 - 1] [i_19]))))));
                        var_52 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) < (6170503313359260648ULL)))) > (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 19; i_23 += 2) /* same iter space */
                    {
                        arr_80 [i_23] [i_20] [i_20] [i_20] [i_2] = ((/* implicit */int) (_Bool)1);
                        arr_81 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_20] = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_15 [4ULL] [i_20] [i_20] [i_23]))))));
                        arr_82 [i_2] [i_2] [i_20] [i_21] [i_20] [i_2] = ((/* implicit */unsigned short) 2684487973U);
                    }
                    for (unsigned int i_24 = 0; i_24 < 19; i_24 += 2) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned short) (-(0ULL)));
                        var_54 = ((/* implicit */unsigned long long int) ((short) arr_72 [i_19] [i_20] [i_21 - 1] [i_20]));
                    }
                    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 2) /* same iter space */
                    {
                        arr_87 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) arr_54 [i_25] [i_21] [i_20] [i_19]);
                        var_55 = ((/* implicit */long long int) arr_83 [i_20] [i_19] [i_19] [i_19 - 2]);
                    }
                }
            }
        }
        arr_88 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)2))));
        var_56 = ((/* implicit */short) (unsigned char)214);
    }
    for (signed char i_26 = 2; i_26 < 10; i_26 += 3) 
    {
        var_57 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_26 + 4] [i_26 + 1])) / (arr_52 [i_26 + 1] [i_26 + 3] [i_26 + 2])))) || (((/* implicit */_Bool) (+(max((-1), (((/* implicit */int) var_4)))))))));
        var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_14)), (-1)))) ? (max((arr_11 [i_26 + 3] [i_26 - 1] [i_26] [i_26 + 1]), (arr_11 [i_26 + 3] [i_26 - 1] [0U] [i_26]))) : ((~(arr_11 [i_26 + 4] [i_26 - 1] [i_26 + 2] [2])))));
        /* LoopSeq 1 */
        for (unsigned char i_27 = 0; i_27 < 14; i_27 += 4) 
        {
            var_59 = ((/* implicit */unsigned long long int) max((var_59), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)127))))))) ? (((/* implicit */long long int) var_11)) : (min((arr_19 [i_26] [i_26 + 3] [(signed char)4]), (((/* implicit */long long int) (-(arr_59 [i_27] [i_26])))))))))));
            arr_95 [i_26 + 1] [i_26 + 1] [i_26] = ((/* implicit */int) (+(((((/* implicit */_Bool) max(((short)32767), (((/* implicit */short) (signed char)14))))) ? (min((((/* implicit */unsigned long long int) 8192U)), (arr_73 [1ULL] [i_26] [i_26 + 2] [i_26]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (136655920))))))));
        }
        arr_96 [i_26 - 1] [i_26 - 1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1591045343)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_93 [i_26] [i_26])))), ((+(((/* implicit */int) (short)5873))))));
    }
    var_60 = (-((+(((unsigned long long int) var_15)))));
}
