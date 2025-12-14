/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115880
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
    var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */int) var_10)) << (((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned short) var_19))))));
    var_21 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)50017)) <= (((/* implicit */int) (unsigned short)15503))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((-4233692777374585648LL) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */short) ((((/* implicit */int) (short)-23964)) * (((/* implicit */int) (unsigned short)65535))));
                var_24 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-23973))) > (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50015))) <= (2787557982325744212LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2452))) : (min((-2787557982325744193LL), (-2787557982325744212LL)))))));
                arr_6 [i_0] [i_0] [i_1] = var_10;
            }
        } 
    } 
}
