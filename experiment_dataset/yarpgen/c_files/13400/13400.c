/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_3, var_4)) ^ var_7)) >= (((3278181810 ? var_4 : (var_4 || -256))))));
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (max((((arr_3 [i_1 - 2]) % (arr_3 [i_0]))), ((((min(-256, (arr_0 [i_1] [i_3]))) > (((255 | (arr_7 [i_0] [i_2] [i_2])))))))));
                                arr_14 [i_2] = ((!((min((arr_13 [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3]), (arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 3] [i_3 - 1] [i_3 - 3]))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        var_14 = (((arr_0 [i_5 + 1] [i_5 + 1]) < ((min((((259 <= (arr_8 [i_0] [i_1 + 1] [i_0] [i_2])))), (~32745))))));
                        arr_17 [i_0] [i_2] [i_0] = (max(1016785481, 6644023522426339749));
                        var_15 = (max(var_15, (((arr_12 [i_0] [4] [i_2] [i_5 + 2] [10]) + (max((arr_1 [i_5 + 2]), (((arr_2 [i_2]) / (arr_8 [i_0] [i_1 - 3] [i_0] [i_5])))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            {
                var_16 = (min((min(((((arr_0 [i_6] [i_6]) >= (arr_15 [i_7] [i_7 + 3] [i_7] [i_7 + 3])))), ((~(arr_2 [i_6]))))), ((min((arr_7 [i_6] [i_7] [2]), (((!(arr_24 [i_7])))))))));
                var_17 = 2371511206;
                var_18 = 3278181814;
                arr_25 [i_6] [i_6] = (min((((!((max(2377660110, (arr_2 [i_6 - 1]))))))), (((arr_5 [i_6]) - (arr_15 [i_7] [i_6 + 1] [i_7] [i_7])))));
            }
        }
    }
    #pragma endscop
}
