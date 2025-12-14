/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_10 = (max(var_10, -19895));
        var_11 = (max(var_11, -2147483645));
        arr_2 [i_0] = var_7;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_12 = var_1;
        arr_6 [i_1] [i_1] = 9187343239835811840;
        var_13 = ((2589672026 >> ((((10650970177654805524 >> ((((113 ? -7047 : -19895)) + 7090)))) - 1210848))));
    }
    var_14 = ((var_0 ? ((19894 ? 12582912 : 3975058031)) : 19919));
    var_15 = (min((max(17959, (max(var_6, var_4)))), (((2045372291 - ((var_5 ? 16383 : 960)))))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_16 [10] |= (min(420660217, 16383));
                    arr_17 [i_2] [i_2] [i_2] = -19888;
                    arr_18 [i_2 - 1] [1] [i_2 - 1] = min(((max(((var_8 << (var_7 - 5738711961052829800))), ((max(19883, -19895)))))), 2045372318);
                }
            }
        }
    }
    #pragma endscop
}
