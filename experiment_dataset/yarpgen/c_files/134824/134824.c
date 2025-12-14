/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(var_11, var_12)));
    var_16 = (max(var_16, -var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1 - 4] [i_0] [i_3 + 1] [i_0] [i_3 + 2] = ((-(((arr_11 [i_0] [i_3 + 1] [i_0] [i_3]) / (arr_11 [i_0] [i_3 - 1] [i_2] [i_2])))));
                        var_17 = (arr_3 [i_0]);
                        arr_13 [i_0] [i_2] [i_1] [i_0] = 41626;
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_18 = (((max(((35184372088831 ? var_9 : 27586)), var_11)) * 8411));
                        var_19 = var_13;
                    }
                }
            }
        }
        var_20 = (max(var_20, (((-(arr_7 [i_0] [0] [7]))))));
        var_21 |= (((((428029265 ? 27586 : (arr_1 [i_0])))) ? ((max(6206, -6198))) : var_9));
    }
    #pragma endscop
}
