/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 ^= (min(2143289344, var_2));
                    var_15 = (arr_0 [i_1]);
                    arr_7 [i_2] [i_1] [i_0] = ((((((arr_6 [8] [i_1] [i_1 - 2]) ? var_1 : (arr_0 [i_0 - 1]))) <= ((~(arr_4 [i_0]))))) ? 3 : (arr_4 [i_0 + 1]));
                }
            }
        }
    }
    var_16 = ((((((var_5 | var_7) ? var_12 : ((-22933 ? var_9 : 3))))) ? var_7 : ((((((var_12 ? 2631129712534801929 : var_3))) ? var_4 : var_1)))));

    /* vectorizable */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_17 *= -2151677936;
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        var_18 = (arr_10 [i_3]);
                        var_19 *= (!1);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_26 [i_3 + 1] [i_7] [i_3] [17] [i_3 - 1] [i_7 - 1] = 1379913389;
                        arr_27 [i_3] [11] [11] [i_3] = ((!(~var_12)));
                        arr_28 [i_9] [i_3] [i_3] = -18964;
                    }
                }
            }
        }
        var_20 = (!var_6);
    }
    var_21 = (((((28290 << (var_4 - 24636))) << ((((var_13 ? var_10 : var_12)) - 2193227051)))));
    #pragma endscop
}
