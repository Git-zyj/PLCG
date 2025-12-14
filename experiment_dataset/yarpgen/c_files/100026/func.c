/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100026
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (~(((arr_5 [i_0 + 2]) - (arr_5 [i_0 - 1]))))))));
                    arr_9 [9LL] [i_0] [i_2] = ((/* implicit */unsigned short) arr_3 [i_0]);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) != (var_10))))));
}
