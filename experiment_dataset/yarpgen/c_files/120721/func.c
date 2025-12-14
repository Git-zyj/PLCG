/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120721
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
    var_14 = ((/* implicit */unsigned char) min((min((var_7), (((/* implicit */unsigned long long int) ((_Bool) -7037092161653895342LL))))), (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) 3047897342U)), (var_6)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = 1112952100U;
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((min((var_2), (var_6))) <= (arr_7 [i_0 - 2])))), (max((var_6), (((/* implicit */long long int) var_8))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_1);
}
