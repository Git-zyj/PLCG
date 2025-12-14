/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182091
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
    var_17 = ((signed char) var_16);
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_5))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [4LL]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)11])) ? (((/* implicit */int) (unsigned short)2260)) : (((/* implicit */int) var_12))))))) : (var_2))))));
                    arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_9))) + (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_2])), (var_14))))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */short) (~(((var_6) ? (((/* implicit */int) ((_Bool) var_8))) : (((((/* implicit */_Bool) (unsigned short)2248)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))))));
}
