/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_17 = (((0 ? 1 : 235)));
                    var_18 = var_4;
                    var_19 = (min(var_19, (arr_1 [i_0])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, (((((var_5 || (arr_3 [i_0]))) ? -25 : ((((((247 ? 125 : -125))) && ((!(arr_3 [1])))))))))));
                    var_21 &= 0;
                    var_22 = (!(var_1 && var_9));
                    var_23 ^= var_5;
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_24 = (max(var_24, (((arr_5 [i_0]) < (arr_7 [1])))));
                    var_25 = ((((((arr_4 [1]) ? (arr_8 [12] [i_0] [i_1] [0]) : ((var_5 << (908317082 - 908317081)))))) ? (((((arr_5 [17]) + var_0)) >> (((3818174112842304548 / var_9) - 3818174112842304540)))) : var_13));
                    arr_13 [11] [9] [i_4] = (max(26, (max(-248685646, -20714))));
                    var_26 = ((-(-1377402612 >= 6315894894890047788)));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_27 *= (max((((arr_17 [10] [i_7 - 1] [i_7 - 1] [i_7 - 1]) / var_2)), ((max((arr_3 [i_7 - 1]), (arr_3 [i_7 - 1]))))));
                                arr_23 [i_7 - 1] [i_6] [i_6] [7] [i_1] [i_0] [12] = (!-1742049293473837369);
                                arr_24 [i_0] [1] [i_5] [8] [i_7 - 1] |= var_2;
                            }
                        }
                    }
                    var_28 += (((((arr_4 [i_5]) * var_6)) - ((var_14 * (arr_4 [i_0])))));
                }
                var_29 = (!(((arr_5 [i_1]) >= (arr_3 [i_0]))));
            }
        }
    }
    var_30 = 0;
    #pragma endscop
}
