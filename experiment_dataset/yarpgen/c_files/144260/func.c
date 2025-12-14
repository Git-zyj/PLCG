/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144260
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -897506760))))), (((((/* implicit */_Bool) (short)-2260)) ? (7441597602652666691ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)384)))))))) ? (((/* implicit */unsigned long long int) var_5)) : (7441597602652666673ULL)));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_16 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0 - 4])) + (((/* implicit */int) arr_0 [i_0 - 2])))), (((/* implicit */int) (signed char)111))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */int) arr_0 [i_1]);
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) (short)2279);
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2263)) ? (((/* implicit */int) (short)-28968)) : (arr_15 [i_2] [(_Bool)1] [i_3] [i_4] [i_4] [i_2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2260))) : (arr_5 [i_4] [i_5])))))))));
                            arr_17 [i_2] [(short)8] [i_2] [i_5] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((18148243975250130848ULL) + (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32736))) : (7800258432064363121LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)112)) ? (arr_15 [i_3] [i_4 + 1] [i_4 + 1] [i_4 + 3] [i_5] [i_4 + 1]) : (arr_15 [12U] [i_4 - 1] [i_4 - 1] [i_4] [(unsigned short)3] [i_5]))))));
                            arr_18 [i_4] [i_5] [(short)11] [i_5] = ((/* implicit */short) max((((2257834369820091635LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-32752))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_2 - 1])))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_4 - 1] [i_2 + 2] [i_2 + 1]))))) ? (((/* implicit */int) min(((short)-2264), ((short)2273)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_4 - 2] [(signed char)13] [i_4 - 2])) : (((/* implicit */int) arr_12 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 2]))))));
                        }
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */long long int) -897506760)) : (-1LL)));
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min((-2257834369820091610LL), (((/* implicit */long long int) arr_12 [i_1] [i_1] [(short)10] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40169))) : (max((2257834369820091635LL), (((/* implicit */long long int) 2053965195U))))))))));
                        var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 324835343U)) % (12375983133438940937ULL)))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_6] [i_6] [i_6 + 1])) >= (((/* implicit */int) arr_6 [i_6] [i_6] [i_6 + 1]))))) : ((+(arr_15 [i_2 - 1] [i_6 - 1] [i_2 - 1] [i_6] [i_1] [i_2 - 1])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) ((((var_7) / (1023U))) / (((((/* implicit */_Bool) arr_7 [i_2])) ? (452785629U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11561)))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_7] [(unsigned char)11])) ? (452785625U) : (((/* implicit */unsigned int) arr_23 [i_7] [i_1]))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_3]) ^ (((/* implicit */int) (_Bool)1))))) ? (12375983133438940929ULL) : (((/* implicit */unsigned long long int) 1624695118))));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 1) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (~(15280287726893729678ULL)))) ? (((((/* implicit */int) arr_24 [i_1])) ^ (((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_2])))) : (arr_3 [i_1]))));
                        arr_26 [i_1] [i_1] [i_1] [i_1] [i_8] [(unsigned short)5] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_16 [i_1] [3] [3] [i_1] [i_8]))));
                        var_26 = ((/* implicit */long long int) arr_23 [i_8] [i_8 + 3]);
                        arr_27 [i_1] [i_2] [i_3] [i_8] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_9 [i_8 - 2] [i_2 + 1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8]))) : (min((6070760940270610683ULL), (6070760940270610683ULL))))), (((/* implicit */unsigned long long int) arr_2 [i_1]))));
                    }
                    arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_2] [14U] [(unsigned char)1]))) : (var_9))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 748389895U)) ? (((/* implicit */int) (short)-14175)) : (((/* implicit */int) (unsigned short)5782)))))))) ? (((((/* implicit */_Bool) 1916899711)) ? (3826812995430055151ULL) : (((/* implicit */unsigned long long int) 887064596U)))) : (((((/* implicit */_Bool) arr_12 [9U] [i_2] [i_2] [i_2])) ? (min((12375983133438940932ULL), (((/* implicit */unsigned long long int) 0U)))) : (((((/* implicit */_Bool) 655609369)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [6LL] [i_1] [12ULL] [12ULL] [i_3]))) : (5002495735542145279ULL)))))));
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((((/* implicit */int) arr_25 [i_1])) == (((/* implicit */int) arr_19 [i_1] [i_2] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [(unsigned short)12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_2] [i_3] [6LL]))) : (3748219149244764661LL)))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)28557)))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (2003345315) : (((/* implicit */int) (short)-1))))))) : (((long long int) arr_21 [i_1] [i_2] [i_2 + 1])))))));
                }
            } 
        } 
        arr_29 [i_1] = ((/* implicit */signed char) (unsigned short)5782);
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    arr_35 [i_10] [i_10] [i_9] = ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_7 [i_1])) - (((/* implicit */int) arr_24 [i_10])))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        for (int i_12 = 1; i_12 < 11; i_12 += 2) 
                        {
                            {
                                var_28 |= ((/* implicit */short) ((((/* implicit */int) min((arr_14 [i_12 + 2] [i_12 - 1] [i_11] [i_12 - 1] [i_12] [i_12 + 4]), (((/* implicit */short) (signed char)-95))))) > (((/* implicit */int) arr_14 [i_12 + 2] [i_12 - 1] [i_11] [i_11] [i_11] [i_12 + 4]))));
                                arr_41 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */int) arr_34 [i_1] [3LL])), (((((/* implicit */_Bool) arr_40 [i_1] [5] [i_10])) ? (((/* implicit */int) arr_22 [11ULL] [1] [i_10] [11ULL])) : (((/* implicit */int) arr_0 [(unsigned char)11])))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) != (6070760940270610697ULL)))) >> (((/* implicit */int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21))))))))));
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) -2147483634)) ? (-2103530310) : (-1916899712)));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) arr_21 [i_1] [i_9] [(short)9]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_13)))))))), (7911855936166120414LL)));
                }
            } 
        } 
        var_31 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1])) ? (((((/* implicit */_Bool) min(((unsigned short)5800), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) arr_24 [i_1])) : (((/* implicit */int) (short)-28557)))) : (((/* implicit */int) (short)7881))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_13 = 1; i_13 < 16; i_13 += 1) 
    {
        for (signed char i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            {
                arr_48 [14] [i_13] [i_13] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned char)9))))));
                arr_49 [i_14] = ((/* implicit */_Bool) var_12);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_15 = 2; i_15 < 14; i_15 += 4) 
                {
                    arr_52 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) 6070760940270610683ULL);
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        for (int i_17 = 3; i_17 < 15; i_17 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))));
                                arr_58 [2] [3U] [i_17] [3U] [i_17] [3U] [3U] = ((/* implicit */int) arr_45 [i_15]);
                                arr_59 [i_13] [i_13] [(short)5] [i_13] [i_17] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_54 [i_13] [i_13 + 1])) ? (((/* implicit */unsigned long long int) 2322773656U)) : (var_9)));
                                var_33 = ((((/* implicit */unsigned long long int) arr_57 [(signed char)13] [(signed char)13] [i_15 - 1])) ^ (6070760940270610683ULL));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (signed char i_19 = 2; i_19 < 14; i_19 += 1) 
                        {
                            {
                                var_34 *= ((arr_57 [i_14] [i_18] [i_19]) < (arr_57 [i_13 - 1] [i_13 - 1] [i_13 - 1]));
                                var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_15 - 2]))) : (var_5)));
                                var_36 = ((/* implicit */unsigned short) ((arr_44 [i_13 - 1] [i_15 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_13 + 1] [i_15 - 2]))) : (0LL)));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_15 + 3])) ? (((/* implicit */int) arr_43 [i_15 + 3])) : (((/* implicit */int) arr_43 [i_15 + 3])))))));
                }
            }
        } 
    } 
    var_38 ^= ((/* implicit */int) -20LL);
}
