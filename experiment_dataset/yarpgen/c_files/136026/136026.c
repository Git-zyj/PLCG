/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_6 & 1);
        var_20 = (~7987904232955617744);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_21 += (((-7987904232955617765 != 4552599492884840654) ? (max((((-7987904232955617760 + 9223372036854775807) << (var_18 - 44957100))), ((((arr_4 [i_0] [0] [i_0]) ? (arr_7 [i_0] [i_1] [1]) : -311782371))))) : ((((!(((var_3 ? -7987904232955617776 : -7987904232955617745)))))))));
                        arr_10 [i_0] [i_0] = (arr_5 [i_2] [7]);
                        arr_11 [i_0] = ((((arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3]) ? var_3 : (min((arr_5 [i_1] [i_1]), (arr_6 [i_1]))))));
                        arr_12 [i_0] [i_2] [i_0] = ((!(arr_6 [i_0 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
