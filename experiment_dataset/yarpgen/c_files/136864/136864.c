/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(var_3, var_2);

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_18 -= var_2;
        arr_3 [i_0] = 42341;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_14 [i_3 + 1] [i_0 + 2] [i_1] [i_0] [i_0 + 2] [i_0] = var_10;
                        var_19 -= ((((((arr_1 [i_0 + 2] [i_0]) ^ (arr_1 [i_0 - 1] [i_0])))) ? ((max((arr_1 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 + 1] [i_0])))) : ((var_12 ? (arr_1 [i_0 + 2] [i_0]) : (arr_1 [i_0 - 1] [i_0 + 1])))));
                        var_20 = (max(var_20, (((((max(43589, (arr_0 [i_0 - 1])))) ? 4138211571686894316 : 18218347160275560309)))));
                    }
                }
            }
        }
    }
    var_21 = 3859749046338168323;
    #pragma endscop
}
