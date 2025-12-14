/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10202
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
    var_19 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)136)) && (((/* implicit */_Bool) arr_0 [i_2]))));
                    var_20 = ((/* implicit */_Bool) arr_6 [i_0 - 2] [(signed char)4] [i_2]);
                }
            } 
        } 
    } 
}
