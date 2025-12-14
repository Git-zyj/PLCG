/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166647
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
    var_15 *= ((/* implicit */signed char) var_1);
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), ((unsigned short)6028)))) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) var_3)))))) ? ((+(((8ULL) >> (((/* implicit */int) var_7)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_13))))) / (var_2)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [(_Bool)1] = ((/* implicit */short) arr_1 [i_0]);
                arr_5 [2LL] [i_0] = var_11;
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) (((+(((/* implicit */int) max(((unsigned char)216), (((/* implicit */unsigned char) var_6))))))) - (((/* implicit */int) var_3))));
}
