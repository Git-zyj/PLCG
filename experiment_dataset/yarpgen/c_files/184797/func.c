/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184797
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
    var_19 = ((/* implicit */long long int) var_0);
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_13)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) - (arr_5 [1] [1]))) < (((/* implicit */long long int) ((/* implicit */int) ((short) (((_Bool)1) ? (149193495) : (var_13))))))));
                arr_7 [i_1] = ((/* implicit */int) 7543406419994181608LL);
            }
        } 
    } 
    var_22 &= ((/* implicit */int) var_7);
}
