/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = ((min(var_9, -1437416903710829055)));
                arr_6 [i_0] [i_0] = ((-(--1437416903710829059)));
                var_18 = (min(var_18, ((min(((~((var_5 >> (((arr_5 [i_0] [i_0] [i_0]) - 951045655)))))), (((((((arr_5 [i_0] [21] [i_1]) <= var_13))) == ((((arr_4 [i_0] [i_0]) && var_8)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = min((max((arr_8 [i_0] [i_0] [i_0]), (!var_7))), -var_5);
                            var_20 = ((((min(-1437416903710829055, (3 & -122)))) || ((var_15 <= (arr_8 [i_3 - 1] [i_1 + 1] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
