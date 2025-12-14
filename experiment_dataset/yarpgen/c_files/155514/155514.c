/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_2 | ((var_8 | ((var_7 << (((var_0 + 722218544) - 30)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (((((arr_5 [i_0] [i_0] [i_2]) / (arr_3 [i_0] [i_0]))) | ((((arr_3 [i_0] [i_0]) <= 65528)))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = 78;
                    var_11 = (max(-37, ((~(arr_6 [i_1] [i_0] [i_2] [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}
