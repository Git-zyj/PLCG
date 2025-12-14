/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = (((var_4 || ((min(12, 0))))));
                    var_11 = (max(var_11, (~var_4)));
                }
            }
        }
    }
    var_12 = var_9;
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    var_14 = (-var_6 && (arr_11 [i_3 + 1] [i_3 - 2]));
                    var_15 = (8948 > (8948 * 35));
                }
                for (int i_6 = 2; i_6 < 7;i_6 += 1) /* same iter space */
                {
                    arr_22 [i_4] [10] [8] = (((!255) ? (96 && var_6) : var_8));
                    arr_23 [3] [i_4] [i_6] [i_6 + 1] = var_7;
                    var_16 = var_6;
                }
                for (int i_7 = 2; i_7 < 7;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_30 [i_3] [i_3] [i_3] [i_4] [i_3] = (arr_11 [i_4] [i_4]);
                                var_17 ^= (((min((arr_10 [i_3 - 3]), var_8)) % 88));
                            }
                        }
                    }
                    arr_31 [i_4] = (max(((((min(var_4, var_6))) ? (arr_21 [i_3 - 2] [i_3 - 2]) : var_3)), ((((var_9 ^ 255) || 22)))));
                    var_18 = var_4;
                }
                var_19 = (max(var_19, ((min((max(4379, -24)), ((max(169, 96))))))));
            }
        }
    }
    var_20 = ((!(22 % -14230)));
    #pragma endscop
}
