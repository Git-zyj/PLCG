/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126241
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
    var_15 = ((/* implicit */long long int) min(((~(((-1863485006) ^ (var_4))))), (((/* implicit */int) ((signed char) ((var_11) ^ (((/* implicit */long long int) var_2))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned char)16] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_2 [i_0])))), ((!(((/* implicit */_Bool) arr_2 [i_0]))))));
                var_16 = ((/* implicit */unsigned int) (unsigned char)167);
            }
        } 
    } 
}
