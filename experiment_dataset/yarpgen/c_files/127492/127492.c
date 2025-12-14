/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_13 = (max((max((((15543043217217911242 || (arr_1 [i_2] [i_1])))), -60)), (arr_0 [i_3] [i_3])));
                        var_14 = ((((((arr_5 [i_0] [i_0] [i_0] [i_0]) | (arr_5 [i_2] [i_2] [i_2] [i_2])))) ? (((4294967295 / (((var_2 ? (arr_4 [i_2]) : (arr_5 [i_0] [i_1] [i_0] [i_3]))))))) : (max(2903700856491640361, 18446744073709551592))));
                    }
                }
            }
        }
        var_15 = ((((max(15543043217217911242, (arr_5 [i_0] [i_0] [i_0] [i_0])))) ? ((var_3 << (((arr_1 [i_0] [i_0]) - 49304085)))) : var_2));
        var_16 = ((15543043217217911242 ? ((-3742162728030429133 ? 29 : -3742162728030429133)) : (arr_7 [i_0])));
        arr_9 [i_0] = arr_8 [i_0] [i_0];
    }
    var_17 = (max(var_17, (((9223372036854775806 * (15543043217217911242 != 1))))));
    #pragma endscop
}
