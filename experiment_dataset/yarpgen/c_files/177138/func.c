/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177138
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
    var_14 = ((/* implicit */long long int) (((+(((unsigned long long int) var_4)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))) % (min((var_6), (((/* implicit */long long int) var_13)))))))));
    var_15 = (+(((/* implicit */int) ((_Bool) ((int) var_9)))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_11))) <= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))) % (((/* implicit */int) ((_Bool) ((var_13) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) ((unsigned int) ((int) var_13)));
                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) ((int) var_7))))));
            }
        } 
    } 
    var_18 = min((((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */int) var_13)), (var_1))))), (((unsigned int) min((var_10), (((/* implicit */unsigned long long int) var_2))))));
}
