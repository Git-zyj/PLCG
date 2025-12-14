/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116756
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
    var_12 = ((/* implicit */_Bool) ((((((/* implicit */long long int) (-(2U)))) - (((((/* implicit */_Bool) (unsigned short)7680)) ? (8554843585014611152LL) : (((/* implicit */long long int) ((/* implicit */int) (short)23172))))))) + (((((var_11) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (((/* implicit */long long int) var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */unsigned short) arr_0 [(short)7] [i_1]);
                arr_5 [i_0] [(_Bool)1] [12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) (short)12985)))) : ((~(((/* implicit */int) arr_3 [i_0] [i_1]))))));
                arr_6 [i_0] [(signed char)2] [(signed char)2] = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)121))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_0);
}
