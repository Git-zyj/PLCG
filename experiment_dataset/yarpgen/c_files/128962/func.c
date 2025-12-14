/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128962
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) << (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
