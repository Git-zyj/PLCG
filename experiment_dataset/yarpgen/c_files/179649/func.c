/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179649
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
    var_10 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (var_7)))))))));
    var_11 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) (+(var_6)))) >= (14510380680978929002ULL))), (var_2)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((-424187610), (-1712387412)));
                    arr_9 [i_1] [i_0] = (~((((!(((/* implicit */_Bool) arr_0 [i_2])))) ? (((((/* implicit */_Bool) 240552284)) ? (2118989826) : (-424187610))) : ((-(240552284))))));
                }
            } 
        } 
    } 
}
