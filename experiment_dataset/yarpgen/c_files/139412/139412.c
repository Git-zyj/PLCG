/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max((max(-127, var_12)), var_2)))));
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = var_6;
                    arr_7 [i_0 - 2] [i_0 - 2] [i_1] = (max(-25963, 127));
                    arr_8 [i_1] [i_1] [i_2] = (((((-((184 << (var_7 - 1296555182985243998)))))) ? ((max((max((arr_1 [i_0]), var_10)), 160))) : (145 != 37520)));
                    var_19 = 0;
                }
            }
        }
    }
    var_20 = var_3;
    var_21 = var_5;
    #pragma endscop
}
