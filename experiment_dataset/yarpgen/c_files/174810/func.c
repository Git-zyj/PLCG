/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174810
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
    var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_14)));
    var_16 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 3; i_3 < 12; i_3 += 1) /* same iter space */
                    {
                        var_17 *= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_2]))))) <= (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_3 - 3])));
                        arr_9 [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) arr_1 [i_2] [i_0]);
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1] [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)11] [i_2]))) != (arr_11 [i_0]))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0 - 1] [i_3 + 1])) | (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)63067))))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (var_5) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3] [1LL] [i_3 - 3]))))))));
                            var_20 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) arr_5 [i_3 - 1] [i_3] [i_3 - 3] [i_3]))));
                        }
                        for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (((~(2305843009213693951LL))) ^ (((arr_11 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [(unsigned short)9])) <= (((/* implicit */int) arr_13 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [(unsigned short)0]))));
                        }
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_14 [i_0] [(_Bool)1] [i_2] [4LL] [4LL]) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-32704))));
                    }
                    for (unsigned short i_6 = 3; i_6 < 12; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_2] [i_6] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_0] [i_7]))));
                            var_24 = arr_5 [(short)0] [9LL] [i_6 + 2] [i_1 + 1];
                            arr_22 [i_7] [i_6] [i_0] [i_1] [i_0] = arr_8 [(_Bool)0] [(_Bool)0] [i_2];
                            var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_19 [i_6 - 3] [i_6 + 1] [i_6 - 3] [i_6 - 2] [i_6]))));
                            arr_23 [i_0] [i_1] [i_2] [i_2] [i_6] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_10 [i_0] [i_0] [(unsigned short)12] [i_0] [10LL] [(unsigned short)11] [i_6])));
                        }
                        for (long long int i_8 = 3; i_8 < 12; i_8 += 4) 
                        {
                            arr_26 [i_0] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1]))) - (9223372036854775807LL)))) && (((/* implicit */_Bool) ((arr_17 [i_0] [i_2] [i_6] [i_0]) ? (((/* implicit */int) (short)26)) : (((/* implicit */int) (unsigned short)65528)))))));
                            arr_27 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_8 - 2] [i_8] [i_8 + 2])) ? (((/* implicit */int) arr_8 [i_8 - 2] [i_1 + 1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_8 - 1] [i_1 + 1] [i_0 + 2]))));
                        }
                        arr_28 [i_0] [i_2] [i_2] [i_2] &= ((/* implicit */long long int) arr_1 [i_0] [i_2]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 1; i_9 < 12; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))) : (((-7814827322415259539LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                        var_27 = ((/* implicit */long long int) (unsigned short)63);
                    }
                }
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
                {
                    arr_33 [8LL] [i_0] = ((((arr_11 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min(((~(((/* implicit */int) arr_5 [i_0 + 2] [i_1 + 1] [i_10] [i_10])))), ((+(((/* implicit */int) (short)14348)))))))));
                    arr_34 [i_0] = ((/* implicit */_Bool) min(((unsigned short)63064), (((/* implicit */unsigned short) (_Bool)1))));
                    arr_35 [i_0] [i_0] [i_1] [i_10] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) (unsigned short)2466)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) arr_16 [(short)8] [i_1] [i_1] [i_1] [i_10])))))));
                }
            }
        } 
    } 
    var_29 ^= ((/* implicit */short) ((((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), ((-(var_3))))))));
}
