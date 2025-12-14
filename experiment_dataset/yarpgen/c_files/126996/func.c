/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126996
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = (((-(((/* implicit */int) min((var_14), (((/* implicit */unsigned char) arr_1 [i_0] [i_1]))))))) != (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? ((+(((/* implicit */int) arr_5 [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_2] [i_0])))));
                    arr_6 [i_2] [i_2] [i_2] [i_1] = min((min((((/* implicit */long long int) (unsigned short)59281)), (-5774590720645169996LL))), ((+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)4095))) : (-5774590720645169994LL))))));
                    var_18 += ((/* implicit */_Bool) (unsigned char)255);
                    var_19 = ((/* implicit */_Bool) ((signed char) arr_1 [i_0] [i_0]));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_16);
}
