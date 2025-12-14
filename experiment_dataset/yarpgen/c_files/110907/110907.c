/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 = ((-(((((min(255, 56))) && (((var_10 ? var_0 : (arr_0 [i_0] [i_0])))))))));
                            var_17 = (max(var_17, (arr_9 [i_0] [i_1] [i_1])));
                            arr_12 [i_0] [i_0] [i_2 + 1] [9] = (min(((var_12 ? (min((arr_4 [i_0] [i_0]), (arr_9 [1] [1] [i_3]))) : var_12)), ((min((arr_7 [i_0]), var_4)))));
                            var_18 = (((((-var_4 / (min(var_12, (arr_4 [i_0] [i_0])))))) ? (arr_5 [i_2] [i_3]) : (!var_9)));
                        }
                    }
                }
                var_19 = (min(var_19, (((-4 ? 23 : -4096)))));

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_0] = ((!(((-46 ? 8917150618544439217 : (min((arr_3 [23]), 9223372036854775802)))))));
                    arr_16 [i_0] [i_1] [i_0] = -4;
                    var_20 = ((!(((((((arr_5 [i_4] [i_0]) ? (arr_8 [i_0] [i_1]) : (arr_6 [i_0] [24] [i_0] [16])))) ? (~var_3) : 0)))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    arr_20 [i_0] [i_0] [2] = 2194741374615152391;
                    var_21 = (arr_5 [i_0] [10]);
                }

                /* vectorizable */
                for (int i_6 = 3; i_6 < 24;i_6 += 1)
                {
                    var_22 += ((~(var_10 & 17147639283668484103)));
                    var_23 = var_3;
                    var_24 = (arr_0 [i_0] [i_0]);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    arr_29 [i_0] [i_0] [i_1] [22] = (((var_15 % 232) ? var_7 : 17424591465351393317));
                    var_25 -= (((((var_15 >> (((arr_10 [i_1] [i_1] [i_1] [i_0]) - 11260541954425443488))))) ? var_4 : var_12));
                    var_26 &= (arr_22 [i_0] [i_0]);
                }
                var_27 = var_3;
            }
        }
    }
    var_28 = var_11;
    #pragma endscop
}
