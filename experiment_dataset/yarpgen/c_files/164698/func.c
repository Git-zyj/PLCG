/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164698
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
    var_18 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */short) var_14);
                var_20 = ((/* implicit */int) 536870911LL);
                var_21 = ((/* implicit */long long int) min((arr_2 [(_Bool)1]), (arr_3 [i_0 - 1])));
            }
        } 
    } 
}
