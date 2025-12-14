/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14116
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_0))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */_Bool) var_8);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 *= ((/* implicit */long long int) ((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (arr_12 [(unsigned short)12] [(signed char)10] [i_4] [(signed char)10] [i_4 + 2])))) != (max((((/* implicit */unsigned long long int) arr_12 [i_4] [(signed char)16] [8ULL] [(signed char)16] [i_4 + 2])), (var_6)))));
                                arr_13 [15] [i_1] [(signed char)6] [i_3] [i_0] [i_3] = ((/* implicit */int) var_5);
                                var_16 = ((/* implicit */unsigned int) arr_5 [i_0] [14]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
