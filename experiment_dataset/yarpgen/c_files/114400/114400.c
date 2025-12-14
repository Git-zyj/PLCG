/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (0 * -7425166965106485889);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] = (--4321926886587163836);
                var_14 ^= (min(var_3, ((max(var_2, var_2)))));
            }
        }
    }
    var_15 = (min(var_15, var_8));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                {
                    var_16 = ((-9244 ? ((40968 ? -3036505969570921616 : 1)) : 51));
                    arr_15 [i_3] = ((!(!var_5)));
                }
            }
        }
    }
    #pragma endscop
}
