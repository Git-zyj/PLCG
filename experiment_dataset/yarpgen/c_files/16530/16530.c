/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_1 * (min(var_2, ((1068596903 ? var_13 : var_12))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0 + 2] = (((((~(arr_1 [i_1])))) << (arr_5 [i_0 - 2] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (((((2047 ? (((var_1 == (arr_6 [i_0] [i_1] [i_2])))) : (var_0 != 2457008814617670541)))) ? (min((3622954965836529714 % 222255261), ((6059107205934356302 ? (arr_2 [i_0]) : var_17)))) : (((((min(114, var_16))) ? (((var_2 ? -680410851 : 110))) : ((-2061 ? -7721370535289723325 : (arr_14 [i_0] [i_1] [i_1] [i_3] [i_4]))))))));
                                var_20 += (3121985653093780849 && 16916147942626684754);
                                var_21 |= arr_12 [i_4] [i_3] [i_0 + 1] [i_1] [i_0 + 1];
                                var_22 = (min(7205172639181131325, ((((var_1 ? 545213493 : 3121985653093780862)) * (((((arr_11 [i_2] [i_2] [16]) == var_17))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}
