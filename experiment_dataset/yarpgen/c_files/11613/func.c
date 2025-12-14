/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11613
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10))))) || ((!(((/* implicit */_Bool) (signed char)28))))));
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)9)) | (((/* implicit */int) arr_0 [(signed char)19])))), (((/* implicit */int) arr_1 [i_0] [i_0]))))))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_14 = ((/* implicit */int) (-((((_Bool)1) ? (3943668244U) : (351299052U)))));
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) (+((-((-(var_6)))))));
            var_16 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (signed char)93)) < (((/* implicit */int) (signed char)14))))), (max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))));
            var_17 *= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-10))));
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                arr_8 [i_3] [(unsigned short)6] [i_3] = ((/* implicit */unsigned char) ((max(((~(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) arr_1 [i_1] [i_2])))) <= (max((((((/* implicit */int) arr_0 [i_3])) ^ (((/* implicit */int) arr_5 [i_1] [(_Bool)1])))), (((/* implicit */int) min((((/* implicit */short) arr_2 [i_2])), (arr_0 [i_3]))))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(13169293442841338866ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned char) var_5))))) - (((/* implicit */int) max((arr_3 [(_Bool)1] [i_2]), (((/* implicit */short) arr_2 [i_1])))))))))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                var_19 = max(((signed char)-1), (((/* implicit */signed char) (_Bool)1)));
                arr_11 [i_4] [i_1] [i_1] = ((/* implicit */_Bool) var_6);
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_20 *= ((/* implicit */signed char) var_8);
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                arr_16 [i_6] [i_5] [i_1] = ((/* implicit */_Bool) arr_5 [i_1] [i_1]);
                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_14 [i_1] [i_1] [i_5] [i_6]))) << ((((-(((/* implicit */int) arr_9 [i_1] [i_1] [5U])))) + (18)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    arr_20 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((680757690) >= (((/* implicit */int) (_Bool)1))));
                    var_22 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) var_8)) + (arr_18 [i_7] [i_5] [i_7] [i_6] [i_5] [i_1])))));
                    arr_21 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1913085716U)) ? (((/* implicit */int) ((short) arr_9 [i_1] [i_5] [i_6]))) : (((/* implicit */int) arr_19 [i_1]))));
                }
                for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (13344651554348450540ULL))))));
                    var_24 = ((unsigned int) (_Bool)1);
                    var_25 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_1]))));
                }
                for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 2) 
                {
                    arr_27 [i_1] [i_9 - 3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_9 + 1] [i_6] [i_5] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) * (((/* implicit */int) (signed char)9))));
                    /* LoopSeq 4 */
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                    {
                        arr_30 [i_1] [i_1] [i_1] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_9 - 1] [5LL] [i_9 + 2] [i_5])) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_6] [16LL] [i_10])) ? (((/* implicit */int) arr_0 [(short)6])) : (((/* implicit */int) arr_12 [(_Bool)1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        arr_31 [i_1] [i_1] [i_6] [i_6] [i_1] = ((/* implicit */unsigned int) arr_24 [i_1] [(_Bool)1] [(_Bool)1] [i_10]);
                        var_26 = ((/* implicit */_Bool) var_5);
                    }
                    for (short i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        arr_34 [i_1] [i_5] [i_6] [i_9] [i_9] [i_1] |= ((/* implicit */int) arr_26 [i_9 - 3] [i_9 - 1] [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_11 + 2]);
                        var_27 *= ((/* implicit */int) var_11);
                        arr_35 [i_1] [i_1] [i_1] [i_9] [i_11] = ((/* implicit */signed char) ((unsigned int) arr_33 [i_9 + 1] [i_5] [i_5] [i_9 + 1] [i_11 + 1]));
                        var_28 += ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_39 [i_9] [i_9] [(unsigned short)5] [14LL] [i_9] = ((/* implicit */unsigned long long int) arr_38 [i_1] [i_5] [(unsigned short)19] [i_5] [i_1] [i_1] [(_Bool)1]);
                        var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) < (6717482911487755363ULL)));
                    }
                    for (unsigned long long int i_13 = 4; i_13 < 19; i_13 += 3) 
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                        arr_43 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) arr_7 [i_5] [i_1]);
                    }
                    var_30 = ((/* implicit */int) arr_0 [i_9 - 1]);
                    arr_44 [i_1] [i_5] [i_5] [i_9 - 1] = ((/* implicit */unsigned long long int) arr_28 [(unsigned short)11]);
                }
            }
            for (unsigned short i_14 = 3; i_14 < 19; i_14 += 4) 
            {
                var_31 = ((/* implicit */signed char) var_7);
                var_32 *= ((/* implicit */short) ((((((/* implicit */int) var_10)) + (((/* implicit */int) arr_24 [i_1] [i_1] [i_5] [i_14])))) > (((/* implicit */int) ((unsigned short) (signed char)-10)))));
                var_33 = ((/* implicit */long long int) arr_3 [i_1] [15ULL]);
                var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_14] [i_14 + 2] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_5]))))) : ((~(((/* implicit */int) var_11))))));
            }
            var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
            var_36 = ((((/* implicit */int) arr_29 [i_1] [i_5] [i_1] [i_5] [i_1])) % (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            var_37 = ((/* implicit */signed char) var_1);
            arr_50 [i_1] [i_1] [i_15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (5277450630868212749ULL))))));
            arr_51 [i_1] [i_1] [(unsigned char)0] = ((/* implicit */unsigned short) (((_Bool)1) ? ((-(arr_48 [(signed char)13]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)37)) ? (arr_15 [i_1] [i_1] [i_1] [i_1]) : (arr_4 [(_Bool)1] [i_15]))))));
            arr_52 [i_15] = (-(((/* implicit */int) (signed char)28)));
        }
        var_38 |= ((/* implicit */short) (~(((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-13934)) + (13965)))))));
        var_39 = ((/* implicit */signed char) max((var_39), (var_3)));
        var_40 = ((/* implicit */short) min(((_Bool)1), (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8))))));
    }
    var_41 |= ((/* implicit */long long int) var_6);
    var_42 = ((/* implicit */short) var_3);
}
