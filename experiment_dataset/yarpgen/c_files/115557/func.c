/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115557
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
    var_18 -= ((/* implicit */unsigned char) var_3);
    var_19 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned long long int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [0U] = ((/* implicit */unsigned char) var_4);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5))))), ((+(var_5)))));
                arr_8 [(unsigned char)9] [i_1] = ((/* implicit */unsigned long long int) var_13);
                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))))))));
            }
        } 
    } 
}
