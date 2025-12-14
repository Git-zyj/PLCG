/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (((((((0 + var_10) && -var_9)))) | 468295795));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        var_13 = (-(min((min(1537765558, 4294967295)), 4294967295)));
                        var_14 |= ((arr_9 [i_0] [i_0] [i_0] [i_0]) ? (min(3826671525, (((arr_0 [i_0]) * 697630525)))) : (-64 | 4294967276));
                        arr_10 [i_0] [i_0] [9] [i_1] [i_3] = ((((max(55, (arr_3 [i_2] [i_1]))) & (arr_3 [i_1] [i_1]))));
                    }
                    arr_11 [i_0] [19] [i_1] = ((max(((~(arr_9 [i_0] [i_1] [i_2] [i_2]))), (arr_4 [i_2] [i_0] [i_1] [i_0]))) / var_4);
                }
            }
        }
    }
    var_15 = (var_3 | var_10);
    #pragma endscop
}
