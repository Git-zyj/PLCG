/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100018
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
    var_19 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 -= ((/* implicit */long long int) ((((/* implicit */int) (!(var_16)))) >= ((~(((/* implicit */int) ((unsigned short) 14886242073602661886ULL)))))));
                    arr_10 [i_0] [i_1 + 2] [i_2] [(signed char)6] = ((unsigned long long int) min((var_3), (var_10)));
                }
            } 
        } 
    } 
}
