/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1 - 2] [i_1 - 2] [i_0] = (~2564980532872124119);

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 = (max(var_14, (~-6487132093654225546)));
                    var_15 = ((~((~(~-88)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_11 [i_3] [14] [i_0] [i_0] &= (-(arr_6 [i_0] [i_0] [i_0] [i_3]));
                    var_16 &= (arr_10 [i_1 - 3]);
                    arr_12 [i_1] [i_1] [i_0] = (~-91);
                }
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    var_17 = ((~(~116)));
                    arr_16 [i_0] [i_0] [i_0] [i_0] = ((!((!(arr_1 [i_1 - 3])))));
                }
                var_18 -= (+-29646);
            }
        }
    }
    var_19 = var_3;
    var_20 = 0;
    #pragma endscop
}
