/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_1 ^ var_3);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 += (((((arr_3 [i_1] [i_0]) ? 92 : -25802)) * ((((var_2 / 19) <= (var_10 != 2311736998))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((((arr_7 [i_2] [i_2] [i_2 - 3] [i_2 - 3] [i_2 - 3] [i_2]) > (arr_7 [i_2] [i_2] [11] [i_2 - 2] [i_2 - 2] [i_2 - 2]))))));
                            var_16 = ((~((((arr_8 [i_0] [i_0]) >= (arr_8 [i_0 + 2] [i_0 + 2]))))));
                            var_17 = (2311736998 && var_0);
                            var_18 -= 2427232225;
                        }
                    }
                }
                arr_10 [9] [i_1] = ((((((22936 ? -41 : 11403832483576029432)) % (arr_0 [i_0]))) + (max((((arr_3 [i_0] [i_0]) ? (arr_9 [i_1] [i_0] [10] [i_0] [i_0]) : -2569)), -19))));
                arr_11 [i_1] [i_1] = (min(var_4, var_3));
            }
        }
    }
    var_19 = (min(var_19, 1572));
    var_20 = var_11;
    var_21 = ((((-8073852180385040346 ? var_3 : 92))));
    #pragma endscop
}
