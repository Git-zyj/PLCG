/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17453
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
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-105))) : (var_12)))));
                var_17 = ((/* implicit */unsigned int) var_1);
                arr_5 [7LL] [i_1] = ((/* implicit */unsigned short) 1689442696129925410LL);
            }
        } 
    } 
    var_18 = ((max((var_1), (((/* implicit */unsigned long long int) var_8)))) >> ((((~(((/* implicit */int) var_9)))) - (27269))));
}
