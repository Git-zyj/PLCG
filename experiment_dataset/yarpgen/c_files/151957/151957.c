/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 = (250 + 0);

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_21 &= 1;
                                var_22 ^= ((((min((min(0, (arr_5 [2] [4] [i_2] [i_3]))), (arr_3 [i_0] [i_0] [i_2])))) || (((((min(1, (arr_9 [i_1])))) ? -881750622 : (~var_17))))));
                                arr_12 [11] [i_1] [i_1] [i_1] [i_1] &= (((4402247253117197244 & (arr_2 [i_2 + 1] [i_1] [i_2 + 1]))));
                                var_23 -= (min(((-(arr_11 [i_0] [i_3] [i_2 - 2] [i_2 - 2]))), (((arr_11 [i_0] [i_1] [i_2 - 2] [i_3]) ? var_7 : var_19))));
                            }
                            for (int i_5 = 2; i_5 < 14;i_5 += 1)
                            {
                                var_24 -= (min(-250, ((4094265071588343802 ? 1 : var_8))));
                                var_25 |= (min(30, (arr_3 [i_2 - 1] [i_3] [i_5 + 1])));
                            }
                            var_26 = (min((0 <= 250), ((0 || (arr_6 [i_0] [i_2 - 2])))));
                            var_27 &= (min((-4871209228137107638 - -1012634232), (arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_22 [2] |= (min(((65 ? 5 : 4402247253117197244)), ((min((arr_21 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 1]), var_13)))));
                            arr_23 [i_7] [13] = (min(var_1, ((min(-1, var_16)))));
                            arr_24 [14] &= 5;
                        }
                    }
                }
            }
        }
    }
    var_28 |= 7197746506989458911;
    #pragma endscop
}
