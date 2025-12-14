/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179597
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_19 *= (_Bool)0;
                    var_20 ^= (_Bool)1;
                    var_21 = ((/* implicit */long long int) (~(var_5)));
                    var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) (_Bool)0)), (arr_5 [i_1])));
                }
            } 
        } 
    } 
    var_23 += ((int) var_2);
    var_24 *= ((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) -2652204898350703807LL))))), (var_10))));
    var_25 = ((/* implicit */_Bool) max((var_25), (((min((((/* implicit */long long int) ((var_3) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (var_4))) == (((/* implicit */long long int) max(((+(var_16))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)22325))))))))))));
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) 26U))));
}
