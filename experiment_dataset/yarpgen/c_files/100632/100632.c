/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = ((~(((arr_2 [i_0 + 2] [i_0 - 2]) ? 1 : -126))));
                var_15 = ((max(2181431069507584, -20)));

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_16 = (((-20 ? (!136) : 100)) == (min(-536870912, (arr_3 [i_0 - 1] [i_0]))));
                    var_17 = (((var_12 * 142) - var_1));
                    var_18 = (((((((16383 ? var_10 : var_10))) ^ (min(1, -2181431069507593)))) & ((((arr_3 [i_0 - 1] [i_0]) ? (~255) : 74)))));
                    arr_10 [i_0] [i_0] [i_2] = var_12;
                    var_19 *= (arr_4 [i_0 - 2]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, ((((3104309739402666449 ^ 3651336325) / (arr_2 [i_1] [i_1]))))));
                    arr_14 [i_0] [i_0] [i_0] = ((var_5 ? (arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_9 [i_0 + 2] [i_0 + 1] [i_0 - 3])));
                    arr_15 [i_0] [i_0] [i_0] = ((var_5 || (((var_3 ? var_13 : 90)))));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_21 = (min(-8, (min((!347435228), ((-(arr_18 [i_0] [11] [i_0])))))));
                    var_22 -= ((var_10 ? ((-(arr_19 [i_1]))) : 1));
                    arr_20 [i_0] [1] [4] [i_0] = (((arr_13 [i_0] [i_1] [i_0]) || 12));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_23 = ((~((((arr_7 [i_0 - 3] [i_0 - 3] [i_1] [i_5]) || (arr_4 [i_5]))))));
                    var_24 = ((((max((arr_11 [i_0] [i_0] [i_0 - 2]), (arr_11 [i_0] [i_0] [i_0 - 2])))) ? (max(var_11, 10219623914397803041)) : (((((min(65280, -8776146167171889253))) ? 0 : -17971)))));
                    var_25 = ((((arr_8 [i_0 - 1] [i_0] [i_0 + 2]) < -20)));
                }
                arr_24 [i_0] = (arr_9 [i_1] [i_1] [i_0 + 1]);
            }
        }
    }
    var_26 *= ((~((((min(235, 10847))) ? var_4 : var_0))));
    #pragma endscop
}
