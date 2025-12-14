/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -205;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 -= ((!((max((-2147483647 - 1), ((var_0 << (((-2509885978043961920 + 2509885978043961921) - 1)))))))));
                    var_16 = ((var_6 ? ((-var_6 ? 1045075997 : (((arr_0 [i_1]) ? var_13 : 697649658)))) : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_17 = max((((-((var_0 ? -50 : -1809068447))))), var_3);

    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_18 = (max(var_18, var_3));
            var_19 = 31744;
        }
        arr_11 [i_3] [i_3] = ((7680 ? (-32767 - 1) : 22437));
        var_20 = (min(var_20, ((max(513255795, ((10310164120127645906 << (2147483647 - 2147483625))))))));
    }
    var_21 = (min(var_21, 549688705024));
    #pragma endscop
}
