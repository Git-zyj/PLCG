/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_12 -= (((min(((49152 ? 9672 : 9656)), var_2)) | ((((9672 ? 9656 : 3270271581))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_13 = (max(var_13, (arr_3 [i_1 + 2] [i_2] [i_2 - 2])));
                        var_14 = 1024695714;
                        var_15 = var_4;
                        var_16 = ((((3270271581 || (arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_0]))) ? var_5 : ((~(arr_0 [1])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 = (max(var_17, (((1024695714 ? (arr_14 [0]) : 3270271569)))));
                        var_18 += ((((((arr_12 [i_0] [i_2 - 2] [i_0] [7] [i_4]) ? 3270271569 : -9673))) || (((1024695717 ? var_3 : 3270271569)))));
                        arr_16 [i_0] [i_0] [1] [i_1] [i_0] [i_1 + 1] = var_5;
                    }
                }
            }
        }
    }
    var_19 ^= var_11;
    var_20 = 9656;
    var_21 = (max((--9665), (((1024695727 || (var_7 / var_9))))));
    var_22 = var_2;
    #pragma endscop
}
