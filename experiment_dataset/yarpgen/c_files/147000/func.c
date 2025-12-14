/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147000
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) var_0);
        arr_3 [(unsigned short)8] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 2])) / (((/* implicit */int) arr_0 [i_0 + 3]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_10 [7LL] [i_0 + 1] [(_Bool)1] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1809121663)) || (((/* implicit */_Bool) 2615067011U)))))) < (((var_16) - (((/* implicit */long long int) (~(((/* implicit */int) var_12))))))));
                    var_20 = ((/* implicit */short) ((arr_4 [i_0 + 1]) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)31)))))));
                    var_21 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 + 2])) - (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), ((unsigned short)0)))))))));
                    arr_11 [(short)1] [i_0] [6] [6] = ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12924))) + (arr_5 [i_0] [i_0] [10U]))))) + (((/* implicit */unsigned long long int) arr_9 [i_0]))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            var_23 += ((/* implicit */long long int) min((((((((/* implicit */unsigned int) var_14)) | (arr_1 [6U] [6U]))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)128))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-46)))))))));
            var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_4 [(short)7]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1536)) >> (((((/* implicit */int) arr_13 [4] [(signed char)8])) - (47462))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(14336U)))))))) : (((arr_4 [i_0 - 2]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))))))))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */_Bool) (signed char)62)) || (((/* implicit */_Bool) (signed char)-17))))));
            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_16)) ? ((~(((/* implicit */int) arr_12 [i_0] [i_3])))) : ((-2147483647 - 1)))), (((/* implicit */int) ((((/* implicit */_Bool) -190934697)) || (((/* implicit */_Bool) arr_0 [4]))))))))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                arr_17 [10] [i_3] [10] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 + 1] [2ULL]))) : (arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1])))));
                arr_18 [i_0] [i_0] = 872889682889136697LL;
            }
            for (short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_20 [(_Bool)1] [i_3]))));
                var_28 = ((/* implicit */unsigned int) (short)24590);
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
            }
        }
        for (signed char i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_25 [1LL] [(_Bool)1] [i_0]))));
            arr_26 [i_0] [i_0] [8LL] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
            var_30 = ((/* implicit */short) -1322231526568495492LL);
            arr_27 [i_0] [i_6 + 1] = ((/* implicit */unsigned short) ((arr_16 [i_6 - 1]) | ((~(arr_16 [i_6 + 1])))));
            arr_28 [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_19 [i_0] [i_6 + 1] [i_0] [i_0]) / (((/* implicit */int) var_12))))) ? (arr_19 [i_6] [i_6] [i_6 - 1] [i_0 + 3]) : (((((/* implicit */_Bool) 1140093649U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-10770))))));
        }
        for (long long int i_7 = 4; i_7 < 8; i_7 += 3) 
        {
            var_31 = ((((/* implicit */_Bool) ((signed char) arr_29 [i_0 + 1] [i_0] [i_7 - 2]))) ? ((((_Bool)1) ? (arr_7 [i_0]) : (arr_7 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0 + 2] [i_0 + 1] [i_0 + 2]))));
            arr_31 [i_0] [i_7 - 2] [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_20 [i_0] [i_0]))))));
            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (short)3814))));
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 3) 
            {
                for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 2; i_10 < 7; i_10 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned short)65533))))) ? (max((-431108027), (var_14))) : (((((/* implicit */int) var_17)) << (((((/* implicit */int) var_2)) - (24708))))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1)))))) == (1165838305444080296LL))))));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((((unsigned long long int) arr_21 [6LL] [10U] [6LL])) % (min((((/* implicit */unsigned long long int) 3841573301U)), (var_19))))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) arr_24 [(short)8] [i_9]))) ^ (min(((-9223372036854775807LL - 1LL)), (var_16)))))))))));
                        }
                    } 
                } 
            } 
            var_35 -= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0 - 2] [(unsigned short)2] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [2ULL] [i_7])))));
        }
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */int) arr_24 [i_0 - 1] [i_0 - 1])) >> (((((arr_9 [(_Bool)0]) - (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_0 + 2]))))) - (564127814939759589LL))))))));
            arr_41 [i_0] [i_11] [i_11] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)641))) : (var_16))) + (((/* implicit */long long int) ((/* implicit */int) (short)-16929))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) 7629371346222515339LL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [0LL] [0LL] [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526))) : (var_4))))))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_12 = 2; i_12 < 8; i_12 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    {
                        var_37 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (16577208699695462762ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)50900)) && (((/* implicit */_Bool) 2147483644U)))))));
                        var_38 &= ((/* implicit */signed char) arr_5 [i_13 + 1] [8ULL] [i_12 + 3]);
                        arr_51 [i_15] [(unsigned short)0] [(unsigned short)0] [i_12] &= ((/* implicit */unsigned short) ((long long int) arr_39 [i_12 + 3]));
                    }
                } 
            } 
        } 
        arr_52 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_12 + 2] [3U] [i_12 + 1] [i_12 + 3] [i_12 + 1] [i_12 + 3] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)14969)))) : (arr_5 [i_12] [i_12] [i_12 - 2])));
    }
    /* vectorizable */
    for (unsigned short i_16 = 2; i_16 < 8; i_16 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_16 - 2] [i_16 + 1] [i_16 + 3] [i_16 + 1] [i_16] [i_16 - 2]))));
        var_40 = ((/* implicit */_Bool) var_7);
        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_38 [i_16 - 2] [i_16] [i_16 - 2] [i_16] [i_16] [(signed char)8]))));
        var_42 = ((((((/* implicit */_Bool) (unsigned short)14049)) ? (402841505) : (((/* implicit */int) (short)32754)))) >= (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (_Bool)0))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 14; i_18 += 3) /* same iter space */
        {
            arr_63 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_62 [i_17]))));
            arr_64 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_60 [i_17])) * (((/* implicit */int) (short)15456))));
            var_43 ^= ((/* implicit */int) (_Bool)1);
        }
        for (int i_19 = 0; i_19 < 14; i_19 += 3) /* same iter space */
        {
            arr_68 [i_17] = ((/* implicit */unsigned long long int) (signed char)68);
            arr_69 [i_17] [i_17] [i_19] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10520))) == (33550336U)));
            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (!(((/* implicit */_Bool) arr_67 [i_17] [0U] [i_17])))))));
            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned long long int) ((int) var_19))) : (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2268870997631835799ULL)))));
        }
        var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_17])) ? (((/* implicit */int) arr_56 [i_17])) : (((/* implicit */int) (unsigned short)65526))))) ? (((/* implicit */int) arr_60 [i_17])) : (((/* implicit */int) arr_62 [i_17]))));
    }
    for (unsigned short i_20 = 4; i_20 < 11; i_20 += 3) 
    {
        arr_73 [i_20] [i_20 - 2] = ((/* implicit */unsigned short) (-(7325617664749002285ULL)));
        arr_74 [i_20] = ((/* implicit */unsigned short) ((unsigned long long int) 194566785));
        arr_75 [i_20 - 3] &= (-(((/* implicit */int) ((((unsigned int) (signed char)43)) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_20] [i_20 - 4])))))));
        arr_76 [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_62 [i_20])) | (((((((/* implicit */_Bool) arr_67 [2ULL] [2ULL] [i_20])) ? (((/* implicit */int) arr_56 [(_Bool)1])) : (arr_66 [i_20] [(_Bool)1] [i_20]))) & (((/* implicit */int) (short)32750))))));
    }
}
