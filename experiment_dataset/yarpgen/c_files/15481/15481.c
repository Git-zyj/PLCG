/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] |= ((((2147483647 ? 14489183351665671127 : ((((1157266690 > (arr_4 [i_0] [i_0] [i_1] [i_2]))))))) & ((((!(arr_3 [i_0])))))));
                    var_18 = -1874480988;
                }
            }
        }
    }
    var_19 = var_4;
    var_20 = (((((((var_14 ? 61581 : 27))) && var_1)) ? -var_12 : (min(-960785876, var_11))));
    #pragma endscop
}
