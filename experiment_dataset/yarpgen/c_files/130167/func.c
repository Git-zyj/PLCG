/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130167
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
    var_19 = ((/* implicit */unsigned char) max((var_19), (((unsigned char) var_16))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))))));
                    arr_7 [7LL] [i_0] [(short)13] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) ((arr_2 [i_0 - 1]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) >> (((max((((/* implicit */unsigned long long int) ((var_11) << (((arr_4 [i_2]) - (1859370507U)))))), (((arr_6 [i_0] [i_0] [i_0] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (9708158948960447231ULL)))));
                }
            } 
        } 
    } 
}
