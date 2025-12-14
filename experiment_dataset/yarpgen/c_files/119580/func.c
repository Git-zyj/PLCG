/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119580
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) var_8);
                    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (((((((/* implicit */_Bool) -1242162202)) ? (-3456688259611346715LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_8), (((/* implicit */signed char) ((var_2) != (((/* implicit */unsigned long long int) arr_2 [i_1])))))))), (((424590786368682556LL) ^ (-2784231536396676253LL)))));
                    var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) == (((/* implicit */int) arr_5 [i_0 + 3]))))), (max((((/* implicit */int) arr_5 [i_1 + 1])), (var_4)))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */_Bool) var_1);
}
