/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161268
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 *= arr_0 [(_Bool)1];
                    arr_7 [(unsigned char)14] [1LL] [(short)8] = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) (unsigned char)138)) ? (arr_3 [(_Bool)1] [(_Bool)1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))) > (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_0] [i_0]))) < (3952643279U))) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_0 - 1] [i_2])) : (var_4))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((3952643284U), (((/* implicit */unsigned int) (unsigned char)119))));
}
