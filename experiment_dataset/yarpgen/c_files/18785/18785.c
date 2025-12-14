/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-var_8 < (max(15373517486574593847, var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((var_2 | (min((((var_1 || (arr_3 [19] [19] [i_0])))), (arr_6 [8] [i_1] [15])))));
                    arr_9 [i_0] [i_2] = (~(((!(!21365)))));
                }
            }
        }
    }
    #pragma endscop
}
