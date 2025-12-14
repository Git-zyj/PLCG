/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_12 = ((-29383 ? 17635 : 26282));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            var_13 &= 9090;
                            var_14 += ((-32753 ? (arr_6 [i_0] [i_1] [i_2] [i_4]) : 56445));
                            var_15 = (!(((~(arr_11 [i_1] [i_3] [i_3] [i_1])))));
                            var_16 = ((-2123663344 ? 1 : 47906));
                            arr_14 [0] [i_3] [i_2] [i_3] [i_0] = ((!(arr_6 [3] [i_4] [i_4 + 2] [i_3 - 1])));
                        }
                        var_17 ^= (~-29363);
                        var_18 = (!17339);
                        arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((!(arr_8 [i_3 - 1] [7] [i_3] [i_3] [10] [i_3 + 1])));
                    }
                    var_19 = (((13881 >= 0) > (arr_5 [i_0] [i_1] [i_2])));
                    var_20 = (arr_12 [1] [i_1] [i_1] [i_2] [2]);
                    var_21 = ((!(arr_11 [i_0] [i_0] [i_2] [i_2])));
                }
            }
        }
    }
    var_22 = ((((min((((1 ? 39275 : 21874))), (max(var_10, var_4))))) ? var_3 : (((-1 ^ 17) ? 9091 : var_4))));
    var_23 = (max(var_5, (max((13876 >= 47900), 56471))));
    #pragma endscop
}
