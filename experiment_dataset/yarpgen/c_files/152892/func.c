/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152892
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_1 - 1])) * (((/* implicit */int) arr_1 [i_1 - 1])))) % (((var_17) + (((/* implicit */int) arr_1 [i_1 - 1]))))));
                arr_5 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1 - 1])) ? (arr_4 [i_0] [9] [i_1 - 1]) : (arr_4 [i_0] [i_1] [i_1 - 1]))) << ((((((~(arr_4 [i_0] [i_0] [i_1 - 1]))) + (948209513))) - (30)))));
                var_19 = ((/* implicit */short) arr_1 [i_0]);
            }
        } 
    } 
    var_20 *= ((/* implicit */_Bool) var_9);
    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (((var_4) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_14), ((unsigned short)39345)))))))));
}
