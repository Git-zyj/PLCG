/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117488
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
    var_16 = ((/* implicit */short) var_6);
    var_17 = ((/* implicit */unsigned int) ((max(((~(var_10))), (((/* implicit */unsigned long long int) var_2)))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (var_10)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((((/* implicit */int) (short)15)), (3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_12))))) : (max((var_1), (var_10)))))));
                arr_7 [i_1] = ((/* implicit */unsigned int) ((max((3250201043879381594ULL), (((/* implicit */unsigned long long int) 3128865517U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-64)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (((var_6) & (var_0)))))) % ((+(min((var_9), (((/* implicit */long long int) var_8))))))));
}
