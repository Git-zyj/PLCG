/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(var_14 * var_5)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_0] [i_0] = (max((((~(arr_7 [i_2])))), (max((var_5 % 95), ((((arr_6 [i_0] [i_2]) ? var_4 : (arr_6 [i_2] [i_2]))))))));
                    arr_10 [i_2] [i_2] [i_2] = (min(-94, -94));
                }
            }
        }
    }
    #pragma endscop
}
