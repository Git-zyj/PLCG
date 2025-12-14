/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((((min(var_14, 58711)) >> (((-4017 % 2147483647) + 4044))))), ((0 ? 1 : 98304))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0 + 1] [i_0 - 2] = 4024;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_1] [i_3] = (((75 >> ((((-4 ? 2147483647 : 4892)) - 2147483592)))));
                            var_17 -= ((+((min((arr_11 [i_0 - 2] [i_0 - 2] [i_3 - 3] [i_3 - 3] [i_3 + 2]), 152)))));
                            arr_15 [i_0] [i_0] [i_3] = ((arr_8 [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 2]) ? ((((arr_8 [i_3 + 2] [i_3 + 2] [i_0] [i_0]) ^ (arr_8 [i_3 + 1] [i_3 + 2] [i_3 - 3] [i_1])))) : ((9893440458242491683 * (arr_8 [i_3 - 2] [i_3 - 2] [i_2] [i_2]))));
                        }
                    }
                }
                var_18 = (((((~(arr_3 [i_0])))) * (((26 * 126) / (-1 | -4338774114429392649)))));
            }
        }
    }

    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        var_19 = (((max((((-(arr_1 [i_4] [i_4 + 1])))), 2199023255551)) <= (-5955378237602333613 || 1)));
        arr_19 [i_4] = ((68719476735 ? -48 : ((-(!228)))));
    }
    for (int i_5 = 4; i_5 < 19;i_5 += 1)
    {
        var_20 = 3988072927961050698;
        var_21 = (((max(-146318616364892227, (((-(arr_10 [i_5] [i_5] [i_5 + 1])))))) <= 882646888));
    }
    var_22 = (((((max(2079561106, 1))) ? 1732027164 : (2147483647 | 67108848))));
    #pragma endscop
}
