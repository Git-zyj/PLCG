/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = ((((min(129, 11456576803062187768))) << ((-(!1240604110)))));
                        var_14 = (~16777215);
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_15 = (max(var_15, 0));
                        arr_16 [i_2] [i_2] [i_2] [17] [i_2] [i_2] = -1925864084;
                        arr_17 [i_2] = (-2147483647 - 1);
                    }
                    var_16 = ((min(3866879697, 11005780531977967201)));
                    var_17 = (min((((max(1240604110, 3054363186)))), (max(((1 ? 16777215 : 35177)), 1))));
                    var_18 = ((!((((!0) ? 35177 : (508 > 24872))))));
                }
            }
        }
    }
    var_19 = (min(var_19, (min(((max(3551287400852874311, 7936))), ((((42765 ? (-32767 - 1) : 15872))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {

                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_29 [i_9] [i_9] [i_6] [i_9] [i_9] = (min((((~-15720) ? (max(-1506654584093089231, 1)) : ((max(1, 1240604109))))), 18446744073709551615));
                                var_20 |= 1;
                            }
                        }
                    }
                    var_21 += ((((-15872 != (((min(1, 1))))))));
                    var_22 = (min(((max(((511 ? 46096094687387912 : 1)), -1))), 0));
                }
                var_23 += (max((max(1, (max((-9223372036854775807 - 1), -471793219)))), ((min(-1, (~1))))));
                arr_30 [i_6] = (((~((171 ? 511 : 4126640447579566347)))));
            }
        }
    }
    var_24 = ((~((~((69805794224242688 ? (-9223372036854775807 - 1) : 4294967295))))));
    #pragma endscop
}
