/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105483
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */unsigned char) ((int) var_6));
                arr_4 [5ULL] = ((var_5) != (((/* implicit */long long int) ((/* implicit */int) ((min((var_15), (((/* implicit */unsigned long long int) var_17)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10743178729562172913ULL)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (140592206)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
    var_21 = ((/* implicit */long long int) var_8);
}
