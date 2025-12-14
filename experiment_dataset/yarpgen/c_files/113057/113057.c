/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, 97));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 -= 536870912;
                    var_21 = ((((((arr_4 [i_2 - 1] [i_2] [i_2 + 1]) ? 4294967295 : (arr_8 [i_2 + 3] [i_2] [i_2])))) ? ((((((arr_4 [i_0 + 2] [i_1] [i_2 - 2]) + var_18))) ? 82 : -1)) : ((((11622131065321279308 >= 7512) * (arr_5 [i_0] [i_0]))))));
                    var_22 = (arr_2 [i_0]);
                    arr_10 [i_0 - 2] [i_0] [i_0] [i_0] = ((1 | ((((!243) ? (arr_1 [5]) : (arr_4 [i_2 - 2] [i_0 - 1] [i_2]))))));
                    var_23 = (max(var_23, 45528));
                }
            }
        }
    }
    #pragma endscop
}
