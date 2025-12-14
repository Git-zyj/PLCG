/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = (~(((((992 ? 2631003602 : 22576))) / (max(948232173478602272, 1663963721)))));
                    arr_8 [i_0] [i_0] [i_2] [i_1] = (max((~-31857), -1663963702));
                    var_17 += (max((((((arr_3 [i_1 - 1] [i_1 - 1]) + 2147483647)) << (32768 - 32768))), 31858));
                }
            }
        }
    }
    var_18 &= (((((31857 / var_11) % (~var_5)))) / -var_12);
    #pragma endscop
}
