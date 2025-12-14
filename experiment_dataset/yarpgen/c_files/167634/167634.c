/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max(((var_10 + ((min(2984668023, -1779800937))))), (min(((min(645951824, var_0))), (max(617878076, var_13)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_21 ^= (min((((arr_6 [i_0]) ? 2693047168301500570 : 7826)), 0));
                var_22 = (arr_5 [1] [i_0] [i_1]);
                var_23 = arr_5 [i_0] [7] [i_0];

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_24 = 13090179353615664542;
                    var_25 = 7971342264098190841;
                    var_26 = 2693047168301500564;
                    var_27 = ((2693047168301500570 ? (arr_5 [i_1] [19] [i_2 + 1]) : 15753696905408051046));
                    var_28 = (arr_0 [i_0] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
