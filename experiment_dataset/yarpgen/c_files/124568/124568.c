/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 = (~9147464692643933092);

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = (((arr_2 [i_1] [i_1 - 2] [i_1]) ? (arr_0 [i_0]) : 22));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_0 - 1] [i_1] [i_2] [18] &= ((3816386158509826384 | 3816386158509826384) & (((~(arr_0 [i_1])))));
                        arr_11 [i_0] [7] = arr_0 [i_0];
                        var_20 = (((((65 ? var_7 : (arr_5 [i_2])))) ? (!62) : (arr_5 [i_1 + 1])));
                    }
                }
            }
        }
        var_21 = ((((((arr_9 [i_0] [i_0] [0] [i_0]) ? (arr_2 [i_0] [i_0] [10]) : 9147464692643933092))) ? (((arr_7 [i_0]) << (4363043149270264818 - 4363043149270264817))) : (((arr_3 [i_0] [i_0 - 1] [i_0 - 1]) ? 62 : -66))));
        var_22 = (min(var_22, ((1603526668316325779 ? var_11 : (((arr_0 [12]) ? (arr_8 [i_0] [i_0] [i_0 + 1] [18] [14]) : 14106526503574748186))))));
    }
    var_23 = (((((~var_3) ? (~var_0) : (17554913061229701211 ^ 17412856228441251699)))) ? (((min(var_1, -56)))) : var_3);
    #pragma endscop
}
