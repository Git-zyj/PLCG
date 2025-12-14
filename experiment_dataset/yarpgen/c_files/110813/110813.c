/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1 + 3] = ((!((max(((min(65535, 65535))), -65535)))));
                arr_5 [i_0] = max((((arr_0 [i_0] [i_0]) & ((min(1, 23))))), (~3415007474));
                arr_6 [i_0] [i_1 + 3] [i_0] = (((var_2 <= -6204890532274936731) ? (min(2147483647, -1762833860)) : ((((arr_2 [i_0] [i_0]) && (((-113 ? (arr_0 [i_0] [i_1]) : (arr_1 [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
