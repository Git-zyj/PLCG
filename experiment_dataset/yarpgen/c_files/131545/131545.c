/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = (!-1);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                var_12 = ((((((arr_0 [i_0]) ? 14 : 3))) ? (arr_8 [i_2 - 2] [i_2 - 3] [i_1] [i_0]) : 65525));
                var_13 = (!(arr_8 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2]));
            }
            /* vectorizable */
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                var_14 |= (arr_8 [i_3] [i_3 + 2] [i_3] [7]);
                arr_11 [i_1] [i_1] [i_1] [i_1] = (arr_8 [i_0] [i_0] [i_3] [i_3 + 1]);
                arr_12 [i_0] [0] [i_1] = 3;
                arr_13 [i_0] [5] [i_3] [i_1] = (!var_8);
                arr_14 [i_0] [i_0] |= (((((arr_7 [i_0] [i_0]) ? 7494163206195367898 : (arr_8 [i_0] [i_1] [i_3 - 3] [i_1])))) ? (!31) : var_3);
            }
            var_15 = ((((arr_2 [i_0] [i_1]) ? (arr_6 [i_1] [i_1]) : var_3)));
            arr_15 [i_1] = ((((min((((var_5 ? 1 : 255))), (min((arr_7 [i_0] [i_1]), var_10))))) ? (max((arr_10 [i_0] [i_1]), (((224 ? 215 : var_9))))) : (~var_7)));
            var_16 = 0;
        }
    }
    var_17 = (min(var_10, var_9));
    #pragma endscop
}
