/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105001
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
    var_17 |= ((/* implicit */short) ((long long int) ((short) var_2)));
    var_18 = ((/* implicit */long long int) (+(var_1)));
    var_19 &= ((/* implicit */unsigned int) ((long long int) ((short) ((((/* implicit */_Bool) var_14)) ? (var_8) : (3682509682724470154LL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_20 = min((((/* implicit */long long int) ((unsigned int) ((short) arr_1 [i_0])))), ((-(4055838934881855352LL))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_21 *= ((/* implicit */short) ((long long int) ((unsigned int) arr_2 [i_0] [i_1])));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                var_22 = ((/* implicit */long long int) min((var_22), (((long long int) ((((/* implicit */_Bool) -4551862234920930752LL)) ? (4204871545567771813LL) : (((/* implicit */long long int) 1392216887U)))))));
                arr_6 [i_0] [i_1] [i_2] [i_2] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_2] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_0])))) / (((/* implicit */int) ((short) arr_2 [i_0] [i_0])))));
            }
            for (long long int i_3 = 3; i_3 < 16; i_3 += 2) 
            {
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_3]))) : (var_7)))) ? (((((/* implicit */long long int) 3096293728U)) / (arr_7 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-18525))))))))) ? (((/* implicit */int) ((((/* implicit */int) ((short) var_5))) <= (((/* implicit */int) ((short) var_16)))))) : (((/* implicit */int) ((arr_1 [i_3 - 1]) > (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]))))))))));
                arr_10 [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_3 + 1] [i_3] [i_3 + 1]), (((/* implicit */unsigned int) arr_9 [i_3 + 3] [i_3 + 3] [i_3 + 3]))))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) ((short) arr_7 [(short)17])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4204871545567771813LL)) ? (((/* implicit */int) (short)29179)) : (((/* implicit */int) (short)29179)))))));
                    arr_14 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3 - 2])) ? (((/* implicit */int) arr_9 [i_4] [i_4] [i_3 - 3])) : (((/* implicit */int) arr_9 [i_0] [i_3] [i_3 + 3]))));
                    arr_15 [i_1] [i_4] = ((/* implicit */unsigned int) ((arr_13 [i_3 - 1] [i_3 + 3] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_3 + 1] [i_0])))));
                }
                /* vectorizable */
                for (short i_5 = 3; i_5 < 16; i_5 += 3) 
                {
                    var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_3 - 1] [i_1] [i_1]))));
                    var_26 |= ((((/* implicit */_Bool) ((short) arr_1 [i_3]))) ? (((long long int) arr_3 [i_0] [(short)17] [i_3 + 1])) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4204871545567771811LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29164))) : (var_7)))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        var_27 = (+(arr_4 [i_7 - 1] [i_7 - 1] [i_7 - 1]));
                        var_28 = ((/* implicit */unsigned int) ((short) arr_21 [i_7] [i_7 + 1] [i_3 - 1]));
                        var_29 = ((/* implicit */long long int) max((var_29), (((long long int) arr_19 [i_1] [i_3] [i_3 - 2] [i_7 - 1] [i_7 + 1] [15U]))));
                    }
                    arr_26 [i_0] [i_1] [i_3 + 1] [i_6] [i_6] = arr_9 [i_0] [i_0] [i_0];
                }
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    arr_29 [i_8] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) arr_11 [i_0] [i_0])), (((((/* implicit */long long int) arr_24 [i_0] [i_1] [i_3] [i_0] [i_3 + 3] [i_8])) - (var_9)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_9 = 1; i_9 < 16; i_9 += 2) 
                    {
                        var_30 &= ((/* implicit */short) ((unsigned int) arr_30 [i_3 - 2] [i_3] [i_3] [i_8] [i_9] [i_9 - 1] [i_9 + 1]));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_9 + 3])) || (((/* implicit */_Bool) arr_12 [i_9 + 3]))));
                        arr_32 [i_0] [i_1] [i_3] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_31 [i_0] [i_1] [i_0] [i_9] [i_9] [i_3])))) ? (((((/* implicit */_Bool) (short)-28833)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9]))) : (4204871545567771813LL))) : ((~(4204871545567771813LL)))));
                        var_32 ^= ((/* implicit */unsigned int) ((long long int) ((long long int) (short)-27294)));
                        arr_33 [i_9] [i_1] [i_3] [i_8] [i_9 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [(short)6] [(short)6] [i_1] [i_3] [i_8] [i_8] [i_9])) ? (((/* implicit */long long int) arr_28 [9U] [i_3 + 2] [i_9 + 1])) : (((((/* implicit */_Bool) arr_2 [i_3 + 1] [i_8])) ? (-5293897889938437385LL) : (((/* implicit */long long int) arr_28 [i_0] [i_0] [(short)7]))))));
                    }
                }
                arr_34 [1LL] = 2010399064U;
            }
            var_33 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_15)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_31 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6291474328014704297LL)))))) ^ (((long long int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) 4245318451U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [8LL] [i_0] [i_1]))) : (var_6))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) 3913849549U))))))));
            arr_35 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (min((6291474328014704297LL), (((/* implicit */long long int) (short)-20254)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1])) ? (arr_28 [i_0] [i_0] [i_0]) : (arr_28 [i_0] [i_0] [i_1]))))));
            arr_36 [i_0] [i_0] [i_0] = ((/* implicit */short) var_9);
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_10] [i_10])) ? (((((/* implicit */_Bool) arr_37 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [i_10]))) : (var_1))) : (((((/* implicit */_Bool) arr_39 [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_10] [i_10]))) : (1087117280U)))));
        arr_40 [i_10] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_10] [i_10]))) == (((((/* implicit */long long int) ((/* implicit */int) var_14))) ^ (-1336312817402023816LL)))));
        var_35 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) var_11)))));
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            arr_43 [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_42 [i_11] [i_11]) : (arr_42 [i_11] [i_11])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_10] [i_10]))) : ((+(arr_37 [i_10] [i_11]))));
            var_36 = (-(arr_41 [i_11] [i_11]));
            /* LoopSeq 3 */
            for (short i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
            {
                arr_46 [i_11] = ((/* implicit */short) ((unsigned int) arr_37 [i_11] [i_11]));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    var_37 = ((short) arr_39 [i_12] [i_13]);
                    arr_50 [i_10] [i_11] [19LL] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_10] [5U] [i_11] [i_12] [i_11])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11] [i_13])) ? (arr_49 [i_10] [i_11] [i_12] [(short)20] [i_11]) : (arr_49 [14U] [i_11] [i_12] [i_13] [i_11]))))));
                    arr_51 [i_10] [i_11] [i_11] [i_12] [i_13] [i_13] = 2607941402U;
                    var_38 = ((/* implicit */long long int) min((var_38), (((arr_41 [i_13] [i_13]) >> (((((1336312817402023815LL) - (-645698618731823373LL))) - (1982011436133847140LL)))))));
                }
                arr_52 [i_10] [(short)18] [i_11] [i_10] |= -4204871545567771814LL;
                var_39 = ((/* implicit */short) 272543435U);
            }
            for (short i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
            {
                var_40 &= ((/* implicit */long long int) ((unsigned int) arr_37 [i_10] [18LL]));
                arr_55 [12LL] [i_10] [i_11] [i_14] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_10] [i_11])) ? (((((/* implicit */_Bool) arr_37 [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [2LL] [i_10] [i_10] [i_11]))) : (6366540841633583930LL))) : (((arr_53 [11LL] [i_10]) / (((/* implicit */long long int) var_6))))));
                arr_56 [i_11] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_11] [i_14])) ? (arr_37 [i_10] [i_10]) : (((/* implicit */long long int) 1348896296U))))) ? (((((/* implicit */_Bool) arr_49 [i_10] [i_10] [i_10] [i_11] [i_11])) ? (arr_37 [i_11] [i_10]) : (arr_42 [i_11] [i_11]))) : (((((/* implicit */_Bool) 2643212974U)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (8225669366711075816LL))));
            }
            for (short i_15 = 0; i_15 < 21; i_15 += 3) /* same iter space */
            {
                arr_60 [i_10] [i_11] [i_11] = ((((/* implicit */_Bool) ((long long int) arr_42 [i_11] [i_11]))) ? (((long long int) 4274750848U)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_11] [i_11] [i_10] [i_11])))))));
                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (+(arr_54 [0LL] [i_15]))))));
                arr_61 [i_11] [i_15] [i_11] [i_11] = ((/* implicit */unsigned int) ((long long int) -2563291107459544149LL));
            }
        }
        var_42 = ((/* implicit */unsigned int) (~(arr_48 [i_10] [i_10] [i_10] [(short)2])));
    }
    for (unsigned int i_16 = 4; i_16 < 19; i_16 += 3) 
    {
        arr_64 [i_16] [i_16] = ((((/* implicit */_Bool) -92910079515352117LL)) ? (3207850015U) : (3574866033U));
        var_43 = ((/* implicit */unsigned int) (~(arr_62 [i_16] [i_16])));
        arr_65 [i_16] = ((((/* implicit */_Bool) (+((-(arr_63 [i_16])))))) ? ((~(arr_63 [i_16]))) : (arr_62 [i_16] [i_16]));
    }
}
