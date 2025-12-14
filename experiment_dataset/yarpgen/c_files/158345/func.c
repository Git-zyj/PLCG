/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158345
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
    var_13 ^= ((/* implicit */unsigned long long int) ((var_7) - ((-(-4191086838884980233LL)))));
    var_14 = var_9;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4191086838884980232LL)), ((-(var_12)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_5)))) ? (var_3) : (-4191086838884980212LL)))));
                var_15 ^= -6291041522309691000LL;
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (short)1020);
            }
        } 
    } 
}
