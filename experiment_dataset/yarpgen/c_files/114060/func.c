/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114060
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
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) arr_0 [i_0 + 2]);
                arr_5 [i_0] [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) ^ (arr_0 [i_1])))) ? (((((/* implicit */_Bool) max((arr_0 [13ULL]), (arr_3 [13] [17])))) ? (arr_2 [i_0 - 1]) : (((unsigned long long int) arr_4 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 1])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (-(var_9)));
}
