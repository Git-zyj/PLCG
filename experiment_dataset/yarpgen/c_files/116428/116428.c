/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [1] = (i_1 % 2 == zero) ? (((+((((((arr_0 [i_1]) << (((arr_5 [i_1] [i_1] [i_1]) + 54)))) <= var_3)))))) : (((+((((((arr_0 [i_1]) << (((((arr_5 [i_1] [i_1] [i_1]) + 54)) + 90)))) <= var_3))))));
                    var_17 = (arr_1 [3]);
                    arr_8 [i_1] [10] [i_0 + 1] = 113;
                    var_18 = (min(var_18, 152));
                }
            }
        }
    }
    var_19 = var_10;
    #pragma endscop
}
