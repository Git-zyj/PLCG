/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177172
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_11)), (var_10)))) ? (((((/* implicit */long long int) -1708430635)) + (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (3999570221U) : (((/* implicit */unsigned int) var_0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 1841946764U)) ? (295397096U) : (3005434500U)))), (max((((/* implicit */long long int) (unsigned short)65535)), (-9223372036854775804LL)))))));
    var_14 ^= ((/* implicit */unsigned int) var_0);
    var_15 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)57316)) ? (var_9) : (2147483647))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) arr_2 [3U]);
                                var_17 -= ((/* implicit */short) (unsigned short)13740);
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) (signed char)-63))) | (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [i_0] [i_0])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) var_9))))))) ? ((-(((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) arr_7 [i_0] [i_3] [i_2] [i_0])) : (arr_10 [i_0] [(unsigned short)0] [i_0] [i_0]))))) : ((+(arr_6 [i_0] [14LL] [(unsigned short)11])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) arr_12 [(signed char)0] [i_1] [i_2] [i_2]);
                }
            } 
        } 
    } 
}
