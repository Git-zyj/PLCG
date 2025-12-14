/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118319
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(arr_7 [i_0] [i_0]))), (((long long int) arr_2 [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (-1)));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (short)27);
                        var_20 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (short)-32752)), (min((51261137U), (((/* implicit */unsigned int) (signed char)-126))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 3) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-23646))));
                            var_22 -= ((/* implicit */unsigned int) (unsigned char)252);
                            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) < (-453892026177065884LL)));
                            arr_16 [i_2] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) ((long long int) arr_3 [i_4 - 1]));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) ((long long int) arr_18 [i_5] [i_5 - 1] [i_5] [i_5 + 2] [i_1 - 1] [i_1 + 1]));
                            var_24 = ((/* implicit */unsigned short) (~(0)));
                            var_25 += ((/* implicit */unsigned long long int) ((long long int) arr_10 [i_1 - 2] [i_1 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]));
                            var_26 += (((+(((/* implicit */int) (signed char)-5)))) % (((/* implicit */int) arr_13 [i_0])));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_3] [i_6] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_2] [i_3] [i_6] [i_1 - 2] [i_1 - 2]))));
                            var_27 += ((/* implicit */unsigned short) (+(((arr_7 [i_0] [i_3]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29924)))))));
                        }
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(394719804)))) + (4294901760U)));
    var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-98)), (var_8)));
    var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (-(65519U))))) || (((/* implicit */_Bool) (short)22238))));
    /* LoopSeq 3 */
    for (short i_7 = 4; i_7 < 24; i_7 += 3) 
    {
        arr_26 [i_7] |= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-26)) ? (-1) : ((-2147483647 - 1)))))))), ((((+(((/* implicit */int) (_Bool)1)))) / (arr_24 [i_7 - 1] [i_7])))));
        arr_27 [i_7] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (arr_25 [i_7 - 4] [i_7 - 4]))))));
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((long long int) min((((((/* implicit */int) (unsigned char)201)) / (arr_24 [i_7] [i_7]))), (((/* implicit */int) ((short) 3987861536U))))));
        arr_29 [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (+(arr_24 [i_7 - 1] [i_7 - 1])))) ? (-9) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))) + (((/* implicit */int) (short)32736))));
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1262969061504260613LL)) ? (2147483647) : (arr_24 [i_8] [i_8])))))))));
        arr_33 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */unsigned long long int) 0U)) : (18446744073709551615ULL))))));
    }
    for (short i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            arr_49 [i_9] [i_10] [i_11] [i_10] = ((/* implicit */signed char) ((((unsigned long long int) (signed char)63)) >> (((65011712) - (65011701)))));
                            var_32 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_9] [i_10] [i_11] [i_9] [i_13]))) : (16448555984279077146ULL)));
                        }
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            var_33 += ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) (unsigned char)255)))));
                            arr_54 [i_9] [i_10] [i_10] = ((/* implicit */long long int) arr_25 [i_9] [i_11]);
                            arr_55 [i_9] [i_10] |= ((/* implicit */long long int) ((short) 1998188089430474469ULL));
                        }
                        arr_56 [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (short)4583)) << (((((/* implicit */int) (unsigned short)21976)) - (21973))))));
                        arr_57 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) 8191ULL)) || (((/* implicit */_Bool) 197326651013464974ULL))))) < (((/* implicit */int) arr_39 [i_12] [i_9]))));
                        arr_58 [i_9] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4611123068473966592LL)) ? (arr_37 [i_9] [i_10] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44324)))));
                    }
                } 
            } 
            arr_59 [i_9] [i_10] [i_10] = ((/* implicit */_Bool) 18446744073709551593ULL);
        }
        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            var_34 = ((/* implicit */unsigned char) arr_45 [i_9] [i_9] [i_15] [i_9] [i_15] [i_9]);
            var_35 += ((/* implicit */signed char) (+((+(((/* implicit */int) arr_39 [i_9] [i_15]))))));
        }
        arr_63 [i_9] = (-(((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */unsigned long long int) ((int) -1511021465))) : (((unsigned long long int) (signed char)0)))));
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (max((arr_53 [i_9] [i_9] [i_9] [i_9] [i_9]), (17023107064328839303ULL)))));
        var_37 -= ((/* implicit */_Bool) max((856417171U), (((unsigned int) ((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned char)7)))))));
    }
}
