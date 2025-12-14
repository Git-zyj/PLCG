/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133584
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
    var_10 = ((/* implicit */long long int) ((unsigned short) var_6));
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) var_8))));
    var_12 |= ((((/* implicit */_Bool) ((((unsigned int) (unsigned char)255)) | (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))))) && (((/* implicit */_Bool) var_7)));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_4 [i_0] [i_0]))));
                var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 12468305156568903540ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
            }
        } 
    } 
}
