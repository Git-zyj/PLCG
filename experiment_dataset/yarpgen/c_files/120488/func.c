/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120488
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
    var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
    var_11 = ((/* implicit */short) var_7);
    var_12 = ((/* implicit */unsigned short) (signed char)75);
    var_13 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [(_Bool)0] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)50822);
                    var_14 = min((((/* implicit */unsigned long long int) ((short) arr_2 [i_1 - 1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)29)) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (18446744073709551614ULL))) : (((/* implicit */unsigned long long int) 0LL)))));
                }
            } 
        } 
    } 
}
