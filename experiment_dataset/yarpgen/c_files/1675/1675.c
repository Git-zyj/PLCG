/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_1] = ((~((1 ? 38225 : ((38225 ? 7144 : 96))))));
                    arr_11 [i_1] = (~-1526471164);
                    arr_12 [i_0 - 1] [i_1] [i_1] [i_2] = (arr_1 [i_0 - 1] [1]);
                    var_13 = -96;
                }
            }
        }
    }
    var_14 = ((((~(!54436))) + var_12));
    #pragma endscop
}
