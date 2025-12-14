/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(var_5, (max(var_4, 32736))))) < (((arr_2 [i_0] [i_0]) ? var_6 : var_3))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_10 = (min((((~(arr_4 [i_2])))), var_6));
                            var_11 = ((((((var_0 & -19) ? (arr_13 [i_0] [i_1] [i_2] [i_3]) : (arr_7 [i_2] [i_2] [i_2 + 1])))) ? (max((1857809740 & 8658654068736), (((var_6 ? var_5 : var_5))))) : (arr_1 [i_1])));
                            var_12 = 2437157556;
                            var_13 = (min((min((((-8658654068747 + 9223372036854775807) << (((-8658654068751 + 8658654068772) - 21)))), var_3)), ((((arr_8 [i_2 + 1] [i_2 + 1] [i_4]) < var_4)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_0] [i_1] [i_0] [i_3] [i_5] [i_5] = (((arr_15 [i_0] [i_1] [4] [i_3] [i_2 + 1]) != var_4));
                            var_14 = var_7;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_15 = (arr_18 [i_0] [i_2] [i_2 + 1] [i_0] [i_0]);
                            var_16 = 1857809753;
                        }
                        arr_20 [i_0] [i_1] [3] [i_2] = -617;
                        var_17 = (((arr_14 [i_0] [i_1] [i_1] [i_2 + 1] [i_2] [i_2] [6]) ? (max((arr_5 [i_2 - 1]), (max((arr_9 [i_3] [i_2] [i_1] [i_0]), 127)))) : (((min(1, 32))))));
                    }
                }
            }
        }
        var_18 = (max(((((var_3 ? 8658654068749 : var_3)) + 8658654068736)), (max(480, -8658654068749))));
    }
    var_19 = var_0;
    var_20 = (min((((!7140225003000632003) ? (var_5 >> 15) : (~1825458840))), (((var_1 + var_7) ? (var_5 & var_4) : (-1 < 2469508455)))));
    var_21 = var_7;
    #pragma endscop
}
