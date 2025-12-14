/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max((~-92), ((var_6 ? var_3 : var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] [i_2] = (((max(15, var_1)) & -1763221676));
                    var_11 = (max(var_11, (((((min(0, 255))) ? ((137438953472 ? -47487268 : (min(18446744073709551615, 57)))) : ((((!((min(var_5, (arr_5 [i_2] [i_1] [i_2])))))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = ((((min((arr_1 [i_4] [i_0]), ((var_6 | (arr_1 [i_3 + 2] [i_4 + 2])))))) ? (min(((-(arr_9 [i_1]))), ((min((arr_5 [i_0] [i_2] [i_2]), -819655816))))) : (max((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (arr_2 [i_0] [1] [i_0 + 1])))));
                                var_13 += ((((min(22999, 1755034588204309212))) ? (min((arr_7 [i_1] [i_1]), (arr_5 [i_0] [i_1] [i_1]))) : ((((arr_10 [i_0 + 1] [i_3]) ? 17776 : ((max(35, 17791))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (~var_9);
    var_15 *= ((-(min(((var_9 ? var_0 : var_8)), var_7))));
    var_16 = (min(var_16, ((((-1356781723 / (var_1 | var_4))) << (var_7 + 2424673836371194834)))));
    #pragma endscop
}
