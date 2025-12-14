/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171944
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
    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_4)))));
    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 536870912)) ? (((/* implicit */int) ((unsigned short) var_13))) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)0)) : (arr_1 [i_0])))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_1])) ? (3426058704U) : (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [13]))))))) ? (arr_3 [i_0] [i_1] [i_1]) : (2147483640)));
            }
        } 
    } 
    var_18 += ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (unsigned short)64372)))));
    var_19 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_0)) - (26015))))));
}
