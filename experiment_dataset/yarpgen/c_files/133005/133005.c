/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_0] [1] [i_2 - 1] = var_8;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_11 = max(-78, -3270154236410222324);
                                var_12 = ((-(min((-9223372036854775807 - 1), 0))));
                                var_13 = (min(var_13, (arr_4 [8] [i_3])));
                            }
                        }
                    }
                    var_14 = (max((min((arr_10 [i_0] [i_0] [i_2]), var_9)), (~var_0)));
                    arr_15 [i_0] [i_0] [i_1] [i_2 + 1] = ((((var_5 || (arr_0 [i_0])))) >> ((((var_5 * (arr_0 [i_2]))) - 5381)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_15 = (((!(arr_16 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] [i_0]))));
                                arr_22 [i_0] [i_1] [i_1] [i_1] [i_5] [i_1] [i_5] = var_3;
                                var_16 = var_1;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_2;
    var_18 = (((((min(var_6, var_7)) ? var_5 : ((max(var_3, 1))))) ^ var_7));
    #pragma endscop
}
