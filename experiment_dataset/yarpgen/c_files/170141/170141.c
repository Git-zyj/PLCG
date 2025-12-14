/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 8909952786120311705;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = ((((((arr_6 [i_1 + 3] [i_1 + 3] [i_2 + 1] [i_2]) ? (arr_6 [i_1 + 4] [i_1 + 3] [i_2 + 1] [i_2]) : (arr_6 [i_1 - 1] [i_1 + 4] [i_2 - 1] [i_1 + 4])))) <= (((var_6 ^ -9720) ? 462993799423427394 : ((min(var_15, (-32767 - 1))))))));
                    var_19 ^= (max((((arr_5 [i_0] [i_0] [i_0]) ? (var_4 + var_10) : (((arr_4 [i_0] [i_1 - 2]) ? 2192266982688664998 : (arr_4 [i_0] [i_0]))))), ((max(((var_10 >= (arr_4 [i_0] [i_0]))), (2060850270 > var_7))))));
                }
            }
        }
    }
    #pragma endscop
}
