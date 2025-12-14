/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((((min(var_3, (max(83, var_3))))) || ((!((min(1, var_0))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = (((((arr_3 [5] [i_1 - 1] [i_0]) + var_9)) & -106));
                    arr_8 [i_0] [i_0] [i_2] = (((max((((arr_5 [i_2] [i_2] [i_1 - 2] [i_0]) << (-18 + 20))), (min(var_5, 11438539220204786757))))) ? (((arr_2 [i_0]) ^ (((arr_4 [i_0] [i_1 - 3] [i_2]) / 1)))) : var_17);
                    var_20 = ((((((max(var_5, -904878957590349761)) <= ((((!(arr_0 [i_0] [i_0])))))))) << (var_10 - 603090844)));
                }
            }
        }
    }
    #pragma endscop
}
