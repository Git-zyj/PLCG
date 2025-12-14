/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max(((-(arr_2 [i_0 - 1]))), ((min(-1, (arr_0 [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_1] = (min(((((12 * (arr_0 [i_2]))))), ((-1 ? (arr_9 [i_0] [0] [i_2] [i_3 + 1] [12]) : 1080863910568919040))));
                            arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3 - 1] = (arr_9 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3]);
                        }
                    }
                }
            }
        }
    }
    var_16 = var_13;
    var_17 = var_11;
    var_18 = (!7);

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_18 [i_4] = ((-7 * ((((2147483647 + -4502645177147561276) != -6603)))));
        arr_19 [i_4] = var_10;
        arr_20 [i_4] = (min(((min((arr_16 [i_4] [i_4]), 239))), (max(((var_0 ? 11759235547550543546 : 23393)), -1924118078))));
        arr_21 [i_4] = (6687508526159008049 && var_4);
        arr_22 [i_4] = 1;
    }
    #pragma endscop
}
