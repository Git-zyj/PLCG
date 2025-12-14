/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116316
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0 + 1] = ((/* implicit */unsigned int) 1687738599684568879ULL);
                var_10 = ((/* implicit */_Bool) 607490551503962815ULL);
                arr_6 [i_0 - 1] [i_1] &= ((/* implicit */_Bool) ((min((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32747))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-32757)), (-1LL)))))) ^ (max((min((((/* implicit */unsigned long long int) (short)32746)), (12938575647336946435ULL))), (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (short)32747)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) (short)32749);
}
