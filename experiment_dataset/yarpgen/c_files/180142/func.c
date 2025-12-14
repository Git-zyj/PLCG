/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180142
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
    var_17 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) ((-6563117892756636308LL) / (((/* implicit */long long int) 933461945))));
                var_18 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_0] [i_0] [i_1]), (((/* implicit */short) (_Bool)1)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) | (var_7))))), (min((((/* implicit */unsigned int) (!((_Bool)1)))), (2257627242U)))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_8);
    var_20 = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_2)) : (((unsigned long long int) 1411359509U)))) | (((/* implicit */unsigned long long int) var_3)));
}
