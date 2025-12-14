/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138845
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
    var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((var_6), (((/* implicit */long long int) (short)-1674))))))) ? (((/* implicit */unsigned long long int) var_5)) : (var_7)));
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) (unsigned short)45219)) ? (((/* implicit */int) (unsigned short)20314)) : (((/* implicit */int) (unsigned char)13)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) (short)-24699);
                var_22 = ((unsigned long long int) arr_3 [i_1]);
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)20312)))))));
                arr_4 [i_0] [(unsigned short)5] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_24 &= ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)9));
    var_25 = ((/* implicit */_Bool) var_9);
}
