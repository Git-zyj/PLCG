/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127929
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [1LL] = ((/* implicit */long long int) (~(arr_7 [i_3] [i_2] [i_1] [i_0 + 1])));
                            arr_11 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */short) arr_0 [i_0]);
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0 + 1]))));
                arr_13 [i_0 + 2] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_0 [11ULL]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_1))));
}
