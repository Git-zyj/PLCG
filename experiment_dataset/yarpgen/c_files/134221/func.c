/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134221
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    var_19 = ((/* implicit */int) var_10);
    var_20 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) var_17);
                    var_22 = ((/* implicit */unsigned int) max((var_22), ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)21375))))) : (((((/* implicit */_Bool) (unsigned short)21375)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21387)))))))))));
                }
            } 
        } 
    } 
}
