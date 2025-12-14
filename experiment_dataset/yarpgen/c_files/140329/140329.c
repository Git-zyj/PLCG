/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-var_9 ? ((var_6 ? ((var_8 ? var_5 : var_1)) : (((-7313 + 2147483647) >> (1061303678 - 1061303650))))) : (+-1061303679)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = (arr_3 [i_0] [i_0]);
                    arr_9 [i_2] [i_1] [i_1 + 1] [i_2] = (((24212 + var_7) ? (arr_5 [i_0] [i_1 - 3] [i_2]) : 1061303678));
                    var_12 = (max(var_12, (((var_3 ? ((2147483647 << (var_6 - 25939))) : (arr_6 [i_1 - 3] [i_1] [17] [17]))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = (-32767 - 1);
                }
            }
        }
    }
    var_13 *= var_5;
    #pragma endscop
}
