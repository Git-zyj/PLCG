/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175940
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */signed char) arr_2 [i_1]);
                var_11 *= ((/* implicit */unsigned long long int) ((((arr_1 [i_0]) / (((/* implicit */int) var_7)))) <= ((+(((/* implicit */int) var_5))))));
            }
        } 
    } 
    var_12 -= ((/* implicit */signed char) var_4);
    var_13 = ((/* implicit */short) 17175674880LL);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned short)3)) : ((((!(((/* implicit */_Bool) 503316480)))) ? (((/* implicit */int) min((var_7), (((/* implicit */short) var_4))))) : (((/* implicit */int) var_9))))));
    var_15 = ((/* implicit */unsigned char) var_8);
}
