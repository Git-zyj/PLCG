/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 *= ((3137284265 * (arr_3 [i_0] [i_1])));
                arr_5 [i_0] = arr_2 [7] [i_0] [7];
                var_21 = (min(var_21, (arr_3 [7] [7])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 6;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 7;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_22 = (((max((((-88 ? var_0 : var_10))), var_2)) != ((min((arr_13 [i_2 + 3] [1] [i_2 + 3] [i_2 + 3]), (arr_10 [i_2 + 4] [i_3 + 3]))))));
                    var_23 -= 62105;
                }
            }
        }
    }
    #pragma endscop
}
