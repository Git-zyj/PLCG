/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119846
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
    for (unsigned long long int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) 0LL)))));
                var_13 = max((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_2))))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1])) >> (((/* implicit */int) var_2)))))))));
                arr_5 [9LL] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_3 [i_0] [i_0 - 4] [i_0]))))) & (-976445617)));
                var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))) : (((/* implicit */int) (unsigned char)254)))) * (((/* implicit */int) ((((((/* implicit */int) var_10)) | (((/* implicit */int) (unsigned char)108)))) > (((/* implicit */int) var_1)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) var_4);
    var_16 = ((/* implicit */unsigned char) (-((+(((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0)))))));
}
