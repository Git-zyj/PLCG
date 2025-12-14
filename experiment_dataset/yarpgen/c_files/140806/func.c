/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140806
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
    var_15 = ((/* implicit */short) var_2);
    var_16 = ((/* implicit */signed char) ((var_11) * (((/* implicit */long long int) ((/* implicit */int) (!(var_2)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0] [9LL])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), ((-(((((/* implicit */_Bool) (unsigned char)194)) ? (7329561194589610008LL) : (-7329561194589610009LL)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_9 [i_1 - 1] = ((/* implicit */_Bool) arr_2 [i_2 - 1]);
                    arr_10 [i_0] = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_2 [i_0])))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 23; i_4 += 4) 
        {
            for (unsigned int i_5 = 1; i_5 < 23; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 3; i_6 < 22; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                arr_25 [i_3] [i_4] [i_5] [i_6 + 1] [i_7] = ((/* implicit */signed char) ((((((/* implicit */long long int) arr_22 [i_6 - 2] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 2] [i_6 + 1])) | (-7329561194589610008LL))) ^ (((((/* implicit */_Bool) var_12)) ? (((-8193369659173984907LL) & (7329561194589610008LL))) : (((/* implicit */long long int) arr_22 [10LL] [i_4] [i_4 - 2] [i_4 - 2] [i_7] [i_4]))))));
                                var_17 = ((((/* implicit */_Bool) (short)6955)) ? (7329561194589609999LL) : (((/* implicit */long long int) 3610054805U)));
                                var_18 = arr_11 [8U] [8U];
                                var_19 = (((-(9223372036854775801LL))) * (((/* implicit */long long int) ((/* implicit */int) var_0))));
                                arr_26 [i_4] [i_6] [10U] [(unsigned char)13] [i_4] = (+((~((-(274877775872LL))))));
                            }
                        } 
                    } 
                    arr_27 [i_4] [23LL] [i_4] = ((((/* implicit */_Bool) (short)-6965)) ? ((((+(-7329561194589610009LL))) / (((/* implicit */long long int) 458740792U)))) : (-2909808326148401834LL));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-1LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)6955))))) ? ((-(3111995792U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 - 2] [i_4]))))))));
                }
            } 
        } 
        arr_28 [15] = ((/* implicit */_Bool) (-(((458740782U) * (458740782U)))));
        arr_29 [0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_12 [i_3]), (arr_12 [i_3])))) ? (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3]) : (((((((/* implicit */_Bool) (short)-31366)) ? (((/* implicit */int) (short)31366)) : (((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) ((unsigned char) 8289694825822042506ULL)))))));
        var_21 = ((/* implicit */unsigned long long int) ((7329561194589610008LL) + (((/* implicit */long long int) 514656495U))));
        /* LoopSeq 2 */
        for (long long int i_8 = 3; i_8 < 21; i_8 += 1) 
        {
            arr_32 [i_3] [i_8] = ((/* implicit */signed char) ((_Bool) max(((_Bool)1), (((((/* implicit */unsigned long long int) -5386870597837807372LL)) >= (3431404651105528383ULL))))));
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                arr_35 [i_9] = ((/* implicit */signed char) var_0);
                /* LoopSeq 2 */
                for (signed char i_10 = 3; i_10 < 23; i_10 += 2) 
                {
                    arr_39 [i_3] [i_3] [(unsigned char)23] [i_9] [i_9] [19] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 576460752303423487ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7329561194589610008LL))), (469762048LL))) <= (((/* implicit */long long int) ((/* implicit */int) (short)-31366)))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_42 [(unsigned char)12] [i_9] [(unsigned char)12] [i_10] [i_10 + 1] = ((/* implicit */signed char) ((1125899839733760ULL) << (((((((/* implicit */_Bool) 17870283321406128129ULL)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (-1208974301492520407LL) : (469762025LL))) : (arr_14 [i_9] [i_9]))) + (1208974301492520449LL)))));
                        var_22 = ((/* implicit */int) max((((var_13) / ((~(7329561194589610008LL))))), (arr_30 [i_8] [6])));
                    }
                }
                for (long long int i_12 = 1; i_12 < 21; i_12 += 4) 
                {
                    arr_45 [i_3] [i_3] [i_3] [1LL] [i_9] = ((/* implicit */unsigned int) 5486148855669779146LL);
                    arr_46 [i_3] [i_9] [i_9] [i_12] = ((/* implicit */long long int) (_Bool)1);
                    arr_47 [i_3] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_44 [i_3] [i_8 + 3]), (arr_44 [i_9] [i_3])))) << (((((long long int) 8947066600506452949ULL)) - (8947066600506452944LL)))));
                    arr_48 [i_9] [i_9] = ((/* implicit */signed char) -7329561194589610008LL);
                }
                var_23 = ((/* implicit */_Bool) (+(576460752303423479ULL)));
                arr_49 [i_9] [i_9] = ((/* implicit */long long int) arr_21 [i_3] [i_3] [i_8] [i_3] [i_9]);
            }
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                arr_53 [i_13] [i_8] [(signed char)10] [i_13] = ((/* implicit */unsigned char) var_5);
                var_24 = ((/* implicit */short) ((((/* implicit */int) arr_44 [i_3] [i_3])) << (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-1))))) & (arr_12 [17LL])))));
            }
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            arr_58 [i_14] = arr_56 [i_3];
            var_25 = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_3] [i_14])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_14 - 1] [i_14 - 1])))))), (max((arr_17 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */long long int) arr_52 [i_3] [i_3] [i_3] [i_3])))))));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    {
                        var_26 = ((/* implicit */int) ((1125899906842623LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57)))));
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((9464885098628717035ULL), (((/* implicit */unsigned long long int) (signed char)0))))) ? (((/* implicit */unsigned long long int) max((-10LL), (arr_62 [i_14])))) : (min((9464885098628717035ULL), (((/* implicit */unsigned long long int) (signed char)-1))))))));
                            var_28 = ((/* implicit */short) arr_52 [i_3] [i_14] [i_3] [i_3]);
                        }
                        for (int i_18 = 2; i_18 < 21; i_18 += 1) 
                        {
                            arr_69 [i_3] [i_14] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) + (2271038632269122275ULL)));
                            arr_70 [i_3] [i_3] [i_14] [i_15] [i_15] [i_16] [i_15] = (unsigned char)247;
                        }
                    }
                } 
            } 
        }
    }
    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */_Bool) ((int) ((((/* implicit */long long int) arr_60 [i_19] [i_19] [i_19] [i_19])) & (arr_43 [i_19] [i_19]))));
        var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_68 [i_19] [i_19] [i_19] [i_19] [i_19])) && (((/* implicit */_Bool) arr_68 [i_19] [i_19] [i_19] [i_19] [i_19]))))) & (arr_22 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])));
        /* LoopSeq 1 */
        for (unsigned long long int i_20 = 4; i_20 < 22; i_20 += 4) 
        {
            arr_75 [i_19] [6] = ((/* implicit */signed char) (-(((unsigned int) ((((/* implicit */long long int) 458740782U)) < (var_13))))));
            arr_76 [i_19] [i_19] [i_19] = ((/* implicit */short) (((((-(((/* implicit */int) var_0)))) + (2147483647))) << (((((((/* implicit */_Bool) -5486148855669779146LL)) ? (5486148855669779126LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1885318323967969712LL)))))))) - (5486148855669779126LL)))));
            /* LoopNest 3 */
            for (long long int i_21 = 3; i_21 < 21; i_21 += 3) 
            {
                for (signed char i_22 = 2; i_22 < 22; i_22 += 1) 
                {
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_85 [i_21] [i_21] [23LL] [i_21] [i_23 - 1] = ((/* implicit */int) ((short) var_10));
                            arr_86 [i_21] [i_20 - 4] = ((/* implicit */long long int) (-(max((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_23] [i_20] [i_20] [i_22] [i_21] [i_22])))))))));
                        }
                    } 
                } 
            } 
        }
        var_31 = ((/* implicit */long long int) arr_68 [i_19] [i_19] [i_19] [(signed char)15] [i_19]);
    }
}
