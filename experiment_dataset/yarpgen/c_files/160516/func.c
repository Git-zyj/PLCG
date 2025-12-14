/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160516
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
    var_13 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_10);
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_3 [i_1] [i_0]), (arr_3 [i_1] [i_0])))) | (((/* implicit */int) max((arr_3 [i_0] [i_1]), (arr_3 [i_0] [i_1]))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1])) | (((/* implicit */int) arr_1 [i_0]))));
            }
        } 
    } 
    var_15 = var_11;
}
