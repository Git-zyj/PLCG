/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149282
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) ((max((arr_0 [i_1]), (((/* implicit */unsigned int) var_0)))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3)))));
                var_15 = ((/* implicit */short) (+((~((~(((/* implicit */int) (_Bool)1))))))));
                var_16 = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
    var_17 |= ((/* implicit */signed char) var_2);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (var_5)));
}
