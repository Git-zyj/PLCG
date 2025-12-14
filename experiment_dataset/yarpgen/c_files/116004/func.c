/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116004
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (-(((arr_2 [i_1] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
                arr_6 [(unsigned short)18] [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
                var_15 = ((/* implicit */short) (unsigned char)255);
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(arr_3 [i_0] [4U]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_14);
}
