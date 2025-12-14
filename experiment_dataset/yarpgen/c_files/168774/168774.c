/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -4424247406519311947;
    var_21 += (((var_10 != (var_8 == var_6))));
    var_22 = (max(var_6, (((2479987838 != 252) || (~58599)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_23 &= var_13;
                        var_24 += ((var_11 ? var_0 : 1));
                        arr_9 [i_0] [i_1 + 1] [i_1 + 1] [i_3] = var_3;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_25 = ((~(!6)));
                        var_26 *= ((65535 ? var_11 : (!6921)));
                    }
                }
            }
        }
        arr_20 [9] [i_0] = (!(((var_8 ? 105 : 96))));
    }
    #pragma endscop
}
