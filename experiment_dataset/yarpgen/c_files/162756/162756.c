/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_9;
    var_13 = (!var_7);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                var_14 = (arr_3 [i_2]);

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_15 = 3;
                    arr_8 [i_0] [i_3] [12] [i_3] = ((216 ? (arr_3 [i_2 + 1]) : (-570 + 7139386056168877240)));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_16 &= (((((20 ? 40 : 570))) ? var_7 : -460244861));
                    arr_11 [20] [20] [i_4] [i_2] [i_4] = ((579 ? -16384 : 3733515295));
                }
            }
            arr_12 [16] = (arr_5 [i_0] [i_1]);
        }
        arr_13 [i_0] = ((((!((min(15191084674882703195, 25529))))) ? ((~(max(var_6, var_2)))) : (min((arr_6 [i_0] [i_0] [i_0] [i_0]), (var_9 % 7906114005359289570)))));
    }
    var_17 = 15066726534849206066;
    #pragma endscop
}
