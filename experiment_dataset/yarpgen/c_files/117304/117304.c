/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 = (max(var_12, 36772));
    var_13 = var_10;
    var_14 = ((var_3 % ((((max(5704531750347052339, 10095))) ? ((var_9 ? var_0 : 7)) : ((253 ? var_8 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] [i_0] [i_1 + 2] = (((((-(arr_2 [i_0 - 1] [i_0 - 2])))) != (((((2147483647 ? var_4 : (-2147483647 - 1)))) / (max((arr_3 [i_1] [i_0]), (arr_0 [i_0 + 2] [i_1 - 1])))))));
                var_15 = 2147483647;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1) /* same iter space */
                {
                    var_16 = (arr_2 [i_1 - 2] [i_0 + 1]);
                    var_17 = (((arr_3 [i_0 + 2] [i_2 + 3]) ? 62714 : (arr_3 [i_0 + 2] [i_2 + 3])));
                    arr_8 [i_0] [i_2] = (arr_1 [i_2 + 2]);
                    var_18 = (!var_2);
                }
                for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
                {
                    var_19 ^= (!48);
                    var_20 = 0;
                }
                var_21 = -var_8;
                arr_11 [i_0] [i_0] [i_1] = (min((max((arr_2 [i_1 - 1] [i_0 - 2]), (arr_10 [i_0 + 2] [i_1]))), var_0));
            }
        }
    }
    #pragma endscop
}
