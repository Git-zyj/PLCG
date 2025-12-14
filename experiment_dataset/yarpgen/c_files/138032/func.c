/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138032
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
    var_10 &= ((/* implicit */unsigned short) var_4);
    var_11 = ((/* implicit */unsigned int) var_8);
    var_12 = ((/* implicit */unsigned short) (+((-(((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_1 [i_0]))))));
                var_14 = ((/* implicit */signed char) ((long long int) max((((long long int) (unsigned char)21)), (((/* implicit */long long int) (~((-2147483647 - 1))))))));
            }
        } 
    } 
}
