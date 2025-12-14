/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((((((var_9 % var_8) != var_7))) > ((-(var_10 ^ var_1)))));
    var_14 = 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_0 - 1] [i_0] [i_2] = (min(((((arr_2 [i_0 + 1] [i_0 + 1]) < (arr_2 [i_2] [i_0 + 1])))), (((arr_6 [i_0]) % (((arr_4 [i_0 + 1] [i_0] [i_0] [i_0 - 1]) ? 955303028 : var_9))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]);
                }
            }
        }
    }
    #pragma endscop
}
