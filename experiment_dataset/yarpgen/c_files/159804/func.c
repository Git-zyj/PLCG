/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159804
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
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), ((-(4160508299U)))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_1]);
            }
        } 
    } 
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((var_3) >= (var_2)))))))));
}
