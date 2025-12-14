/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11306
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_13 [i_2 - 1] &= ((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0 + 2] [i_2] [16ULL]);
                            arr_14 [i_0 - 1] [i_0] [17] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        }
                    } 
                } 
                var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)31), ((unsigned char)15))))))))));
                var_12 = ((/* implicit */long long int) min(((~((-2147483647 - 1)))), ((~(((/* implicit */int) arr_0 [i_1 - 1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) var_2);
    var_14 = ((/* implicit */short) var_6);
}
