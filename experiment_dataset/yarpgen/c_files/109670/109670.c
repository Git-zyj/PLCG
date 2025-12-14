/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 2093056;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (max(((2093056 ? (arr_6 [i_1 + 2] [i_1 + 3]) : 0)), ((((!871441680) && (var_6 && var_13))))));
                arr_8 [i_0] = ((((max(2354009926, 18446744073709551615))) ? -20571 : (((0 + 76) ? -var_4 : 2093043))));
            }
        }
    }
    var_17 = 53341;

    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_11 [i_2] = ((((arr_6 [i_2 - 1] [i_2]) | (arr_6 [i_2 + 1] [i_2]))) * (((var_2 >= ((4292874238 ? 16774 : -16816))))));
        arr_12 [i_2] = (((((arr_2 [i_2 + 1]) / (arr_3 [i_2 - 1]))) < (2147483647 >= 1975017744)));
    }
    var_18 = (min(var_18, 173));
    #pragma endscop
}
