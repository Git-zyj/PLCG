/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_16;
    var_19 = (min(var_19, (((((9149026270952461188 < 9149026270952461188) ? (var_16 != var_4) : -9149026270952461208))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_20 -= ((17737529428328321404 > (((max(2680930111091225686, 17737529428328321396)) + 17400746140309960678))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, (arr_8 [i_2 - 1] [i_2] [1])));
                        var_22 ^= ((((min((arr_0 [i_2 - 2]), (arr_6 [i_0] [i_2 - 1])))) ? ((((arr_8 [7] [i_2 - 1] [11]) ? (arr_8 [i_0] [i_2 - 1] [i_2]) : (arr_6 [i_2] [i_2 + 1])))) : 17737529428328321425));
                        var_23 = (min(var_23, var_2));
                        var_24 += 17737529428328321412;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_25 = (min(var_25, (((((max(((max((arr_4 [i_0]), 45))), (min(-9149026270952461182, var_6))))) && (arr_2 [10]))))));
            var_26 += (max((15499509991300770315 || 62323), (((arr_3 [i_0] [i_4]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_4])))));
            var_27 = (~((var_11 ? (arr_4 [i_0]) : (arr_4 [i_0]))));
        }
        var_28 = (min(var_28, ((((((arr_3 [i_0] [i_0]) + (arr_3 [i_0] [i_0])))) ? (((2947234082408781271 ? 1134312323 : 2584142097))) : (max(18446744073709551615, (((0 ? 1 : (arr_5 [i_0] [i_0]))))))))));
        arr_13 [i_0] [i_0] &= (arr_1 [i_0]);
        var_29 -= (((arr_3 [i_0] [i_0]) >= (max(17957693644761557973, (arr_2 [i_0])))));
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_30 = ((-var_7 ? (max(((max(2052935285, var_1))), 709214645381230219)) : (max((7362152252647134439 % var_9), ((max((arr_15 [0]), var_10)))))));

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_31 = (min(var_31, (((-(-32767 - 1))))));
            arr_21 [i_5] [i_6] |= ((max(((var_12 | (arr_9 [12]))), var_1)));
            arr_22 [2] [i_6] |= (((arr_8 [i_5] [3] [i_6]) ? 2091 : (((arr_2 [i_5]) / var_14))));
        }
        var_32 = (max(var_32, var_11));
    }
    var_33 = (max(var_33, 35794));
    var_34 = (min(var_34, (((var_15 & ((~(min(var_12, var_17)))))))));
    #pragma endscop
}
