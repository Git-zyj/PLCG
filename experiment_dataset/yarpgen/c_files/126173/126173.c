/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_10 = ((var_2 ? ((min(((var_7 >> (var_9 - 660))), 3051382131))) : ((-1964153682 ? var_7 : 4))));
                        var_11 = (min((arr_5 [i_1] [i_1] [i_3]), (!-8712442818570348010)));
                        var_12 = var_5;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_0] |= (((arr_8 [i_4] [i_1]) ? ((((var_3 >= (arr_7 [i_0] [i_1] [i_2] [i_4]))) ? ((((!(arr_8 [i_4] [i_4]))))) : (min(18446744073709551612, 0)))) : (((((var_1 ? var_6 : var_2))) ? (min(var_2, -20694)) : var_7))));
                                var_13 = (min((((!(arr_0 [i_2 + 1])))), (((arr_2 [i_4 + 2]) ? 48606 : 3592507979))));
                            }
                        }
                    }
                }
                arr_20 [i_0] [i_0] [i_1] = (arr_0 [i_0]);
                arr_21 [i_1] = ((~((~(min(var_1, 3294500720))))));
                var_14 = ((-29 | ((var_5 ? (!var_9) : var_7))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                arr_27 [i_6] [i_7] [i_7] = 3;
                arr_28 [i_7] [i_7] = (min(17072, -72));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {
                        {

                            for (int i_10 = 0; i_10 < 11;i_10 += 1)
                            {
                                arr_36 [i_6] [i_7] [i_8] [i_7] [i_7] = (min((((((-8712442818570347991 ? var_7 : var_3))) ? 66 : (min(0, (arr_35 [i_6] [i_6] [i_7] [i_6] [i_6]))))), (!-20694)));
                                arr_37 [i_6] [i_7] [i_8] [i_9] [i_10] [i_7] [i_9 + 1] = (min((((((min(7460174029582357898, 66))) || 702459315))), (min(var_6, 17145))));
                            }
                            arr_38 [i_7] [i_8] [i_6] [i_7] = (!var_5);
                            arr_39 [i_6] [i_7] [i_8] [i_7] [i_7] = ((-3 ? 2246791354202117574 : (-2147483647 - 1)));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((-1636 ? ((18446744073709551586 ? ((702459297 ? 8347717868849956230 : 3592507979)) : ((min(var_3, var_9))))) : ((min(var_7, ((min(1, var_1))))))));
    var_16 = (32543 ? 0 : ((((min(32518, 0))) ? 48619 : (min(-32544, 10099026204859595386)))));
    #pragma endscop
}
