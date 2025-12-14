/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((2557801644 / (((-(174 <= 18446744073709551615))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (~-21749);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_22 = ((7 ? -28573 : ((1 << (2928410290885981933 - 2928410290885981904)))));

            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                var_23 = 1;
                var_24 |= var_3;
                var_25 = (max(var_25, 1));
                var_26 ^= 19057;
            }
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_27 ^= (min(((((arr_5 [i_3 + 1] [i_3 + 2]) ? (arr_10 [10] [i_3] [i_3 - 1] [i_3 + 2]) : 1))), 10146163048916752676));
                var_28 = var_15;
                var_29 = (-1872177696 && 1);
            }
            var_30 *= (min(((-((~(arr_2 [i_0] [i_1]))))), (10146163048916752676 > 1)));
            var_31 &= 19049;
            var_32 = (~31202);
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_14 [i_4] [i_4] [i_0] = ((!(arr_4 [i_0] [0] [1])));
            var_33 = (((((-5729 ? (~1872177696) : 96))) ? (((~(~var_18)))) : 1));
            var_34 = ((~(~65529)));
        }
        var_35 = 0;
    }
    var_36 = (~-29527);
    #pragma endscop
}
