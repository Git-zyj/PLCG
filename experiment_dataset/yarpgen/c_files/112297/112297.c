/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = (!var_1);
                var_11 += (~-849974613860221298);
                arr_5 [i_0] [i_1] = ((((max(((var_6 << (9223372036854775807 - 9223372036854775779))), ((min(-1609848230, 19)))))) ? (((((3114134617 ? -100 : 1609848242))) / ((-1 ? (arr_3 [i_0] [i_1 - 2]) : var_0)))) : var_5));
                arr_6 [i_0] [i_0] [i_0] = arr_0 [i_1 + 1];
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_12 &= (arr_10 [i_2] [i_2]);
                            var_13 = ((9223372036854775822 + ((((-9223372036854775815 < ((9223372036854775842 ? 9223372036854775804 : -1609848223))))))));
                            var_14 = (max(var_14, (((((((var_6 + var_9) + (arr_1 [i_3])))) ? ((-1 ? (var_1 - var_9) : ((var_10 ? 1 : (arr_8 [i_0] [i_3] [i_2] [i_3]))))) : (((((arr_9 [i_2]) < (((((arr_9 [i_1 - 1]) + 2147483647)) >> (((arr_0 [0]) + 22253)))))))))))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                var_15 ^= (((((!9223372036854775824) ? (13611 * var_0) : (arr_12 [i_0] [i_1 - 2] [i_3] [9]))) + (((arr_8 [i_0] [i_3] [i_2] [i_3]) ? 40 : var_7))));
                                var_16 = (((arr_8 [i_0] [i_0] [1] [i_4]) - (((min(1, -122))))));
                                var_17 = (max(var_17, (4206462245711960555 || -1)));
                                var_18 = (((22883 * 65127) << (83 - 83)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((var_6 - (255 / var_9)))) ? var_0 : (((((var_2 ? var_5 : var_5))) ? (!var_1) : var_5))));
    var_20 ^= (!(((var_7 - var_8) || var_10)));
    #pragma endscop
}
