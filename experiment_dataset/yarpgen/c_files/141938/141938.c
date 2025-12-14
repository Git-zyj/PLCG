/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = ((((min(-17670, (arr_2 [i_2 + 2] [2])))) <= (((arr_2 [i_2 - 1] [i_2]) ? 0 : var_17))));
                    arr_8 [i_1] [i_1] = (min(114, 15020469118339565777));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [10] [i_2] [2] [i_4] &= (max(((((arr_6 [i_0] [i_0] [i_3] [1]) && ((max(var_2, 114)))))), ((((min(178, -23244))) ? (((var_15 ? var_17 : (arr_11 [i_0])))) : (min(-7239394240810624636, (arr_4 [i_0] [0] [0])))))));
                                arr_18 [0] [i_1] |= (--7239394240810624636);
                            }
                        }
                    }
                    var_22 = (arr_5 [i_2 + 2]);
                }
            }
        }
    }
    #pragma endscop
}
