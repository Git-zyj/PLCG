/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168003
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~(arr_3 [i_1 - 2] [i_1 + 1])));
                var_20 &= ((/* implicit */unsigned long long int) 1201163361);
                arr_5 [i_0] = ((/* implicit */short) (~(var_4)));
            }
        } 
    } 
    var_21 = ((/* implicit */short) ((long long int) var_8));
    var_22 = ((/* implicit */int) ((((/* implicit */int) (signed char)-61)) < (-1201163362)));
}
