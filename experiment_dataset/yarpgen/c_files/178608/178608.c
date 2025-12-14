/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (~var_7)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (68719345664 << (25165824 - 25165815));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_2] [i_2] = ((~(arr_6 [14] [i_1])));
                        arr_12 [i_2] = (i_2 % 2 == 0) ? ((((min(3596979079, 68719345664)) << (((((((min(var_5, var_0)) & (arr_9 [i_2 - 1] [i_1] [i_2 - 1] [i_2]))) + 2074068029)) - 32))))) : ((((min(3596979079, 68719345664)) << (((((((((min(var_5, var_0)) & (arr_9 [i_2 - 1] [i_1] [i_2 - 1] [i_2]))) + 2074068029)) - 32)) - 2143803237)))));
                    }
                }
            }
        }
        var_11 = 3596979079;
    }
    var_12 = (!var_3);
    #pragma endscop
}
