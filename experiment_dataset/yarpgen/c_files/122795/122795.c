/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (!9098889109990549392);
        var_18 = ((~(arr_0 [i_0])));
        arr_4 [i_0] = -456625654;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 = arr_9 [i_0] [i_1] [6] [i_3];
                        arr_11 [i_3] [i_2] [i_1] [i_0] = (3281017373758056694 & -4044403764407514364);
                    }
                }
            }
        }
        arr_12 [i_0] = -3516639379273413190;
    }
    var_20 = (max(var_20, var_1));
    #pragma endscop
}
