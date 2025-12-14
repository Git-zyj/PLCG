/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116506
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
    var_10 = ((/* implicit */short) ((_Bool) min((((/* implicit */long long int) (-(4294967295U)))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (-994225649894081035LL))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 9; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (-((+(((/* implicit */int) (short)-12515)))))))));
                    arr_9 [i_0] [i_1] [i_1] [3ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (short)24919)) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (short)248))));
                }
            } 
        } 
    } 
}
