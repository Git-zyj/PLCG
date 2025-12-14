/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = ((12780027231729081089 ? ((2 ? 2 : (((max(-1, (arr_8 [i_0] [i_1 + 3] [i_1] [14] [i_3] [i_3]))))))) : (2 <= 1)));
                            arr_10 [i_1] [i_1] = ((-614699932 ? ((((((0 ? -1779771728 : 0))) ? var_6 : ((1047 ? 3037193553 : -23))))) : (max(-22, (18446744073709551613 - 27039)))));
                            var_16 = ((((((arr_7 [i_3 + 3] [i_1] [i_1 + 1] [i_3 + 3]) + var_9))) / 8748163530474351730));
                            arr_11 [11] [i_1] = ((-((-(max(-614699932, var_3))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0] [i_1] = (((((-(0 | 2574517499)))) ? (max(1779771728, (5 < 1))) : 2));
                arr_13 [i_1] = max((21110 & var_13), 205);
            }
        }
    }
    var_17 = (~var_1);
    #pragma endscop
}
