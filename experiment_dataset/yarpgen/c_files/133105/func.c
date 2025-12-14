/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133105
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_20 += max(((-(min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1])), (0ULL))))), (((/* implicit */unsigned long long int) arr_0 [i_0])));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(((/* implicit */int) var_18)))))));
                var_22 = ((/* implicit */long long int) var_9);
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((15342892832284295171ULL) >> (((((/* implicit */int) (unsigned short)65535)) - (65521))))))));
            }
        } 
    } 
    var_24 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)0)), (-2124185499))))));
}
