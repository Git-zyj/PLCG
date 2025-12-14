/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137591
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_1)), (arr_5 [i_0] [i_0])));
                var_11 = min((var_3), (((/* implicit */unsigned long long int) var_2)));
                arr_7 [i_1] [(unsigned char)16] [(unsigned char)16] = ((/* implicit */unsigned char) ((long long int) min((arr_6 [i_0] [i_1]), (var_4))));
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (short)-2630))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) -1491439424839630272LL);
    var_14 += ((/* implicit */unsigned long long int) var_1);
}
