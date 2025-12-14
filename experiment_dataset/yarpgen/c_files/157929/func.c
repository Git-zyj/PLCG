/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157929
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
                var_14 *= (unsigned char)118;
                arr_7 [(unsigned char)5] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [(unsigned char)1]);
                var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)137))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */int) (unsigned char)0)) << (((/* implicit */int) var_11)))) : (((/* implicit */int) var_6)))))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_8))));
}
