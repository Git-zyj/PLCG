/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max((min(var_9, 1)), ((min(var_4, 1))))), ((max((max(var_14, var_5)), ((max(var_7, 1))))))));
    var_17 = (min(((min((min(var_6, 17102)), (min(1, var_12))))), (max((min(1, 2508898021382267187)), (max(var_10, var_14))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_18 = (max(var_18, 2241477080));
            var_19 -= 1;
        }
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = 22;
            arr_8 [i_2] [i_0] = -1;
            arr_9 [i_0 - 2] = 1;
            var_20 = (max(var_20, 8659393591346916402));
        }
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_21 += -104;
                    var_22 = (min(var_22, 0));
                    var_23 = (min(var_23, -931464695));
                    arr_15 [i_3] [i_3] [i_3] = -1;
                }
            }
        }
    }
    #pragma endscop
}
