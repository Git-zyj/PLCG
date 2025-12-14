/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = ((163 ? 1 : (max(82, 109741556))));
                var_14 = (max((((-1824935890434070067 ? ((max(var_9, 255))) : ((3520 ? 63 : 1))))), (0 / var_0)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_15 = ((-(arr_0 [i_0])));
                            var_16 = (max((((4 ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : -16733))), (max(-1824935890434070068, 1265931968))));
                            arr_10 [i_0] [i_0] [i_2] [i_3] = -0;
                            var_17 = (min(var_17, var_0));
                        }
                    }
                }
                var_18 += ((((((min(var_9, 63))) >> (62070 - 62048))) <= 17492));
            }
        }
    }
    var_19 = ((1 ? -6118176735294141679 : 1));
    var_20 = var_7;
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_21 += (min((0 > 3465), (((arr_22 [i_4 - 1] [i_4] [i_6] [2] [i_4 - 1]) && (arr_12 [i_4] [i_7])))));
                                var_22 = ((!((((arr_22 [i_4] [i_4 - 1] [i_4] [i_4] [i_4]) ? (arr_22 [i_4] [i_4 - 2] [i_8] [i_8 - 1] [i_8 - 3]) : (arr_22 [i_4] [i_4 + 1] [i_4] [i_8] [i_8 - 3]))))));
                                var_23 = (min((arr_21 [14] [i_5 + 2] [i_6] [i_5 + 2] [i_7] [i_8]), -1886564236));
                                var_24 = ((((((arr_22 [i_8 - 2] [i_8 + 1] [i_8 - 3] [i_8 - 2] [i_8 - 3]) % (arr_12 [i_4 - 1] [i_4 + 1])))) ? ((62070 ? 97 : -var_3)) : ((max(176, 3319)))));
                            }
                        }
                    }
                    arr_25 [1] = (1 && 1);
                    arr_26 [i_4] [i_4] [i_4] [i_6] = (1 & 1);
                    var_25 = max((((!(arr_15 [i_4 - 2] [i_5 + 4])))), (((~63) ? (max(1, -1597254224)) : (175 % var_12))));
                }
            }
        }
    }
    #pragma endscop
}
