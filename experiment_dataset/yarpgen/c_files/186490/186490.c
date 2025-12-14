/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (min(var_20, 237));
                var_21 = -1850486003143076873;
                arr_5 [i_0] [i_0] [i_1] = ((!(((4688308241196128281 ? 8409761635808318490 : 19093)))));
                var_22 = var_14;
                var_23 += (max((((~(arr_1 [i_0])))), (((max(8409761635808318490, (arr_4 [i_0] [i_0] [i_0]))) >> (var_1 - 26150)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                {
                    var_24 *= (min((min(1850486003143076873, (1850486003143076873 < var_8))), ((min(46443, (min(var_13, 66060288)))))));
                    var_25 = ((((-1455983508 ? -var_19 : (~var_7))) | (arr_10 [i_2] [i_3] [i_4])));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_3] [i_4] [i_3] [i_6] [i_2] [i_3] = 2147483647;
                                arr_19 [i_3] [i_3] [i_4] [i_3] [i_6 - 2] = 2113929216;
                            }
                        }
                    }
                    var_26 = (max((arr_7 [i_2]), (((var_12 <= (max(1850486003143076873, var_0)))))));
                }
            }
        }
    }
    var_27 = (max(var_27, (var_5 + var_16)));
    var_28 = max(2080768, (((((19093 ? 35516 : var_14)) == var_13))));
    #pragma endscop
}
