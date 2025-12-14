/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(((999520113621707706 ? var_12 : -8816)), (~var_6)));
        arr_4 [i_0] = (min((max((arr_1 [i_0 - 1]), (-9223372036854775795 & 16))), (((arr_2 [i_0 + 4]) ? var_12 : 31))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            {
                var_14 = (min(18446744073709551606, 8));
                var_15 = max((((9 ? var_4 : 661206766454956876))), ((max((arr_8 [i_1] [i_2 - 2] [i_2]), -102))));
                arr_9 [i_1] [i_1] [i_2 + 1] = ((~((1 ? 264241152 : 3718434711))));
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
