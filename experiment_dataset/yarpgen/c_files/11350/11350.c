/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_3, 2147483647));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_14 ^= (min(((max(((-28097 && (arr_0 [i_2]))), (arr_0 [i_1])))), 1538340021));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (~-28101)));
                                var_16 = var_10;
                                var_17 += ((!((max((arr_4 [i_4]), 1)))));
                            }
                        }
                    }
                    var_18 = (max(var_18, ((min(var_0, ((((arr_5 [i_0] [i_1] [i_0] [i_2]) | -17557))))))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_19 = var_2;
                    var_20 *= (max((((arr_8 [i_1] [i_1] [i_1] [i_1] [i_1]) ? -1 : var_2)), (arr_8 [i_0] [i_0] [i_1] [i_1] [i_5])));
                    arr_17 [i_0] [i_1] [9] = ((!(((-(max(891815305, -4525139553260349745)))))));
                    var_21 = ((!((min((arr_6 [i_0] [i_1] [i_1] [i_0]), var_6)))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_21 [i_0] [i_0] [i_0] = max((((min(-12524, 1)))), ((-((max(34986, 0))))));
                    var_22 = (max(((((max(13, 4294967292))) ? (arr_7 [i_0] [22]) : (arr_9 [i_0] [i_0]))), (((((-(arr_19 [i_0]))) <= ((max((arr_6 [i_0] [i_1] [i_1] [i_0]), 22616))))))));
                }
                var_23 = (((max(var_6, -7653482478037673331))));
                var_24 -= (var_7 ? var_8 : -1925676873889098451);
            }
        }
    }
    var_25 = (max((((1356994296 <= 5721856674234138812) ? (!-420399665) : (var_12 ^ 4076376364764261792))), ((((21 && var_2) / ((var_10 ? 14 : 1)))))));
    #pragma endscop
}
