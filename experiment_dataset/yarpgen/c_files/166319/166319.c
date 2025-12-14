/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = ((max((arr_5 [i_0] [i_0] [3] [i_0]), ((~(arr_1 [i_0]))))));
                    arr_7 [i_0] [i_0] = (min(3008966139, 8073));

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        var_13 = (max(var_13, ((((max((arr_8 [i_1] [i_1]), ((var_1 << (var_5 - 12636358962950224297))))) * ((((((arr_4 [15] [15] [7]) || (arr_0 [i_0])))) / ((max(243, 57315))))))))));
                        var_14 = 1640677737;
                        var_15 &= (!1);
                    }
                    arr_12 [14] [i_0] [i_2 - 1] = (min(-534930407, (arr_4 [i_0] [1] [i_2])));
                }
            }
        }
    }
    var_16 &= (max(var_3, ((-(min(10996568538121823999, 1))))));
    var_17 = var_8;
    var_18 = (max(((((18247 << (8192 - 8183))) >> (var_7 - 2280811921052402668))), (15407 / -var_3)));
    #pragma endscop
}
