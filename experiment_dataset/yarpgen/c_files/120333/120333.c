/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += -var_9;
    var_14 = (!var_6);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (((((~(arr_1 [i_1 + 1] [6])))) ? (min((min(1793069900, (arr_2 [i_1] [i_0] [i_0]))), (arr_1 [i_0 - 1] [i_0 + 1]))) : ((((arr_4 [i_0 - 1] [i_1] [i_0]) % (arr_4 [i_0 + 1] [i_0 + 1] [i_0]))))));
            var_15 ^= ((((arr_0 [i_0 + 1]) && (~var_8))));
        }
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            arr_10 [i_0] [i_0] [i_0] = (min(((min((((!(arr_0 [i_0])))), (((arr_2 [i_0] [i_2] [i_2]) ? 11978 : 59119))))), (((arr_4 [i_2] [i_2 + 1] [i_0]) - (arr_4 [i_0] [i_2 + 1] [i_0])))));
            var_16 = arr_0 [i_2];
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            arr_14 [i_0] = (min((arr_11 [i_0]), 59123));
            var_17 = (arr_2 [1] [i_0] [i_3]);
            arr_15 [i_0] [9] [i_0] = (20632 * 33948);
        }
        arr_16 [i_0] [6] &= ((arr_12 [2]) ? (((3948638247 + 59119) ? (arr_8 [i_0] [1]) : (min(0, (arr_11 [0]))))) : (((arr_6 [i_0] [i_0] [i_0]) & (((arr_13 [i_0] [10] [10]) ? 73 : (arr_11 [0]))))));
    }
    for (int i_4 = 3; i_4 < 6;i_4 += 1)
    {
        var_18 -= (31592 - 33944);
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 6;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    var_19 = ((-23506 != (33942 == 20)));
                    var_20 = (max(var_20, (arr_0 [i_5])));
                }
            }
        }
    }
    #pragma endscop
}
