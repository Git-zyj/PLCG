/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155568
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
                var_20 = (min(var_20, ((((((((!(arr_4 [i_1])))) != ((min(18872, var_19))))) ? (((~((~(arr_5 [i_0])))))) : (((arr_1 [i_0]) ? (arr_1 [i_1]) : 41029)))))));

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_21 = (((((arr_2 [i_2 - 1] [i_2 - 1] [i_2]) && var_8)) ? (arr_2 [i_2 + 2] [i_2 + 1] [i_2]) : (18872 >= -102)));
                    arr_8 [i_0] [10] [i_0] = var_8;
                }
                arr_9 [1] [1] = ((-(-23 || 1)));
                arr_10 [i_0] = ((-(~33)));
                var_22 *= (((arr_4 [i_0]) ? ((((arr_6 [i_0] [i_0]) && (-5943754084806278293 || 24484)))) : (!182)));
            }
        }
    }
    var_23 = ((((((17 && 41024) ? 7750489790425444490 : ((13179 ? var_11 : var_6))))) || (!32767)));
    var_24 = -var_4;
    #pragma endscop
}
