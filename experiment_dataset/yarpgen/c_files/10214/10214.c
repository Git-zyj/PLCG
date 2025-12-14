/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (((min(-1001042122, (arr_0 [i_0 + 1]))) * ((((((var_12 | (arr_2 [i_0 + 1])))) ? (arr_5 [i_0]) : ((((arr_5 [i_0]) == (arr_0 [i_1])))))))));
                var_16 = (min(var_16, ((((!(arr_3 [i_0 - 1])))))));
                var_17 = (max(var_17, (((arr_3 [1]) ? (min((4294967295 && -4125267107212066115), (((arr_0 [i_0 - 1]) >> (((arr_0 [i_0]) - 6072686941797895262)))))) : (arr_1 [i_0 + 1])))));
            }
        }
    }
    var_18 = 81046325;
    #pragma endscop
}
