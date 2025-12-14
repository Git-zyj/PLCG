/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((+(((((((arr_1 [i_0]) == 0)))) ^ ((-5 % (arr_9 [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_22 = (0 > -9);
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] = (min((min((arr_5 [i_0] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_2]))), ((max((((arr_0 [i_0] [i_1]) < var_0)), ((!(arr_8 [i_0] [i_0] [i_1] [i_1]))))))));
                }
            }
        }
    }
    var_23 = ((((max((max(var_17, 4)), (5 >= -38)))) < ((var_11 ? (~0) : (var_0 + var_3)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_24 = (min(var_24, (arr_19 [i_5] [i_5] [i_5])));
                    var_25 = (arr_19 [i_5] [i_5] [i_5]);
                }
                arr_22 [i_6] = ((var_17 ? (arr_17 [i_5] [i_5]) : (min((arr_21 [i_5] [i_6] [i_6] [i_5]), (arr_20 [i_5] [i_5] [i_6] [i_5])))));
            }
        }
    }
    #pragma endscop
}
