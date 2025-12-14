/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124997
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
    var_11 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((-1LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-32)) + (77)))));
                    var_12 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))));
                }
            } 
        } 
    } 
}
