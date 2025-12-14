/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175062
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
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
    var_18 = var_0;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) ((short) var_12));
                arr_6 [i_0] = ((/* implicit */int) 627764421U);
                var_19 = ((/* implicit */int) min((var_19), ((~(((/* implicit */int) (!((!(((/* implicit */_Bool) -1LL)))))))))));
            }
        } 
    } 
}
