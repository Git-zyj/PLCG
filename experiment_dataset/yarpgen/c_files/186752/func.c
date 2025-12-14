/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186752
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) min((((/* implicit */short) var_11)), ((short)-32761))))) ? (((((/* implicit */_Bool) ((var_8) ? (var_3) : (var_3)))) ? (((/* implicit */int) ((short) (short)32765))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) 131071);
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
}
