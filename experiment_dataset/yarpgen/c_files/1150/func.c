/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1150
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
    var_16 = var_5;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 *= min((arr_7 [i_1]), (max((arr_7 [(_Bool)1]), (((/* implicit */unsigned char) var_14)))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */int) var_10)) * (((/* implicit */int) min((var_5), (((/* implicit */short) var_7))))))) | (((((((/* implicit */int) var_10)) / (((/* implicit */int) var_7)))) * (((/* implicit */int) var_14)))))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max(((-(((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_1))))))), (((((/* implicit */int) var_3)) + (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_11))))))))))));
                var_20 |= ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_6)), (var_12))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_11)))), (((/* implicit */int) var_5))));
    var_22 += ((/* implicit */_Bool) var_9);
}
