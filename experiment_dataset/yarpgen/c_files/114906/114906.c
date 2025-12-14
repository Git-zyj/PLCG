/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = 62;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [18] [i_3] = 111855411;
                        arr_15 [i_3] [3] [19] [i_0] |= ((!4183111870) ? var_2 : (!197));
                        var_21 |= (~(min((arr_4 [i_0] [i_2] [i_3]), (arr_5 [i_0] [i_0]))));
                    }
                    var_22 = (min(-9223372036854775789, -15));
                }
            }
        }
    }
    #pragma endscop
}
