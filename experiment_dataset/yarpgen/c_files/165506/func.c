/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165506
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
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned short) 5535994724274409067LL);
                var_12 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)48873))))) : (((arr_5 [i_1]) % (arr_5 [i_0]))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) (~((~(-5535994724274409067LL)))));
            }
        } 
    } 
    var_13 = var_7;
    var_14 = ((/* implicit */unsigned short) var_9);
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) min((var_7), (var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) max((var_10), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_2)))));
}
