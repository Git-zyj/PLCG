/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = -var_5;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 1] [i_0] = (min((((arr_1 [i_1] [i_2]) ? (arr_1 [7] [i_2]) : (arr_1 [i_0 - 3] [i_1 + 2]))), var_7));
                    var_16 = (min(var_5, (min(var_7, 1196096115))));
                    arr_9 [i_0] [i_0 + 1] [i_0 - 3] [i_0 - 3] = ((120 ? (min((arr_0 [i_0]), -25165824)) : ((min((max(1001348538, (arr_2 [i_0] [i_0]))), (min(var_3, 21824)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 8;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_16 [i_4] = (arr_15 [i_3 - 4]);
                var_17 = ((((min((max((arr_10 [i_4] [9]), var_0)), ((min((arr_3 [i_3]), 1)))))) ? var_8 : ((-((34697 ? 12007826087301914869 : 470131737))))));
            }
        }
    }
    #pragma endscop
}
