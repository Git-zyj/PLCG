/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174805
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
    var_19 = var_8;
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)161)), ((short)3860))))));
                    var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))))), (var_6)));
                }
            } 
        } 
    } 
}
