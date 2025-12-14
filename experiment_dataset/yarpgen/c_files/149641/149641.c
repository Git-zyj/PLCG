/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_19);
    var_21 = (23214 <= 42345);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [1] = var_6;
        arr_3 [3] = ((-(arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((-(~var_16)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    arr_14 [0] [i_2] [i_1] = 42321;
                    arr_15 [i_1] [i_1] [i_2] [i_3] = ((var_7 ? (max((arr_6 [i_1 - 1]), ((var_0 ? var_1 : (arr_0 [i_1] [i_1]))))) : 23214));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_19 [18] = 2159230420572934498;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                {
                    arr_26 [i_4] [i_5] [17] [i_5] = ((288230376151711744 ? (arr_18 [i_5 + 3]) : 10958787589040887758));
                    arr_27 [i_4] [i_5] [i_6] [4] = var_6;
                }
            }
        }
    }
    #pragma endscop
}
