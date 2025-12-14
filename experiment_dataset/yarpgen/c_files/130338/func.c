/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130338
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [i_0] &= ((/* implicit */unsigned char) arr_3 [i_0]);
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_6)), ((-(var_1))))) / (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_0])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))))))))));
            }
        } 
    } 
    var_16 = (_Bool)1;
    var_17 = ((/* implicit */unsigned short) 0);
}
