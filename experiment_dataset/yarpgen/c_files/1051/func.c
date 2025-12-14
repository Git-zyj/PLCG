/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1051
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
    var_15 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) var_1);
                var_17 = ((/* implicit */long long int) ((unsigned long long int) min((((int) (unsigned char)119)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (unsigned char)122)))))));
                var_18 = ((/* implicit */short) ((((/* implicit */int) (((-(((/* implicit */int) arr_4 [(signed char)1] [i_1])))) == (((/* implicit */int) ((_Bool) (unsigned char)90)))))) << (((/* implicit */int) arr_1 [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) 1222104586)) < (min((((/* implicit */long long int) (unsigned char)92)), (var_7)))));
}
