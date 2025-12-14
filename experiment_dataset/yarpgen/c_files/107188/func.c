/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107188
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
    var_17 = ((/* implicit */_Bool) min((var_17), (var_1)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) (~(arr_3 [i_2] [i_1] [i_0]))))))))));
                    var_19 = ((/* implicit */long long int) 4294967295U);
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_2))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned char) var_14)), (((unsigned char) var_3))))))));
}
