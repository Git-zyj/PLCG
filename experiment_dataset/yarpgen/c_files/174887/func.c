/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174887
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((unsigned int) (short)8192)))) | (((((/* implicit */int) (short)0)) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (4611677222334365696ULL))))))));
                arr_5 [i_1] = ((/* implicit */short) ((long long int) 2046876924));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) (~(((unsigned int) (!(arr_0 [i_0] [i_0]))))));
                arr_7 [i_1] = ((/* implicit */_Bool) 0LL);
            }
        } 
    } 
    var_10 = ((/* implicit */_Bool) ((((((17371068856147471539ULL) >> (((((/* implicit */int) (short)8192)) - (8190))))) ^ (((/* implicit */unsigned long long int) ((long long int) 0))))) - (((unsigned long long int) (-(18446744073709551615ULL))))));
    var_11 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> (((var_0) + (1750818599034138820LL)))))) ^ (max((1666356768121336278LL), (((/* implicit */long long int) var_5)))))));
}
