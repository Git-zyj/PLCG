/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112473
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
    var_16 = ((/* implicit */signed char) ((long long int) max((((/* implicit */int) min((var_13), (var_13)))), (((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_4)))))));
    var_17 = ((9223372036854775807LL) <= (((/* implicit */long long int) 3194816038U)));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_6))))))))) && (((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) max((((/* implicit */short) arr_5 [i_0] [i_0])), (arr_0 [(signed char)3])))) ^ (((/* implicit */int) arr_0 [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_3] [i_3] [i_2] [(short)5] [(short)5] [i_0 - 1])) + (((/* implicit */int) arr_2 [i_0]))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                arr_15 [(short)15] [(short)15] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */short) arr_6 [i_3]);
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */long long int) 1100151273U)) ^ (arr_7 [i_0] [i_0] [i_0 + 1] [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_15))))));
                                arr_16 [i_4] = ((/* implicit */unsigned long long int) arr_4 [(unsigned short)12] [i_1] [i_2]);
                                var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [(short)9] [i_1] [i_2] [i_3] [(short)9]) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))))) > (arr_1 [i_3 - 1])))));
                            }
                            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                            {
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((((min((3194816041U), (3194816018U))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)25551))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_2] [(signed char)4] [i_0])))))) | (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0 + 1] [i_0] [i_0])), (arr_0 [i_0]))))))))))));
                                var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_19 [i_0] [(signed char)8] [i_2] [i_0] [i_2]) > (((/* implicit */long long int) ((/* implicit */int) var_6)))))), (arr_14 [i_0] [(short)3] [i_2] [i_3])))) || (((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1] [9U] [(_Bool)1] [i_3 - 3] [i_5]))));
                                var_25 = ((/* implicit */short) var_2);
                            }
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                            {
                                var_26 ^= ((unsigned short) arr_14 [i_0] [2LL] [2LL] [i_3]);
                                arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) var_3);
                                arr_24 [(unsigned char)2] [(signed char)8] [11ULL] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */int) var_13)) % (max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) arr_3 [16ULL] [16ULL] [(short)3])) - (((/* implicit */int) var_6))))))));
                            }
                            for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                            {
                                arr_27 [i_7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((min((arr_9 [(unsigned short)8] [i_3] [i_7]), (((/* implicit */long long int) arr_26 [i_0] [i_1] [(unsigned short)17] [i_1] [i_7])))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)25556))) > (1100151252U))))))) != (max((var_0), (((/* implicit */unsigned long long int) ((arr_19 [(unsigned char)2] [i_1] [16LL] [i_1] [i_2]) & (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_2] [i_3] [(signed char)16]))))))))));
                                arr_28 [i_0] [i_0] [(_Bool)1] [i_0 + 1] [i_0] = ((/* implicit */signed char) min((arr_14 [i_0] [i_1] [i_2] [i_3]), (((/* implicit */unsigned long long int) ((short) -1795045685)))));
                                var_27 *= ((/* implicit */short) arr_1 [(signed char)15]);
                                arr_29 [i_0] [(_Bool)1] = ((unsigned char) var_3);
                            }
                            arr_30 [i_0 - 1] [i_1] [i_2] = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
}
