/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_5));
    var_13 = (max(var_13, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_9 [i_0] = (((((-(arr_8 [i_0] [i_1] [i_2] [i_1] [i_3])))) && 12762942047400878515));
                        var_14 = (var_2 * 8087839986227088818);
                        arr_10 [i_3] [i_0] [i_1] [i_3] = ((max(((var_4 << (var_9 - 3810093208712681845))), 30699)));
                        var_15 = -var_1;
                        var_16 = (arr_3 [i_2 + 2] [i_2 + 2] [i_2 + 2]);
                    }
                    var_17 &= (38 * var_3);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max(2, ((0 ? 18446744073709551613 : (arr_0 [10]))))))));
                                var_19 &= 22;
                                var_20 = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_21 = var_4;
                                arr_21 [i_0] = (((25065 ? 1006632960 : 234096223)));
                                var_22 |= (arr_7 [i_2]);
                                var_23 += 35;
                            }
                        }
                    }
                }
                var_24 = (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) && ((min(var_4, ((-2975498641236345892 ? (arr_11 [i_0] [i_0] [i_1] [3] [i_0]) : var_6)))))));
            }
        }
    }
    #pragma endscop
}
