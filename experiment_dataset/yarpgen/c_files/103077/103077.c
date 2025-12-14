/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 &= ((((arr_0 [i_0 - 1]) ? var_0 : (arr_1 [i_0 - 1]))) >> ((((+((7773164902539024970 ? (arr_3 [i_0] [i_1]) : (arr_2 [i_0] [i_0] [2]))))) - 4169742871)));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = 3436202990;
                                var_21 = (((((arr_11 [i_2 - 1] [i_0] [i_0 - 1]) ? (arr_9 [i_2 - 1] [i_2 - 1] [i_0 - 1]) : -30027)) ^ var_16));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] = max(((((((136622806 > (arr_8 [i_0 + 2] [13] [i_1] [i_1]))))) / (arr_11 [i_0 + 2] [i_1] [i_1]))), (min((max(var_0, (arr_0 [i_0]))), 891996005)));
                arr_13 [i_0] &= (arr_0 [i_0]);
            }
        }
    }
    var_22 |= ((!(!var_16)));
    var_23 = (var_18 % var_16);
    var_24 ^= var_11;
    #pragma endscop
}
