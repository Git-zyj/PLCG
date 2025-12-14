/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116062
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
    var_17 = ((/* implicit */short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) < (((unsigned int) 2147483647)))))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_1))))))));
                var_20 = ((/* implicit */short) (~(((/* implicit */int) ((short) arr_2 [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_11);
    var_22 = ((/* implicit */long long int) var_14);
}
