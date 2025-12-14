/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12760
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
    var_12 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((var_8) + (((/* implicit */long long int) -1405401768)))) : (((/* implicit */long long int) var_3))))) == (((((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))) * (((((/* implicit */_Bool) (unsigned short)56898)) ? (var_6) : (((/* implicit */unsigned long long int) var_8)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) / (-6161553872160784126LL)))) * (((min((571957152676052992ULL), (((/* implicit */unsigned long long int) 6161553872160784125LL)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5607)) ? (var_10) : (((/* implicit */int) arr_0 [i_2]))))))))))));
                    var_14 = ((/* implicit */unsigned int) 6161553872160784125LL);
                    arr_8 [i_0] [i_0] = var_0;
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) (~(-6161553872160784126LL)));
    var_16 = ((/* implicit */unsigned short) (((-(6161553872160784125LL))) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (6161553872160784126LL) : (var_11))))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_9)) - (59)))))))) || (((/* implicit */_Bool) var_1)))))));
}
