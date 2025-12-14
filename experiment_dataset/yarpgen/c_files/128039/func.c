/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128039
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
    var_19 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = min((((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))) : (min((var_13), (((/* implicit */int) (signed char)120)))))), (((/* implicit */int) (unsigned short)0)));
                var_21 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_4)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (((((-(2147483647))) & (((/* implicit */int) max((((/* implicit */short) var_1)), ((short)-2177)))))) >> (((((/* implicit */int) var_3)) + (6825)))));
}
