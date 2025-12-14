/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160494
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    var_12 += var_2;
                    arr_8 [i_1] [i_1] [i_2 + 2] [i_2] = ((/* implicit */unsigned short) 253952LL);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) + (var_4)));
    var_14 = ((/* implicit */unsigned int) max((var_2), (((/* implicit */unsigned short) (signed char)10))));
    var_15 = ((/* implicit */unsigned long long int) var_6);
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) 3847602418U)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_1)), (var_5))))) : (max((1015088733405654328LL), (((/* implicit */long long int) var_10)))))) << (((max((var_9), (((/* implicit */unsigned long long int) min(((unsigned short)41205), (((/* implicit */unsigned short) (signed char)10))))))) - (16617574142606929784ULL)))));
}
