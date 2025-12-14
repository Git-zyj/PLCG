/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181597
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
    var_19 += ((/* implicit */_Bool) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (arr_3 [i_0])));
                arr_5 [i_1] [i_1] [10] = ((/* implicit */unsigned char) ((_Bool) ((((arr_0 [i_1]) && (var_17))) ? (((/* implicit */int) min((var_13), (arr_2 [i_1])))) : (((/* implicit */int) arr_0 [i_1])))));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned short) var_7);
}
