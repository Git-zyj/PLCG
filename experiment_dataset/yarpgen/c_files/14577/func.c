/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14577
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
    var_19 = ((/* implicit */int) ((4294967277U) ^ (((/* implicit */unsigned int) 1495083837))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 -= ((/* implicit */long long int) ((((2108008542) >> (((((/* implicit */int) arr_4 [i_0] [i_1])) - (23565))))) >> (((((2108008547) >> (((/* implicit */int) (unsigned short)0)))) - (2108008522)))));
                var_21 += ((/* implicit */int) ((((((/* implicit */int) (signed char)-123)) * (((/* implicit */int) var_7)))) == (((/* implicit */int) ((arr_2 [i_1]) <= (((/* implicit */unsigned long long int) 2108008554)))))));
            }
        } 
    } 
    var_22 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_2))))) <= (((/* implicit */int) var_17))))) >> (((((/* implicit */int) var_12)) - (45)))));
    var_23 = ((/* implicit */int) var_8);
}
