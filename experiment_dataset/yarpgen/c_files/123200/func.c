/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123200
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = arr_3 [i_0 + 3] [i_1 - 1];
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)160)), (18230202956082370943ULL)))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1])), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) var_12)) : (4907337167839414092ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((10416037009408674166ULL), (((/* implicit */unsigned long long int) 4125352165U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 4125352165U)))) : (4125352157U)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (var_2)));
}
