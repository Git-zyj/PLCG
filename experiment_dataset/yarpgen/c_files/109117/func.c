/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109117
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
    var_12 ^= var_1;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) var_6);
                arr_7 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383))) : (max((arr_0 [i_0 + 1] [i_0 + 2]), (((/* implicit */unsigned long long int) 1366484447)))));
                var_13 += ((/* implicit */signed char) -4740068360546936722LL);
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) - (((/* implicit */int) ((((/* implicit */int) var_9)) == ((-(-1366484433))))))));
    var_15 = ((/* implicit */unsigned long long int) var_8);
}
