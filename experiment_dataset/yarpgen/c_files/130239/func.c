/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130239
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
    var_11 = var_4;
    var_12 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                var_13 = min(((~(arr_1 [i_0 - 2]))), (arr_1 [8LL]));
                var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0 + 1]) == (arr_2 [i_0 - 2]))))) > (max((1237856173U), (((/* implicit */unsigned int) (unsigned char)144))))));
                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_4 [i_0 - 1] [i_1] [i_1 + 2])))));
            }
        } 
    } 
}
