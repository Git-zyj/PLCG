/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = (var_10 + 2925034935);
                    arr_9 [i_0] [i_1] [i_2] = ((max((((-95 && (arr_6 [i_2 + 1] [10] [i_0]))), (min(2925034961, var_10))))));
                    var_11 = ((((((arr_3 [i_1]) + -125))) & var_5));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_15 [i_3] |= max((((3312789690 != (min((arr_12 [i_3] [i_4]), var_2))))), (arr_11 [i_4]));
                var_12 = 1369932334;
            }
        }
    }
    #pragma endscop
}
