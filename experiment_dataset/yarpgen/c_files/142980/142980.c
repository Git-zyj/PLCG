/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((-67108864 ? var_14 : var_13));
    var_16 = (max(var_16, ((min((min(15, 67108861)), ((((!18446744073642442755) ? (~var_0) : var_1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (arr_8 [i_1] [i_2]);
                    arr_10 [9] [i_1] [i_0] [i_0] = ((!((min(18378753846220040800, 67108884)))));
                    var_17 = -3025312692;
                    arr_11 [i_1] = var_4;
                }
            }
        }
    }
    #pragma endscop
}
