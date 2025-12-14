/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117194
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
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) arr_4 [i_1] [i_1 - 2] [i_0]))))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (short)-3204))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                var_20 = ((/* implicit */int) min((var_20), ((-(((/* implicit */int) var_6))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)3203)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3203))) : (var_4))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))))))));
                var_22 = ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2])))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_4 + 3] [i_2])))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)3203);
                        }
                    } 
                } 
            }
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                arr_16 [i_0] [i_0] [i_5] = ((/* implicit */short) (+(var_7)));
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (short)-3204)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1] [i_1 - 1]))));
                    var_25 = ((/* implicit */_Bool) (short)3203);
                    arr_19 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((_Bool) var_12)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)0))));
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_2)))))));
                }
                for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
                {
                    var_27 = ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 + 1] [i_7 + 1] [i_7] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1]))) : (var_4));
                    var_28 = ((((/* implicit */int) arr_5 [i_0] [i_5] [i_7])) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)3207)) : (((/* implicit */int) (short)-3204)))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 2; i_8 < 23; i_8 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)3207)) ? (5200454422029352506ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_30 = ((/* implicit */int) max((var_30), ((~(((/* implicit */int) arr_3 [i_8]))))));
                        var_31 = ((/* implicit */unsigned int) (signed char)0);
                        arr_26 [i_8] [i_8] [i_8] [i_8] [i_8 - 1] [i_0] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)231)) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_5] [(short)21] [i_7] [i_8 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))) : (arr_2 [i_0 - 1])));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) 8952929285807039335LL);
                        arr_29 [i_9] [i_7] [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)235)) ? (4082304889U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))));
                        arr_30 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)14671)) == (((/* implicit */int) arr_15 [i_0] [i_0]))))) == (((/* implicit */int) (_Bool)1))));
                    }
                    arr_31 [i_0] [i_0] [i_0] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_0])) ? (-7127476436634741454LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_5] [i_7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)40944)))))));
                }
                for (short i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3175)) ? (((/* implicit */int) (short)3211)) : (-1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) == (((/* implicit */int) (signed char)15)))))) : (((576460752303423488ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                    var_34 += ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-6121))))) ? (((/* implicit */long long int) 19U)) : (((((-9094843103220771758LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)3212)) - (3170))))))))));
                        arr_38 [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    arr_39 [i_0] [i_0] [i_0] [(short)19] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53504))) ^ (1918179487U)))));
                }
                var_36 = ((/* implicit */short) ((((/* implicit */int) (short)0)) < (((((/* implicit */int) (unsigned char)138)) / (((/* implicit */int) (short)-6121))))));
                /* LoopSeq 1 */
                for (int i_12 = 1; i_12 < 23; i_12 += 1) 
                {
                    var_37 = ((/* implicit */_Bool) (((~(-9094843103220771758LL))) >> (((((/* implicit */int) (signed char)127)) - (80)))));
                    /* LoopSeq 4 */
                    for (long long int i_13 = 1; i_13 < 23; i_13 += 2) /* same iter space */
                    {
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_1 [i_5]))))) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_1] [i_0] [i_12] [i_1])))))));
                        arr_45 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) -15)) : (2739578497U)))) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (short)6121))));
                    }
                    for (long long int i_14 = 1; i_14 < 23; i_14 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */_Bool) ((((/* implicit */long long int) 4294967289U)) & (9094843103220771757LL)));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_16))))) <= (((/* implicit */int) ((unsigned short) (signed char)-27)))));
                    }
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (short)-26049))) ? (0ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (18446744073709551615ULL)))));
                        arr_51 [22] [i_1] [i_0] [i_0] [i_15] = (-(8140790710678108803ULL));
                        arr_52 [i_0] [i_5] [i_5] [i_1 - 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                        var_42 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)1192)))) ^ (((/* implicit */int) (!((_Bool)1))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967249U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (16526741964605563758ULL)));
                        var_44 = ((/* implicit */long long int) (_Bool)0);
                        arr_55 [i_0] [i_0] [i_16] = (~(8328061554870766579LL));
                    }
                }
                arr_56 [(signed char)5] [0LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9094843103220771758LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)12))))) && (((/* implicit */_Bool) 2147483647))));
            }
            var_45 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-17)) == (((/* implicit */int) var_9))))) > (((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_12)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 2) 
        {
            arr_60 [(signed char)18] [i_0] [(signed char)18] = ((/* implicit */unsigned char) ((392174432) + ((+(((/* implicit */int) var_0))))));
            var_46 = ((/* implicit */short) (((_Bool)1) ? (((59U) >> (((9094843103220771757LL) - (9094843103220771746LL))))) : (((/* implicit */unsigned int) -1073741824))));
        }
        arr_61 [i_0] = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) - (4294967248U)))));
        var_47 -= ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) / (var_8)))));
    }
    var_48 |= ((var_8) <= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)12))))));
}
