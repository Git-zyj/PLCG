/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126429
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
    var_10 = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned int) ((480U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30518)))))), (max((var_0), (((/* implicit */unsigned int) var_8)))))));
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2]);
                var_12 = ((/* implicit */short) arr_1 [i_0 - 2]);
                arr_8 [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_4);
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_5))));
}
