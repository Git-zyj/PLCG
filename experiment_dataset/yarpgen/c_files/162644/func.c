/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162644
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
    var_19 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (~(var_16)))) ? (min((var_11), (((/* implicit */unsigned long long int) var_14)))) : (max((var_17), (((/* implicit */unsigned long long int) var_14)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [(unsigned short)0] [i_2] = arr_1 [i_0];
                    arr_11 [i_2] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1]))))) == ((-(((/* implicit */int) arr_7 [(short)2]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) + (((/* implicit */int) max((((/* implicit */short) var_1)), (max((((/* implicit */short) var_15)), (var_5))))))));
    var_21 = ((/* implicit */unsigned short) min((var_7), (var_11)));
}
