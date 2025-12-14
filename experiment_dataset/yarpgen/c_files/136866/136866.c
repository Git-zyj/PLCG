/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (-32767 - 1);
    var_15 |= ((var_8 | ((2147483640 ? (-32767 - 1) : -32752))));
    var_16 = var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_5 [i_0 - 1] [i_0 - 1] [i_1] = ((((arr_4 [i_0] [i_1]) ? ((min(-32751, 32743))) : (arr_3 [i_0]))) / (--32753));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] = (arr_6 [i_3] [i_0]);
                        var_17 = (max(var_17, var_3));
                    }
                }
            }
            arr_11 [i_1] = ((((+((max((arr_7 [19] [i_1] [i_0] [i_0]), var_8)))))) ? -32751 : (((arr_4 [i_0] [i_0 - 1]) * (!var_2))));
            var_18 = (((arr_2 [15]) ? var_5 : (var_9 <= var_10)));
        }
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_22 [i_0] [i_5] [i_4] [i_0] [i_0] = ((((arr_2 [i_5]) ^ (var_1 | var_0))));
                        arr_23 [3] = arr_6 [i_0 - 1] [i_0 - 1];
                    }
                }
            }
            arr_24 [i_0] [i_0] [i_4] = -1;
        }
        var_19 -= (max((((arr_21 [i_0] [i_0]) >> (((arr_7 [10] [i_0 - 1] [i_0 - 1] [i_0]) - 110)))), (arr_14 [i_0 - 1] [i_0 - 1])));
    }
    #pragma endscop
}
