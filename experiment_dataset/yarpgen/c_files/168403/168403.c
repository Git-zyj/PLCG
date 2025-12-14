/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -53304914;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [4] [i_1] [10] = -202556960;
                    var_17 = (max(var_17, (((((arr_4 [i_0] [i_1] [i_2]) ? 0 : 11274171065838429759))))));
                    var_18 = (min((arr_5 [i_1] [i_1]), (max((arr_3 [i_0] [i_1]), var_4))));
                }
            }
        }
    }
    var_19 = (max(1, (~var_8)));
    #pragma endscop
}
