/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 14183043664532913172));
    var_18 = ((((min(0, 22287))) && (var_8 && var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (min((arr_5 [20] [0] [i_2]), ((min((arr_4 [19] [i_1 - 1] [i_0]), 1)))));
                    var_20 = (min((min((arr_2 [i_1 + 2] [i_1 + 1]), (arr_2 [i_1 - 1] [i_1 + 2]))), (min(20496, (arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                arr_13 [i_4] = 1;
                arr_14 [i_4] = (43260 ^ -1);
                var_21 = (!-6405);
            }
        }
    }
    #pragma endscop
}
