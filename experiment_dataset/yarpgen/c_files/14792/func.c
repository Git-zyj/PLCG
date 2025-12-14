/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14792
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0])) : (arr_4 [i_0] [i_0] [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) & (var_5)))))));
                var_21 = ((/* implicit */_Bool) min((((unsigned long long int) min((((/* implicit */long long int) var_9)), (arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) -172900268))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_6);
}
