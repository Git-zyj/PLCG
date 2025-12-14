/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171032
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) var_14);
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (((-((~(((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 917030335))))) : (((/* implicit */int) var_11)))))))));
            }
        } 
    } 
    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)8191)))) : (((((/* implicit */_Bool) (+(1519408257)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((var_0), (((/* implicit */short) var_11)))))))));
}
