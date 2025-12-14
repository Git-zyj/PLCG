/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148727
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_12)) - (147))))))) : (((unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) var_13)) * (((/* implicit */int) var_1)))))))));
                arr_6 [(signed char)19] = ((/* implicit */int) var_8);
            }
        } 
    } 
    var_16 = (!((!(((/* implicit */_Bool) (-(var_2)))))));
}
