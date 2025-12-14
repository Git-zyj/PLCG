/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((min((2047 == 1549224231), (var_10 & var_9))), ((((min(var_10, var_6)) > ((min(var_7, var_7))))))));
                arr_6 [i_0] = min((max((max(var_3, var_5)), ((max(var_11, var_0))))), var_8);
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] = (((min((min(var_5, var_4)), (20676 / 6917529027641081856))) & (((((max(var_11, var_10)) != ((max(var_8, var_11)))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 6;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        arr_19 [4] [i_2] [i_4] [i_2] [i_2] [i_2] = (min((max(((min(var_0, var_11))), (var_2 % var_11))), var_6));
                        var_12 = var_10;
                        var_13 = (max(var_13, (min((max((max(var_10, var_2)), (var_1 && var_2))), (((((min(79, 1549224250))) <= (min(var_2, var_3)))))))));
                        var_14 = (((min(var_8, (max(var_2, var_2)))) % var_8));

                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_3] [i_4] [i_2] [i_3] = min((((var_9 / var_0) * (var_5 / var_6))), (max((var_6 / var_0), (var_10 * var_4))));
                            arr_24 [i_2] [i_2] [i_2] = (max(var_10, ((((max(var_7, var_1))) ^ var_4))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (min(var_15, var_2));
    var_16 = (max(var_16, ((min(var_6, var_4)))));
    #pragma endscop
}
