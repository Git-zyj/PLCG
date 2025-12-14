/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_15 = ((((((arr_1 [i_0]) / (arr_1 [i_0])))) ? ((~(arr_1 [i_0]))) : ((-(arr_1 [i_0])))));
        var_16 = (~(arr_0 [i_0 + 1]));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (((((min(-25959, var_12)))) != (-32767 - 1)));
                    arr_6 [i_0] [11] [i_2] = max(((-5132919931196780331 ? -7819581154654408513 : var_1)), (((!(arr_3 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_0] [i_1] [i_3] = ((((max(-2508, ((-1087224793365838022 ? 1 : -1361577389))))) * 5132919931196780330));
                                var_18 = (((-(arr_2 [i_1]))));
                                var_19 = ((((!((min((arr_7 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_2]), (arr_8 [i_0] [i_0] [10] [14])))))) ? (((((200651795 ? 7819581154654408513 : (arr_0 [i_0])))) ? var_7 : (((((arr_9 [i_0] [i_0] [i_0] [i_3] [i_0]) != var_13)))))) : (max((min(7124344361295680813, var_2)), (arr_13 [16] [16] [16])))));
                            }
                        }
                    }
                }
            }
        }
        var_20 = (max(var_20, (arr_2 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_21 = (!-7819581154654408512);
                            var_22 ^= (((min(((min(var_10, var_9))), (~var_8))) % 1361577370));
                            arr_24 [i_6] = 8875056412135551316;
                        }
                    }
                }
                arr_25 [i_6] = (arr_1 [i_6]);
            }
        }
    }
    #pragma endscop
}
