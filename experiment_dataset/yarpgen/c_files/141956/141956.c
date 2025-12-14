/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(var_20, var_15));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 *= (!2147483647);
            arr_5 [i_0] = ((arr_0 [i_0]) % (1 << var_9));
            var_22 = (max(var_22, 0));
        }
        var_23 = (min(var_23, (((arr_2 [i_0]) != (arr_0 [i_0])))));
        var_24 ^= ((arr_0 [i_0]) ? 1 : 1);
    }
    var_25 = (((((max(1, var_9)) ? 711828086 : var_1))) ? (!1) : var_9);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_19 [1] [i_5] [i_4] [2] [1] |= ((((((min(var_3, 1))) ? 1 : (arr_13 [i_4 - 1] [i_6] [i_2 - 1]))) != (((arr_1 [i_2 + 1] [i_3 - 2]) ? var_12 : var_9))));
                                var_26 = ((((min(-2147483632, -1196097055)) != ((1 << (var_2 + 1244241127))))) ? (((-var_3 == ((min(1, 1)))))) : ((min(1, var_6))));
                                var_27 = (min(var_27, (((arr_7 [i_4 + 1] [i_6]) > 2097144))));
                                var_28 = 711828068;
                            }
                        }
                    }
                }
                arr_20 [i_3] [i_3] [i_2] = (((710874725 * 0) * 1));
            }
        }
    }
    #pragma endscop
}
