/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126972
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
    var_14 = var_8;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = arr_0 [i_0];
                arr_4 [i_1] = ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_2 [i_0] [13LL]) : (var_12));
                var_16 = ((long long int) -9206217274137990542LL);
                var_17 = max(((-(arr_2 [i_1] [i_1]))), (arr_0 [i_0]));
            }
        } 
    } 
}
