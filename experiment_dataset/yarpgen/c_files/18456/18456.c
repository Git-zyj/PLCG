/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_10 = (arr_5 [i_0] [i_1] [i_2]);
                        var_11 = (max(var_11, (arr_5 [1] [i_1 + 3] [2])));
                        var_12 = 75;
                    }
                    var_13 = ((((-15977 == (123 | 540331575))) ? -108 : (max(((-32742 ? 11925742454175442740 : 27844)), (arr_2 [i_0] [i_1])))));
                    arr_11 [i_0] = (min(234, -13));
                }
            }
        }
    }
    var_14 = var_8;
    #pragma endscop
}
