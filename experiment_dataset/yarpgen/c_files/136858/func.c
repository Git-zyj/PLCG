/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136858
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
    var_13 = ((/* implicit */signed char) ((((int) (-(((/* implicit */int) (signed char)-26))))) >= ((-(var_5)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0 - 3] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                    arr_10 [i_0] [6ULL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)16435)))) | (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)15))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)11)), (1081305780U)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0] [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [6U] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) 9223372036854775807LL)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_0)) ^ (arr_8 [i_2 - 1] [i_2] [(short)9] [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), ((+(arr_2 [i_0] [(signed char)2])))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) & ((+((-9223372036854775807LL - 1LL)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(unsigned short)3] [i_0])) ? (arr_8 [i_0] [i_1] [i_2 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2] [5U] [i_0] [i_2 - 1] [i_2] [i_2 - 1]))))))));
                                arr_15 [(short)10] [10ULL] [i_2] [i_3] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)2] [(unsigned short)4] [i_0])) ? (9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) (signed char)-51)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8))))))));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) min((((/* implicit */unsigned short) (((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))))) <= ((~(-9223372036854775795LL)))))), (((unsigned short) (-2147483647 - 1))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
