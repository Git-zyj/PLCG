/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180666
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
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) var_13);
                var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (var_0))))), (((((/* implicit */_Bool) (-(var_4)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) - (var_2))))))));
                var_19 = ((/* implicit */int) (unsigned char)146);
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 691044111)) : ((-(var_2)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : ((-((~(4305596452875503664LL)))))));
                var_21 = min((((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (arr_3 [i_1] [i_1]))))), (arr_3 [i_1] [i_1]));
            }
        } 
    } 
    var_22 = (~(var_1));
}
