/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [12] [i_0] [i_1] = ((min(-32485, 32466)));
                var_12 = (max((max(((-32762 ? -32466 : 32507)), (((var_1 > (arr_0 [i_0] [i_1])))))), (((!(arr_4 [i_1 + 1] [i_1 + 1]))))));
                var_13 = (236 ? 1 : -260);
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [10] = (((arr_4 [i_0] [i_3 + 1]) <= ((-(max(57008, (arr_11 [i_0] [i_0] [i_0] [1] [i_0] [i_0])))))));
                            var_14 = (max(var_14, ((((((-var_3 > (arr_6 [i_2] [i_1] [i_1 + 1] [i_2])))) & (494718020 == 8518))))));
                        }
                    }
                }
                var_15 = (((-(arr_1 [i_0]))) * (arr_11 [i_1 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]));
            }
        }
    }
    var_16 = var_6;
    var_17 = var_2;
    var_18 = ((((((31299 ? var_8 : var_1)) == ((var_4 ? var_10 : var_9)))) ? var_7 : (((var_8 / var_0) ? 32754 : var_11))));
    var_19 = (((max(var_3, ((max(var_0, 1)))))) ? (((max(var_1, var_3)))) : (((var_10 * 267) / ((var_11 ? 236 : 611893650)))));
    #pragma endscop
}
