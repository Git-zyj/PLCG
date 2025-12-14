/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_2] = (!10709283755597766077);
                    arr_10 [i_2] [i_2] = var_9;
                }
                var_18 |= (2970024681 ? 1612950276 : 25185);
                arr_11 [3] = (((0 * (min(var_5, (arr_6 [10] [i_1 - 2] [i_1] [i_1 - 1]))))));
            }
        }
    }
    var_19 = (min(var_19, var_6));
    #pragma endscop
}
