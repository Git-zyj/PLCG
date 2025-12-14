/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181136
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [(unsigned char)6] [i_1] [7] = ((/* implicit */short) var_13);
                var_15 -= ((/* implicit */long long int) (short)31972);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31973)) ? (((/* implicit */int) (short)-31972)) : (((/* implicit */int) (short)-3699))))) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_3)))))) : (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((var_11) / (((/* implicit */int) (unsigned short)57344)))))))));
    var_17 = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */long long int) min(((-(var_11))), (((/* implicit */int) (short)3686))))) : (((long long int) (short)3686))));
}
