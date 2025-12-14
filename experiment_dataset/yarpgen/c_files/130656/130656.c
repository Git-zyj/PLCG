/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0 + 2] [i_1 - 2] [i_2] = (max((125829120 * 1), (arr_5 [i_1 + 1])));
                    arr_8 [i_0] [i_0] [i_1 + 4] [i_2] = (3027225177 << 1);
                    var_15 = (min((~722062270), (arr_1 [9])));
                    arr_9 [i_0] [i_1 + 3] [i_2] = 1;
                }
            }
        }
    }
    var_16 += (max(var_9, var_13));
    var_17 -= (((~1) != var_8));
    #pragma endscop
}
