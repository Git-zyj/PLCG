/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_1 + 1] [i_1 + 1] = (((arr_6 [i_2]) - ((min(1469337012, 229)))));
                    arr_9 [i_0] [i_2] [i_2] = (~var_6);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_17 = (min(((max(var_13, var_12))), (arr_12 [i_0] [i_1 + 1] [i_2] [i_2] [i_2 + 2] [i_3])));
                        arr_13 [i_0] [i_1] [10] [i_2] = (arr_6 [i_2]);
                        var_18 = (min(var_10, ((max(((-61 ? 1 : (-127 - 1))), (((((arr_5 [i_2] [i_3]) + 2147483647)) << (arr_12 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_3]))))))));
                        var_19 = ((((((~3072686211) ? (~var_1) : (~var_15)))) ? (59 ^ -61) : var_7));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_20 = (max((arr_0 [i_4]), 64));
                        var_21 = 8191;
                    }
                }
            }
        }
    }
    var_22 = (min(var_12, ((64 ? 28 : 2546))));
    var_23 = ((-(((((579789475 ? 2546 : var_7))) ? (var_8 <= var_1) : 1))));
    #pragma endscop
}
