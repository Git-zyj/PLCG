/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106428
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_2 [i_0 + 2]))))), ((~(-7662372876506700374LL)))));
                var_19 = ((/* implicit */int) min((max((7662372876506700380LL), (var_13))), (min((((/* implicit */long long int) min((arr_2 [i_0 + 2]), (((/* implicit */unsigned char) var_1))))), (arr_5 [i_1] [i_1] [i_1 - 3])))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) 7662372876506700393LL);
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_20 = var_13;
}
