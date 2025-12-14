/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 -= (((0 ? -1 : -56)));
                                arr_13 [i_1] [i_2] [i_4] = 220;
                                var_19 -= ((((((((var_8 ? (arr_11 [1] [i_3] [i_2] [1] [i_4]) : (arr_9 [i_0] [i_0] [i_2] [i_3])))) ? 28587 : (28587 != var_14)))) | (((((-10 ? var_2 : var_5))) + (-9223372036854775807 - 1)))));
                                var_20 = (((min(4503599627370495, var_1)) ^ (arr_8 [i_0] [i_0] [i_1] [i_1 + 1] [i_4 - 1])));
                            }
                        }
                    }
                    var_21 = var_13;
                    var_22 += min((min(((((arr_10 [i_0] [8] [i_1] [i_2] [i_2]) / var_6))), ((460411433 ? 15130251766267325414 : 1)))), ((max(((32767 ? 7636 : (-2147483647 - 1))), (237 <= 15872)))));
                }
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
