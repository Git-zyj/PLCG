/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123926
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2398609643061137287ULL)) ? (-1536283499) : (1536283508)))))) ? (((((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */int) var_0)))) + (2147483647))) << (((((/* implicit */int) var_0)) - (4275))))) : (((/* implicit */int) var_1)))))));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (max((var_8), (((/* implicit */unsigned int) var_0))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [i_2 + 2] [i_2]);
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (~(17578655727745469649ULL))))));
                }
            } 
        } 
    } 
    var_14 = var_1;
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_1))));
}
