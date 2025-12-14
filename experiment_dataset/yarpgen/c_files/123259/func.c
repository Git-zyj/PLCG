/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123259
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
    var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) var_8))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((+(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137)))))));
    var_11 = ((/* implicit */unsigned int) 15565301553867621174ULL);
    var_12 |= ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_7), (((/* implicit */long long int) (!(var_3))))));
                var_14 ^= ((/* implicit */unsigned long long int) arr_2 [(unsigned short)1]);
                var_15 = ((/* implicit */unsigned long long int) var_2);
            }
        } 
    } 
}
