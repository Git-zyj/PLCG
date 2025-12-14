/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (!-9064708271389950371);
        arr_3 [i_0 - 1] = 53556;
        arr_4 [i_0 + 1] = ((((-((357410508 ? 1 : 357410525)))) << (var_5 - 72)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_2] = (!((max(((var_9 ? (arr_1 [i_0]) : var_14)), (arr_5 [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2] = var_6;
                                arr_16 [i_2] [i_0] [i_0] [i_0] = ((-(((!((min((-2147483647 - 1), 3937556780))))))));
                            }
                        }
                    }
                    arr_17 [i_0 + 2] [i_2] [i_0 + 3] = 8755765854576194627;
                }
            }
        }
        arr_18 [i_0] = 1376131952;
    }
    for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((-1376131952 * (((14600809290090776354 || -1) ? ((((!(arr_0 [i_5 - 1] [i_5]))))) : 357410515))));
        arr_23 [i_5] = (((((-(((arr_6 [i_5] [i_5]) % (arr_1 [i_5])))))) || ((!(var_3 < -15)))));
    }
    var_19 = ((var_16 ? ((var_2 << ((((max(var_8, var_17))) - 8359)))) : (((((var_10 % 1) >= (!0)))))));
    #pragma endscop
}
