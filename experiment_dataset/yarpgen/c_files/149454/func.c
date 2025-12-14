/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149454
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) (short)32764))))) ? (((/* implicit */long long int) (~(var_9)))) : (max((-5527420533314593247LL), (((/* implicit */long long int) (short)9808))))))) ? (((long long int) (!(((/* implicit */_Bool) 1382466850))))) : (((((/* implicit */long long int) (~(((/* implicit */int) (short)-32748))))) & (var_15)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) ((min((247006400), (((/* implicit */int) (unsigned short)0)))) << ((((~(var_13))) - (2449658148U)))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((min((((/* implicit */int) arr_5 [i_1] [i_1])), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (unsigned char)9)))))) < (((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
