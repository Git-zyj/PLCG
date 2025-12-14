/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 = 8192;
                        var_15 |= (((((0 ? (arr_2 [i_0 + 2]) : var_8))) ? (arr_5 [2]) : (arr_8 [i_3 + 2] [i_3] [i_3] [i_3 + 1])));
                        var_16 = 31;
                        arr_14 [i_1 - 1] [i_0] [i_1 - 1] = (max(((min((arr_0 [i_0 - 2]), (arr_0 [i_0 + 3])))), ((((max(2, 40647))) ? (arr_1 [i_0 + 3]) : (arr_0 [i_0 + 3])))));
                        var_17 ^= (min(((min(((min((arr_3 [4]), var_6))), ((~(arr_9 [4])))))), 7217068358736075308));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    var_18 = (max(var_18, 232));
                    arr_20 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                }
            }
        }
    }
    var_19 = (~var_7);
    var_20 = (max((((((var_6 ? 40671 : var_9))) ? (~var_5) : ((-117 ? var_3 : var_12)))), var_5));
    var_21 |= (max((((!(!var_2)))), var_6));
    #pragma endscop
}
