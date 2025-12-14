/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = (((((-9223372036854775807 - 1) < 0)) ? ((~(arr_0 [i_0]))) : ((var_7 ? (arr_3 [i_1 + 2] [i_2] [i_2 - 2]) : -1))));
                    var_11 &= (((((var_10 <= ((var_5 ? (arr_5 [i_0] [9] [i_0] [i_0]) : 18446744073709551607))))) > var_4));
                    var_12 &= (16034350243081302567 & 7);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, ((((((var_1 ? ((var_3 >> (15628343567812926704 - 15628343567812926693))) : (arr_3 [i_4 + 1] [i_2 + 2] [i_1 + 2])))) ? var_2 : ((-1 * (((arr_13 [i_0] [i_1] [i_1] [i_3] [i_4]) / 391248281432931598)))))))));
                                arr_14 [i_1] [i_0] [i_2] [i_3] [i_4] [i_3] = ((-var_9 && ((min(18446744073709551615, (arr_9 [i_2 - 3] [i_1 + 1]))))));
                                var_14 = ((-var_10 / ((var_10 * (arr_13 [i_1 - 1] [i_2 + 1] [i_4 - 1] [i_4 + 1] [i_4 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = ((var_6 << ((((var_7 ? (~var_2) : (min(var_1, var_10)))) - 20956))));
    var_16 = var_10;
    #pragma endscop
}
