/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (max(var_10, var_9));
                arr_6 [i_0] [i_1] [i_0] = (max((((!(arr_5 [i_0] [i_1] [i_1])))), ((-(arr_5 [i_0] [i_1] [i_0])))));
            }
        }
    }
    var_11 *= var_1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_23 [10] [i_5] [i_4] [i_3] [i_2] = ((((max(145, (arr_7 [i_2])))) ? var_7 : (max(8400, 32767))));
                                var_12 = (min(var_4, (arr_14 [i_2])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_30 [i_2] [i_3] [i_7] [i_2] = (-var_6 * -var_7);
                            var_13 *= ((var_5 ? ((((!(!-42))))) : (max((min(32767, 158)), var_6))));
                            var_14 = (!8400);
                            arr_31 [i_8] [i_2] [i_7] [0] [i_2] = (((arr_8 [i_2]) ? var_0 : ((((arr_17 [i_8] [i_7 - 1] [i_3] [i_2]) && (((var_0 ? (arr_2 [i_2] [1] [i_8]) : (arr_20 [i_8] [i_7] [9] [i_3] [9] [i_2])))))))));
                            var_15 = 18446744073709518862;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
