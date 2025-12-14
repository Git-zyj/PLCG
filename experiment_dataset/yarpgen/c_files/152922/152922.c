/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_10 -= 17218502421402618480;
                arr_6 [i_0] &= (17218502421402618480 > 0);
                var_11 = var_8;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_2 - 1] [i_3] [i_2 - 1] = ((((min(((10901660764905408250 ? 1 : var_3)), var_7))) ? ((((((max(var_9, var_4))) && 80)))) : (((arr_2 [i_4] [i_2] [i_2]) ? var_9 : 9134906961235612453))));
                    arr_16 [i_4] [i_3] [i_2] [i_2] = (arr_10 [i_3]);
                    arr_17 [i_2] [1] [i_4] = (((arr_3 [i_2] [i_3] [i_3]) ? ((var_9 ? 2394058193962170922 : (arr_8 [i_2 - 1]))) : 1));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                arr_22 [i_5] [i_6] = (max((((!((!(arr_13 [9])))))), (arr_14 [i_5 - 3] [i_5 + 1] [i_5 + 1])));
                var_12 = ((((arr_14 [i_6] [i_6] [i_5]) << (arr_14 [i_5 - 3] [i_5] [i_6]))));

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_13 = (max((max(((((arr_1 [12] [i_7]) ? var_2 : (arr_13 [i_6])))), (max(18446744073709551607, var_2)))), (var_8 || 13165579068449415678)));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_14 = 1228241652306933136;
                                var_15 = (((((3599488990 <= (arr_1 [i_8] [i_9])))) | ((4095 ? var_2 : (arr_7 [i_7])))));
                                arr_31 [i_5] [i_6] [i_7] [i_7] [i_9] = 1;
                                var_16 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((((((((var_0 ? var_9 : 565499884020966362)) + 9223372036854775807)) << (((max(2033312254, var_3)) - 2033312254)))) <= (+-57)));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 24;i_11 += 1)
        {
            {
                var_18 -= ((((var_4 ? 1 : 9223372036854775807)) % (((max((arr_32 [i_10]), (4294967291 > var_3)))))));
                var_19 = (max(var_19, ((((((~(max(-32751, 1883995563))))) ? ((-(((arr_2 [i_10] [i_10] [i_11 - 1]) ? var_1 : 17218502421402618480)))) : ((max((min(var_1, (arr_34 [i_11]))), (max(-1866083297, 11))))))))));
                var_20 = (!33774);
                arr_38 [i_10] [10] [i_11] = (arr_4 [i_10]);
            }
        }
    }
    #pragma endscop
}
