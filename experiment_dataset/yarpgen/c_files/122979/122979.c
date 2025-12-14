/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = 125829120;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [11] = (((((var_5 ? (arr_1 [i_0]) : var_0))) ? ((((var_11 ? 127 : -2754324609959466745)))) : ((((1 ? (arr_3 [i_0] [i_1]) : 1925756980))))));
                var_16 = -4203009799123853556;
            }
        }
    }

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_7 [i_2] = ((((102 ? 40 : (arr_6 [5] [5])))));
        arr_8 [12] = (((arr_5 [i_2]) ? var_5 : 1925756980));
    }
    var_17 ^= (((((1925756975 ? 0 : var_1))) ? 184 : 4294967295));
    #pragma endscop
}
