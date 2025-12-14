/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_2] = ((1094699143 ? (((((1 || 5761801401144786565) || (((2535956904 ? (arr_4 [i_0] [1]) : var_15))))))) : ((((arr_4 [i_2] [0]) >= (arr_5 [i_0] [i_0] [i_2]))))));
                    var_17 = (~(max(var_4, -3265)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_22 [14] [i_4] [i_5 - 1] [i_3] = ((max((64193 + 18446744073709551615), (!5293020119770291719))));
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((0 >= 18446744073709551612) + (((max(1, (arr_16 [i_3] [i_4] [i_3] [i_7] [i_5 - 1] [i_3]))))));
                            }
                        }
                    }
                    var_18 = (!(var_4 * 18446744073709551591));
                }
            }
        }
    }
    var_19 = (((~(min(-5378362615257125991, 7334219658692705815)))));
    var_20 = (~var_10);
    #pragma endscop
}
