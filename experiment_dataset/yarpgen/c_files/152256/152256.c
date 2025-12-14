/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 ^= (arr_6 [10] [i_0 - 1] [i_2 + 2]);
                    arr_7 [i_0] [i_1] [i_1] = var_7;
                    var_14 = (((((41906 / var_11) != -1558136382)) ? var_6 : (arr_6 [i_0] [i_1 + 1] [i_2 - 2])));
                }
            }
        }
    }
    var_15 = (min(var_15, (((!((((var_9 && 1558136382) + var_9))))))));
    var_16 = (((!1) && 54551));
    #pragma endscop
}
