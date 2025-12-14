/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 |= (var_6 ? ((var_15 ? var_12 : 1)) : -var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((((var_17 > ((min(65535, (arr_6 [i_0] [1] [i_1] [i_0]))))))));
                    arr_8 [i_1] = 126;
                    arr_9 [i_1] = (i_1 % 2 == zero) ? ((((((((arr_2 [i_1 - 1]) + 2147483647)) >> (((arr_2 [i_1 - 1]) + 1204919536)))) >> (((((arr_6 [i_1] [i_1 - 1] [0] [i_1]) ? 5455 : -8309133856550108164)) - 5444))))) : ((((((((arr_2 [i_1 - 1]) + 2147483647)) >> (((arr_2 [i_1 - 1]) + 1204919536)))) >> (((((((arr_6 [i_1] [i_1 - 1] [0] [i_1]) ? 5455 : -8309133856550108164)) - 5444)) + 8309133856550113608)))));
                }
            }
        }
    }
    #pragma endscop
}
