/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17362
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_5 [i_1 + 1] [i_1 - 3]))) - ((+(((((/* implicit */int) var_4)) | (((/* implicit */int) (_Bool)1))))))));
                                var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) min((((/* implicit */int) var_8)), (max(((-(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((short) (_Bool)1))))))))));
                                arr_16 [8] [i_2] [6] [6] [i_2] [(_Bool)1] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 + 1])) >> (((/* implicit */int) arr_0 [i_0 + 1])))))));
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        var_12 = ((/* implicit */_Bool) arr_19 [11U] [(unsigned short)9] [12] [i_5] [i_1]);
                        arr_21 [(_Bool)1] [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */short) min((max((arr_10 [i_0 + 2] [i_1] [i_1 - 2] [i_1 - 2] [i_5 + 1]), (arr_10 [i_0 - 2] [i_0] [i_1 - 3] [i_1 - 1] [i_5 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_5 - 1])))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 2; i_6 < 17; i_6 += 2) 
                        {
                            arr_25 [i_0] [i_0] [i_0 - 2] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_13 [i_2] [i_1 - 3] [i_2] [i_5 - 1])))) && (((/* implicit */_Bool) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_2))))))))), (min((((((/* implicit */_Bool) arr_8 [4LL] [i_1] [i_2] [i_6])) ? (((/* implicit */int) arr_22 [9LL] [i_2])) : (((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                            var_13 = ((/* implicit */_Bool) min((((min((4873316247044448573LL), (((/* implicit */long long int) (_Bool)0)))) & (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) (short)-6579)) + (6581)))))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-23354)))))));
                        }
                        arr_26 [i_0 + 1] [(signed char)2] [(signed char)2] [i_5] = ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_2] [i_5 - 1])) - (((/* implicit */int) (signed char)82))))) - (((unsigned int) var_7))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2513)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-23354))))) ? (max((((/* implicit */long long int) arr_14 [i_0 - 2] [i_2])), (var_0))) : (((/* implicit */long long int) ((unsigned int) 4066579020U))))));
                        var_14 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_5 + 1] [i_2] [i_1 + 1] [i_1] [i_0 + 2])) ? (((/* implicit */long long int) 4043931514U)) : (var_9))) == (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_1] [i_0])), (var_6))))))))) : (max((((((/* implicit */_Bool) (short)23354)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_0))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (var_7))))))));
                    }
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        arr_31 [16] [i_0] [i_2] [i_7] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) max(((+(arr_1 [i_1 - 2]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8)))))))) / (((arr_24 [i_0 + 2] [i_1] [i_1] [(short)15] [i_2] [i_7] [(short)4]) / (((/* implicit */long long int) ((arr_23 [i_0] [(_Bool)1] [i_2] [11LL] [i_2] [i_7] [(unsigned char)5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0 + 2] [i_1] [(_Bool)1] [(unsigned short)3] [i_7]))) : (arr_9 [i_0] [i_0] [i_0] [(signed char)10]))))))));
                        var_15 *= ((/* implicit */unsigned int) (~(((long long int) var_3))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (63U)))));
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1])) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-5239252846104297591LL))))));
                    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 3] [i_1 - 2]))));
                }
                for (long long int i_9 = 3; i_9 < 16; i_9 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)1)) >> (((((/* implicit */int) arr_13 [(_Bool)1] [i_1 - 3] [(_Bool)1] [i_9 + 2])) + (5612)))))) & (arr_20 [i_9 - 3] [i_1 - 3] [i_0 + 2] [i_0 + 2]))));
                    arr_37 [(short)9] [(short)7] [(short)7] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0 + 2] [i_1] [i_1 - 2] [i_9 - 1] [i_9 + 2])) & (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_6))))))) ? (((((/* implicit */int) arr_12 [i_9 + 2] [i_1] [(signed char)0] [i_9] [i_1 + 1] [i_9] [i_9])) % (((/* implicit */int) var_4)))) : ((~(((((/* implicit */int) arr_30 [i_0] [(signed char)4] [(signed char)4] [(_Bool)1])) >> (((/* implicit */int) (_Bool)0))))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) 4294967231U)), ((~(arr_10 [i_9] [i_1] [i_1 - 2] [i_0 - 2] [i_0 - 1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_9] [(_Bool)1] [i_1 + 1])) % (((/* implicit */int) arr_5 [i_0 + 1] [(signed char)8]))))) ? (((/* implicit */int) arr_27 [i_0 + 1] [i_0 + 1] [i_9 + 2])) : (((/* implicit */int) ((arr_9 [i_0] [i_0] [i_0] [i_0 + 2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9] [10ULL] [i_1] [16LL] [i_0] [8U])))))))))));
                    var_21 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [13LL] [(_Bool)1] [i_1 - 3] [i_9]))))), (((((/* implicit */_Bool) arr_8 [(unsigned short)15] [i_1] [i_9] [i_9])) ? (arr_33 [(short)5] [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
                var_22 = ((/* implicit */_Bool) (short)28063);
                arr_38 [12U] [i_1] = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) arr_17 [i_0]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((unsigned int) (~(((/* implicit */int) var_5))))))))));
}
