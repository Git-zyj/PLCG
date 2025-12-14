/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (arr_1 [i_0]);
        arr_3 [1] [1] = var_0;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_13 = (min(var_13, ((((arr_1 [4]) ? (arr_1 [i_1]) : ((var_10 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1]))))))));
        arr_6 [i_1] [i_1] = 44;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_14 = 1;
                        var_15 = ((((min(1202878529, var_6))) ? 1335999724 : (min(44, (20245 + -16)))));
                        arr_16 [i_1] [i_2] [i_3] [i_4] = ((((-28631 % (min(-1686822621, 3336106212)))) * (((12148 ? (arr_13 [i_4] [i_3 - 1] [i_3 - 1] [i_4]) : (arr_13 [i_1] [i_3 - 1] [i_3] [i_4]))))));
                    }
                }
            }
        }
    }
    var_16 += (!62311);
    #pragma endscop
}
