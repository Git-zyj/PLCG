/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (10347743688453321909 ? 8099000385256229707 : 18038889075117677778);
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = (((arr_6 [i_0] [i_1 + 1] [i_2] [i_3]) ? var_9 : (((arr_1 [i_0 + 1]) ? (arr_6 [i_3] [i_2] [i_1] [8]) : (arr_8 [1] [i_1] [i_2] [i_3])))));
                            var_15 = (8099000385256229707 ? 1 : 10347743688453321908);
                        }
                    }
                }
                arr_10 [12] [i_1] = ((18446744073709551615 ? 3767538435373501205 : (arr_6 [i_0] [i_0] [i_0] [i_1 + 1])));
                var_16 = arr_9 [i_0] [1] [i_1 - 1] [10];
            }
        }
    }
    #pragma endscop
}
