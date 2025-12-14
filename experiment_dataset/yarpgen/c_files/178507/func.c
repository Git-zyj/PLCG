/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178507
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
    var_16 = ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_6))))))) % (((/* implicit */int) ((short) ((((/* implicit */_Bool) 8980765270158617481ULL)) ? (((/* implicit */unsigned int) -169203520)) : (377881953U)))))));
    var_17 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_0)) ? (var_5) : (var_1)))))));
    var_18 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) arr_1 [i_0]);
                var_20 -= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)109)) / (((/* implicit */int) (short)-22832))));
            }
        } 
    } 
}
