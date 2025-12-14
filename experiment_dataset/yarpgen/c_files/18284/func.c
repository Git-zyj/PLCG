/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18284
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
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))));
                    arr_10 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)31515))))) ? (((arr_6 [i_0] [i_1]) >> (((var_13) - (1494906053))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31516)) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
}
