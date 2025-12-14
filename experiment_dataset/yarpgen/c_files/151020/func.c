/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151020
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -237799853073137273LL))));
    var_20 = ((/* implicit */long long int) (short)-8331);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */int) ((short) (-(-1269922745))));
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) 1269922744)))));
                    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_5 [i_0] [i_1]) >= (-3706084596258715658LL))))));
                    arr_7 [i_0] [i_1] [(unsigned short)9] [i_0] = ((/* implicit */_Bool) arr_2 [22U] [i_2]);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_14);
}
