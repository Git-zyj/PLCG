/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (+-858283252);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = (((((3436684024 ? (arr_0 [i_1]) : var_9)))) ? (arr_4 [i_0] [i_0] [i_1 + 1]) : (((30576 <= (min(2356741268091187484, -5))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_1] [i_2 - 1] [i_3] [i_1] [i_4] = ((-((92 ? ((102 ? (arr_9 [i_1] [i_1 + 1] [i_1]) : 2356741268091187479)) : ((max(var_2, 126)))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((~(((-115 && 21397) ? (((-71 ? var_18 : 113))) : (min(3004867211, 3992821235))))));
                                arr_15 [i_0] [i_0] [i_1 + 2] [i_1 + 3] [i_1] [i_3] [i_4] = (min((((!(arr_10 [i_0] [i_0])))), (((var_16 >= var_18) | 1653461048))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 = ((((!(arr_5 [i_1 + 2] [i_1 - 1] [i_1 - 2]))) ? 2244995089 : -4558867556909663109));
                                var_22 = (((((~((min(var_12, 33781)))))) ? (((61138 << (var_5 - 1740996676)))) : (~1161547663)));
                            }
                        }
                    }
                    arr_21 [i_0] [i_1] = (min((2049972191 % 1325577708), ((~(((arr_0 [i_1 - 2]) ? -4558867556909663082 : 2969389581))))));
                    arr_22 [i_0] [i_1 - 2] [i_2 + 3] [i_1] = ((!(((985244414 ? (arr_3 [i_1] [i_2 - 1] [i_2]) : -4558867556909663103)))));
                }
            }
        }
    }
    var_23 = var_0;
    var_24 = (min((!var_1), var_1));

    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                {
                    var_25 = (arr_28 [i_7] [i_8 + 1] [i_8 + 1] [i_9]);
                    var_26 = (min(((max(181, var_9))), ((var_9 ? (arr_24 [i_7]) : 573658317))));
                }
            }
        }
        var_27 = ((((max(var_18, ((1156367733 - (arr_28 [i_7] [i_7] [i_7] [i_7])))))) ? ((((!var_16) | ((30568 ? var_4 : var_14))))) : ((-(max(673692316, 3818950714))))));
    }
    #pragma endscop
}
