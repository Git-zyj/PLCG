/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2 - 1] = (((((arr_4 [i_2 - 1]) > 31)) ? (~var_5) : ((((6 <= var_1) ? var_3 : ((min(6, 1416))))))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_12 = var_10;
                        var_13 = ((((((min((arr_6 [i_0] [i_0] [i_0]), var_6))) ? (max(6725, 1474427310)) : 0)) | ((((((var_7 >> (var_10 - 1338158596058465591)))) ? ((max(var_4, var_8))) : ((min(var_4, var_2))))))));
                        var_14 = (max(-31177, 1869977699978920756));
                        arr_12 [i_0] [i_1] [i_1] [i_0] = var_1;
                    }

                    for (int i_4 = 4; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_15 = (((arr_2 [i_0] [i_0]) ? ((((var_7 ? var_1 : 65516)))) : (min(((31761 + (-9223372036854775807 - 1))), (min(-1869977699978920756, 103))))));
                        var_16 ^= (((arr_14 [i_1 - 1] [i_1 - 1] [i_4] [i_4]) ? (((((max(var_7, var_0)))) - (1869977699978920756 - var_5))) : ((0 ? (min(-2896669992305379051, 16)) : (max((arr_13 [i_0] [i_0] [i_1] [i_1 + 1] [i_2] [i_0]), 65515))))));
                        var_17 ^= var_2;
                        var_18 = -890868497620135540;
                        var_19 = var_9;
                    }
                    for (int i_5 = 4; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_0] = -var_3;
                        arr_18 [i_0] [i_1] [i_5] &= (min(var_9, (((var_0 >= (arr_4 [i_5 - 1]))))));
                        var_20 = (-((~((var_1 ? (arr_6 [i_0] [i_0] [i_0]) : var_8)))));
                        var_21 += (min((max(135, (arr_2 [i_5 - 4] [i_5]))), -101));
                    }
                    var_22 += (((~7897319372960987547) % (arr_11 [i_2 - 1] [i_1] [i_1] [i_1] [i_0] [i_0])));
                }
            }
        }
    }
    var_23 ^= var_9;
    #pragma endscop
}
