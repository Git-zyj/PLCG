/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123828
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
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) ((((((9223372036854775807LL) >> (((var_7) - (21979594))))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)43)))));
            arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_0 - 1])), (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 + 4])) : (((/* implicit */int) arr_0 [i_0 + 4]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_9 [i_2] [i_0] = ((/* implicit */short) max((arr_4 [i_0]), (((/* implicit */unsigned int) ((_Bool) arr_3 [i_0 - 1] [i_0 - 2] [i_0 + 4])))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_17 = (!(((/* implicit */_Bool) arr_13 [i_0 + 3] [i_0 + 4] [i_0 - 2])));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_19 [i_4] [i_2] [i_3] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned short) (((+(((/* implicit */int) min((arr_15 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 + 2] [i_0 + 2]), ((_Bool)0)))))) >= (((((/* implicit */int) arr_6 [i_4] [i_4] [i_4])) * (((/* implicit */int) ((((/* implicit */long long int) var_7)) > (arr_14 [i_4]))))))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_11 [i_0] [15ULL])) ? (((/* implicit */int) arr_13 [i_0] [i_3] [i_3])) : (((/* implicit */int) arr_12 [(short)1])))), (arr_7 [i_0] [i_4] [i_4]))), (((((/* implicit */_Bool) arr_12 [i_4])) ? (((((/* implicit */int) (signed char)0)) | (((/* implicit */int) arr_13 [i_5] [i_0 + 4] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)1] [i_0 - 2] [i_0]))))))))))));
                        }
                        for (long long int i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            arr_22 [i_6] [i_4] [i_4] [i_2] [13] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_12 [i_4]))))) ? (arr_1 [i_0 + 4]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_2] [i_2])) & (((/* implicit */int) arr_16 [(signed char)3] [i_0] [2ULL] [i_0] [15ULL]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4] [i_3] [i_6 + 1] [i_3] [i_4])) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_4] [i_3] [i_2]))))))))));
                            arr_23 [i_4] [i_4] [i_0] [i_2] [(_Bool)1] = ((/* implicit */short) min(((+(((/* implicit */int) arr_21 [i_6 - 2] [i_6 - 2] [i_4] [i_0 + 1] [i_4] [i_0] [i_0])))), (((/* implicit */int) ((signed char) 31ULL)))));
                            arr_24 [i_6] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)29275)) >> (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_5)))) ? (((((/* implicit */_Bool) -9223372036854775807LL)) ? (arr_14 [i_4]) : (4095LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (arr_14 [i_4])));
                        }
                    }
                } 
            } 
        }
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_0 + 4] [i_0] [13ULL]))) ? (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((int) arr_4 [i_0])) - (1742003373)))))) : (min((((var_4) >> (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [(signed char)0] [i_0])))), (((/* implicit */unsigned long long int) ((-9223372036854775787LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    var_20 = ((/* implicit */int) var_15);
    var_21 ^= ((/* implicit */_Bool) var_7);
}
