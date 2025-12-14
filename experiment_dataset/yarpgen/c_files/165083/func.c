/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165083
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_2)), (var_9)))))) ? (max((((/* implicit */unsigned int) var_2)), ((-(0U))))) : (2621349915U)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [(signed char)14] = ((/* implicit */short) ((((4049025872U) < (4294967279U))) || (max((arr_1 [i_0 - 1]), (arr_2 [i_0 + 2])))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((var_8) ? (4294967279U) : (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [15]))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)74)) + (var_3)))) | ((-(1673617380U))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)20002)) || (((/* implicit */_Bool) arr_5 [i_1] [i_1 - 2])))))));
            arr_7 [(unsigned short)18] &= ((((/* implicit */int) arr_1 [i_0 + 2])) | ((+(((/* implicit */int) arr_2 [i_0])))));
            var_21 -= ((/* implicit */int) ((41U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 3])))));
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
            {
                arr_10 [i_1] [i_1] [i_1 + 1] [(unsigned short)17] = (+(((/* implicit */int) arr_4 [i_0 + 1])));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20002)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                arr_11 [9] [i_1] [i_2] = ((/* implicit */_Bool) (+(0U)));
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_1] [i_1] [i_1 + 2] [i_1]))));
            }
            for (short i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (unsigned char)71))) || ((_Bool)0)));
                            arr_22 [(short)8] |= ((/* implicit */unsigned int) (!(arr_2 [i_0 + 3])));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((4294967268U) / (1673617373U)))) ? (((/* implicit */int) ((2384558238U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3] [(_Bool)1])))))) : (((/* implicit */int) arr_20 [i_0] [12U])))))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((arr_19 [i_0 + 3] [i_1 - 2] [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_13 [i_0] [i_1 + 2])))))));
            }
            for (short i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
            {
                arr_26 [i_1] [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned short) var_5);
                arr_27 [i_0] [i_0] [i_6] [i_1] = ((/* implicit */unsigned int) 3182815713881564786ULL);
                var_27 *= ((((/* implicit */int) var_1)) * (((/* implicit */int) var_14)));
            }
            for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                arr_30 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) arr_16 [i_0] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [2]))))) * ((-(3168375292U)))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    arr_33 [i_0 + 1] [2ULL] [i_7] |= ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_13 [i_8] [2ULL])))) ? (((/* implicit */unsigned int) ((var_2) | (((/* implicit */int) (signed char)31))))) : ((((_Bool)1) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20002)))))));
                    var_28 += 18446744073709551590ULL;
                    arr_34 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_0]));
                }
                var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_24 [(signed char)15] [i_1 + 2] [i_7])));
                var_30 = 2286319093U;
            }
            arr_35 [i_1] [i_1] = ((/* implicit */_Bool) ((arr_5 [i_1] [i_1 - 2]) - (arr_5 [i_1] [i_1 - 2])));
        }
        for (unsigned int i_9 = 2; i_9 < 18; i_9 += 4) 
        {
            arr_38 [i_0] [(_Bool)1] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) * (((unsigned int) 17743743720372583889ULL)))) ^ (min((403720788U), (((/* implicit */unsigned int) (+(var_2))))))));
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_43 [i_10] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (((-2147483647 - 1)) + (((/* implicit */int) (unsigned short)29993))))), ((-(var_18))))) + (((((/* implicit */_Bool) ((arr_21 [i_9] [i_9 + 2] [i_10]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_0] [(signed char)1] [i_0] [9ULL])))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_10] [i_0 + 3] [i_0 + 3])) ? (1013702269) : (arr_13 [i_0] [i_0]))))))));
                var_31 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) max(((unsigned char)140), (((/* implicit */unsigned char) (_Bool)0))))) * (((((/* implicit */int) var_11)) / (((/* implicit */int) arr_16 [i_0 + 1] [i_9]))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                arr_46 [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) arr_23 [i_9 + 1] [i_9] [i_9] [i_0 - 1]))));
                var_32 = ((/* implicit */_Bool) max((var_32), (((18446744073709551615ULL) > (((/* implicit */unsigned long long int) arr_28 [i_0 + 2] [i_0 + 1] [i_11]))))));
            }
            for (int i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                arr_50 [i_0] [i_0] [i_0] [5U] = ((/* implicit */int) min((((((((/* implicit */_Bool) var_17)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 3]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) ((short) (short)19948)))));
                arr_51 [i_0] [i_9 + 2] [1ULL] [i_9 + 2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_39 [i_0] [i_0] [(_Bool)1])) ? ((~(arr_48 [i_0] [i_0] [15ULL]))) : (((/* implicit */unsigned int) (-(var_6)))))), (((/* implicit */unsigned int) (unsigned char)112))));
                arr_52 [i_0] [10U] [i_12] [i_0] = ((/* implicit */_Bool) ((max((arr_41 [i_0 + 1] [i_0 + 1] [i_0 - 1]), (((unsigned long long int) var_11)))) * (((/* implicit */unsigned long long int) var_7))));
            }
        }
    }
    for (int i_13 = 1; i_13 < 18; i_13 += 3) /* same iter space */
    {
        arr_57 [i_13] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_13 [i_13] [i_13]), (var_3))))))) | (((/* implicit */int) ((_Bool) max((var_0), (arr_5 [(short)14] [i_13])))))));
        var_33 = ((/* implicit */unsigned long long int) min((var_33), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))) : (18446744073709551601ULL)))));
    }
    var_34 = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) (-(-285459014)))) + (((var_12) - (((/* implicit */unsigned int) 0))))))));
}
