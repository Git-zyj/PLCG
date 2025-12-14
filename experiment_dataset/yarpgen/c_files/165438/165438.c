/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (max(((max(104, var_10))), var_4));
    var_18 = (max(var_18, (max(((((4227858432 != 4227858432) ^ (!18446744069481693183)))), (var_8 & var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [18] [18] [i_1] [i_2] = (((((-72340313 ? ((4262575365861315788 * (arr_0 [i_0 + 2] [i_2]))) : (~9007199254478848)))) ? ((-((var_6 ? 1 : 11743419477643235633)))) : (((arr_3 [i_0 - 2] [i_0 - 2]) ? var_0 : 7989003471027111370))));
                    var_19 = var_2;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_4] [7] = var_13;
                arr_15 [i_3] [i_3] [i_4] = var_2;
            }
        }
    }
    #pragma endscop
}
