/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= ((((((max((-2147483647 - 1), 1228671060))) ? 1 : (arr_2 [i_0] [0] [i_1]))) ^ 84));
                var_20 = (arr_5 [i_0] [i_0 + 2] [i_0]);
                arr_6 [i_0] = ((100 ? (((min(-1794696691, (arr_3 [i_0]))) ^ 1)) : ((min(79, 17598)))));
                arr_7 [i_0] [1] [i_0] = var_17;
            }
        }
    }
    var_21 = ((!((((var_14 >> (4294967272 - 4294967246))) >= (159 * 0)))));
    #pragma endscop
}
