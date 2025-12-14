/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(max((var_5 & 32053), -var_6))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0 - 1] [i_0 + 2]) ^ 32075));
        var_13 = (((arr_2 [i_0] [i_0 - 1]) * (arr_0 [i_0 + 2] [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = (((((arr_0 [21] [i_3]) ? var_10 : 511)) >= var_0));
                        var_15 = ((65534 ? 2067463591 : 2067463591));
                    }
                }
            }
        }
        arr_13 [i_0 + 2] [i_0] = (33489 ^ -76);
        arr_14 [i_0] = -1;
    }
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        var_16 += (max(((~(arr_16 [i_4 - 2]))), (!2067463591)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_17 = (((-var_8 / 1) / 76));
                    var_18 = (min((--14552355218436256258), (((((max(1, 8545499598264932623))) || var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
