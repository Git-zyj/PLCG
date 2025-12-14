/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3525045295916948418;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (!var_6);

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_19 &= (arr_2 [i_0] [i_0]);
            var_20 = (!var_15);
            var_21 ^= ((!((var_11 && (arr_0 [8] [7])))));
            arr_6 [1] [i_1] [i_1] = 101;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_22 = ((var_5 ? (~-101) : (((arr_8 [i_0] [1] [6]) ? (arr_7 [i_2]) : (arr_7 [i_0])))));
                var_23 = (((arr_2 [i_0] [i_2]) ? (arr_1 [i_0]) : -1572655555519805139));
                var_24 = (-9223372036854775807 - 1);
                var_25 = (arr_12 [11] [13] [i_3] [i_3]);
            }
            var_26 = (arr_1 [i_0]);
            var_27 = ((!(arr_3 [i_2])));
        }
        var_28 = (arr_1 [i_0]);
        var_29 -= 1770321690;
    }
    #pragma endscop
}
