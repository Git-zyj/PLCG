/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 -= ((((((arr_2 [i_1 + 1]) ? (arr_2 [i_1 + 1]) : (arr_0 [i_1 - 1])))) ? ((min((6363612161482601549 == 1655751942), (arr_5 [9] [2] [i_2])))) : ((~(arr_0 [i_1])))));
                    var_20 = (max(var_20, (arr_2 [22])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            {
                arr_13 [i_3] [i_3] [i_3] = -32764;
                arr_14 [i_3] [i_3] = (181 | (!32760));
            }
        }
    }
    #pragma endscop
}
