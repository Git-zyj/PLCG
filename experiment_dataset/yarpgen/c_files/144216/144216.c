/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~-var_5) >> (((+-5960) + 5969))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((arr_1 [i_0]) >= (((arr_0 [i_0]) ? var_5 : (arr_0 [i_0]))));
        var_16 = ((((var_8 ? (arr_2 [i_0] [14]) : var_7))) ? (((-5960 ? 17 : 211))) : ((max(5977, 67092480))));
        var_17 = ((((13 ? (arr_2 [1] [i_0]) : var_5))) ? ((((5227842505797561106 / var_13) ? -var_13 : (((arr_2 [i_0] [i_0]) ? 1984379419 : var_7))))) : ((max(var_0, (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (((((~(arr_4 [i_1])))) ? (max((arr_4 [i_1]), var_6)) : (((arr_5 [i_1] [i_1]) ? (arr_4 [i_1]) : (arr_5 [i_1] [i_1])))));
        arr_6 [i_1] = (min((min(13218901567911990509, 18446744073709551587)), (arr_4 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_19 ^= (min((((arr_12 [i_1] [i_1] [i_3] [i_1]) ? 255 : -0)), (+-2147483647)));
                        var_20 = ((~((94 ? -6404987697120273756 : (arr_12 [i_4] [i_3] [i_2] [i_1])))));
                        var_21 = (min(var_21, -11359));
                    }
                }
            }
        }
    }
    var_22 = (max(6631412114439170296, var_5));
    #pragma endscop
}
