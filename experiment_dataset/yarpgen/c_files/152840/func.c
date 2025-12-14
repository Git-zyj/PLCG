/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152840
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
    var_16 = ((/* implicit */_Bool) (-(-7393043164337554547LL)));
    var_17 -= ((/* implicit */short) var_0);
    var_18 = ((/* implicit */unsigned char) 7393043164337554546LL);
    var_19 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((7393043164337554547LL), (((/* implicit */long long int) var_15))))))) ? (min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_13)))) : (((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [4LL] = ((/* implicit */unsigned char) var_3);
                    arr_10 [i_0] [i_0] [i_0] [(short)20] = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
    } 
}
