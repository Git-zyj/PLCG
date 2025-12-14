/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173174
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) >= (((/* implicit */int) var_9)))) ? (((var_7) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) ? (((max((var_0), (var_1))) ? (((/* implicit */int) min((var_1), (var_0)))) : (((((/* implicit */int) var_3)) >> (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [5LL] = ((/* implicit */unsigned char) arr_3 [i_0]);
                var_14 -= ((/* implicit */signed char) arr_0 [i_0]);
                arr_7 [i_0 - 1] = max(((unsigned short)0), (((/* implicit */unsigned short) (signed char)69)));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_12);
}
