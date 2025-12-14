/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125908
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */short) (unsigned char)16))))) && (((_Bool) var_11)))))) : (max((var_15), (((/* implicit */unsigned long long int) ((_Bool) (unsigned char)35))))))))));
                arr_6 [8] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) var_16);
                arr_7 [(short)18] [i_0] = ((/* implicit */unsigned char) var_17);
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_12);
}
