/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181625
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_0] = arr_0 [1ULL] [i_0];
                            var_21 = 252201579132747776ULL;
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) var_9);
    var_23 = ((/* implicit */signed char) var_5);
    var_24 *= ((/* implicit */signed char) var_19);
}
