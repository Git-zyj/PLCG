/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121508
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), ((~(((/* implicit */int) (unsigned short)11405))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) var_11);
                            var_22 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)11410))))), (min((((/* implicit */unsigned long long int) (unsigned char)168)), (11151787418354601677ULL)))));
                            var_23 = ((/* implicit */short) 4447323789389867178LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_9);
}
