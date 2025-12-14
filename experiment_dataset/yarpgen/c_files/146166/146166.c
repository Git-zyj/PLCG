/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~((-6488845759076734536 ? 6488845759076734533 : -6488845759076734560))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 *= ((!(((~((2688719040 ? 31096 : -6488845759076734530)))))));
                var_14 = ((-(arr_1 [i_0] [i_1])));
                arr_4 [i_0] = (((((((((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [19])))) ? (arr_2 [i_0] [2]) : var_4))) ? (arr_0 [i_1]) : (arr_2 [i_0] [i_0])));
            }
        }
    }
    var_15 = (max(var_15, var_8));
    #pragma endscop
}
