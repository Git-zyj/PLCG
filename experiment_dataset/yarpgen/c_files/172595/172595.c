/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((min(var_1, ((max(4294967295, 255))))), var_1));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((arr_0 [i_0]) % 10245745123295770788);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 += var_14;
                    arr_10 [20] [i_1] [i_1] [i_0] |= ((~(~var_9)));
                }
            }
        }
        var_18 = 20;
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] [i_3 - 1] = ((~((((min(-5374596028099832734, var_13))) ? (var_4 && var_5) : var_15))));
        arr_14 [i_3] [i_3] = max((arr_0 [22]), (((~4294967295) ? var_2 : 0)));
    }
    var_19 = (max((min((!var_14), 2693287799583482202)), (((~(-32767 - 1))))));
    #pragma endscop
}
