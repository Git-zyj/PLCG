/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(!var_9)));
    var_11 = (((((min(514, var_0)))) ? (min((var_6 < 31218), (max(var_1, -3200512309204493239)))) : -var_8));
    var_12 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((min(2621892148380320588, ((-31218 ? 20077 : -2621892148380320589)))) >> ((((var_8 + (arr_0 [i_0]))) - 29968))));
        arr_3 [i_0] [i_0] = (((31218 + var_9) >> (var_5 - 1388038350)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 -= (((-514 ? -15887 : 2621892148380320578)));
                                arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] = (max(((~(arr_10 [i_4] [i_4] [i_2 + 2] [i_3 - 1] [11] [21]))), (((~(((arr_8 [i_1] [i_2] [i_3]) ? 15887 : (arr_14 [i_3] [i_3]))))))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_0] [i_0] = (min(533, (arr_12 [i_2 - 2] [i_2 + 1])));
                }
            }
        }
        var_14 = (min(var_14, (((((!(arr_4 [i_0] [i_0] [i_0])))) == ((((((arr_7 [i_0] [i_0] [i_0]) && var_3))) >> (var_9 - 2255552219999564399)))))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        arr_19 [i_5] = var_5;
        arr_20 [i_5] [i_5] = (((((var_3 ? (-515 || -15874) : (arr_17 [i_5])))) ? var_4 : var_2));
        arr_21 [i_5] = ((-((~(arr_17 [i_5])))));
    }
    #pragma endscop
}
