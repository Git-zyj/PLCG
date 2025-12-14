/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((62 >= ((~((var_4 ? var_3 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_11 = ((((((~75) ? (74 >= -64) : ((((arr_1 [i_0]) >= var_6)))))) ? (((((var_1 ? (arr_3 [2]) : (arr_3 [i_2])))) ? (arr_5 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1]) : ((((arr_0 [i_1]) ? (arr_7 [i_0] [i_1] [i_2] [i_0]) : (arr_4 [1])))))) : ((max(2147483620, 47)))));
                            var_12 = ((~(arr_4 [i_3 + 1])));
                        }
                    }
                }
                arr_13 [i_0] [i_1] = ((~(!7)));
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_13 = (max((((!(!200)))), ((+(min((arr_1 [1]), (arr_0 [i_0])))))));
                                arr_24 [i_0] [i_0] [1] [1] [i_4] [i_5] = -9223372036854775790;
                                var_14 = (min(var_14, (((((max(55, 3513434549))) ? ((~(((arr_11 [i_0] [i_0] [i_6]) ? 89 : -9223372036854775765)))) : (((var_9 ? (((arr_3 [i_5]) ? var_4 : -1061639478)) : -15))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_6;
    var_16 = var_1;
    var_17 = (!var_8);
    #pragma endscop
}
