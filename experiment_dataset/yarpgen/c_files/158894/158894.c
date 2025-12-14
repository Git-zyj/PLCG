/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 3627248562507353007;
    var_14 = ((var_9 ? (((((241 ? 14819495511202198609 : var_10))) ? var_10 : -3627248562507352992)) : (((max(-8399704323443523334, 8995665710952804))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, var_12));
                var_16 = ((var_9 || ((min(var_12, -8995665710952805)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = (-(((arr_9 [i_3] [i_0] [i_1 + 2]) ? 32627 : var_0)));
                                var_18 = ((~((((var_3 ? 14819495511202198630 : var_10)) | (arr_9 [i_2] [i_1] [i_2])))));
                                var_19 += ((13835058055282163712 ? 8376330848787102741 : (max(-8995665710952790, 219))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 |= ((32768 ? 1 : 8995665710952804));
    #pragma endscop
}
