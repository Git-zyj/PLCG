/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 = (((!-18) >> ((((var_7 ? var_9 : -33)) * ((((arr_0 [i_2] [i_2]) >> (((arr_2 [i_0] [i_0]) - 9543)))))))));
                    var_16 = (4294967289 ? ((((min(-13576, (arr_2 [i_0] [i_0])))) ? 32 : 12)) : (!var_1));
                    arr_10 [i_0] [i_2] [i_1] [i_2] |= (-((((((arr_1 [0] [i_0]) << 17))) ? ((((arr_4 [i_0] [i_0] [1]) && var_10))) : (min((arr_0 [i_1] [i_2]), 2055825955)))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_17 |= ((~(((((12 != (arr_7 [i_3] [8] [12])))) * ((231 >> (((arr_2 [i_3] [13]) - 9527))))))));

        for (int i_4 = 1; i_4 < 7;i_4 += 1)
        {
            var_18 = var_9;
            arr_15 [0] [0] |= (((min(((min(var_5, (arr_0 [i_3] [i_4])))), 4832383356326310680)) << ((1936647718 * (!162)))));
        }
        arr_16 [2] |= (250 << 0);
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_19 = ((min(127, 26)));
        var_20 = (((((!32) & (((!(-9223372036854775807 - 1)))))) << (((arr_17 [i_5] [i_5]) - 10755))));
    }
    var_21 = var_5;
    #pragma endscop
}
