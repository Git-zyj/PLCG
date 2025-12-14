/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126968
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) arr_5 [i_0] [i_0] [i_1]);
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((_Bool)1) ? (var_0) : (((/* implicit */int) var_11)))) / (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) (+(((long long int) arr_2 [i_1]))))) : (((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((unsigned long long int) (-2147483647 - 1)))))));
            }
        } 
    } 
    var_22 = (!(((/* implicit */_Bool) var_11)));
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))))), ((+(var_13)))));
}
