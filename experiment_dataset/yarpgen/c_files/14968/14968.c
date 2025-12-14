/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((min(((var_4 ? 114 : 114)), (114 || 141)))) ? -225 : (max(((5262206202935275554 ? 90 : 1733360362027994024)), -77)))))));
    var_13 = (((~1) >= ((~(max(0, 17))))));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (((((((((arr_1 [i_0] [2]) ? 18446744073709551615 : 20027))) ? ((128 | (-9223372036854775807 - 1))) : (arr_0 [2])))) ? (((((max(253, (-127 - 1)))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))) : 32842345857549876));
        var_14 = 0;
        arr_3 [2] |= (max((((15867693812919313953 == (arr_0 [i_0 + 3])))), 255));
        arr_4 [i_0 - 1] [4] |= 26433;
        var_15 = (((max(1, 5262206202935275554))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (max(var_16, ((max((arr_5 [i_1]), (max((11 | 693394398), (39337 % 142))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_17 = ((60 ? (arr_11 [i_1] [i_1] [2] [10] [i_4] [1]) : (((13184537870774276061 <= (((~(arr_5 [i_4])))))))));
                        var_18 = (((((!(arr_12 [i_1] [i_1] [i_1] [i_1])))) | 76));
                        arr_14 [i_4] [i_3] [i_1] [i_1] [i_1] = (-((((max((arr_12 [i_4] [i_3] [i_2] [i_1]), -8091218764549595390))) ? (0 != -867832969) : 32842345857549879)));
                        var_19 = (max(var_19, (4845075719517301236 != -1)));
                    }
                }
            }
        }
        var_20 = 3;
        arr_15 [11] &= (((~(1 >= 27267))));
    }
    var_21 = (238 / (max(113, (~18446744073709551608))));
    #pragma endscop
}
