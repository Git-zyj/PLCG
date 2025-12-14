/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121061
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_1))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (unsigned char)0)) : (-510245857)));
                var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)77))));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_2 [i_0 - 2] [i_1 + 1] [(unsigned char)21])))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */int) (unsigned char)210)))))) / (((((/* implicit */int) arr_4 [(unsigned char)5])) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)19] [(unsigned char)19])))))))));
                arr_7 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned int) arr_0 [i_0] [(signed char)11]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_4 [i_1])))) : (((((/* implicit */_Bool) var_3)) ? (0U) : (var_10)))))) : (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 4] [i_1 - 1] [i_0 - 4]))) : (0ULL))));
            }
        } 
    } 
}
