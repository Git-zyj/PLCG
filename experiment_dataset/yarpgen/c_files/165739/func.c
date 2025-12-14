/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165739
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
    var_16 = ((/* implicit */unsigned long long int) (unsigned short)65525);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (~(var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((((((/* implicit */long long int) var_12)) <= (var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((unsigned int) var_0))))));
    var_18 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_3 [i_0 - 3] [i_1 + 2]);
                arr_5 [4] = ((((/* implicit */_Bool) ((int) arr_0 [10LL]))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)52190)) >= (-2147483642)))) : (((/* implicit */int) arr_0 [i_1 - 2])));
            }
        } 
    } 
}
