/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((1 ? -var_4 : (-328849661723406144 || var_4)))) ? (min(-var_4, (max(var_5, (-2147483647 - 1))))) : (max((((var_3 + 2147483647) << (var_8 - 3089484340439267014))), 0))));
    var_16 ^= ((-1036338662 ? ((((max(var_11, var_5))) ? (min(var_11, var_7)) : (~1242771150))) : 16383));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 ^= -800659772;
        var_18 = (~var_13);
        var_19 = (max(var_19, -var_11));
        var_20 ^= 1;
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((((min(((((arr_4 [i_1]) == var_1))), 0))) ? 1 : (min((arr_3 [i_1 + 2] [i_1 + 2]), var_8))));
        var_21 ^= ((((((((arr_0 [i_1]) && var_4)) ? (!4800829894681109083) : var_13))) ? (252 | 4864666422582331948) : var_5));
        var_22 = min(var_11, (~-388984105407872623));
    }
    for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = (min(3318663121, ((3080336616666692319 ? ((((!(arr_0 [i_2]))))) : (max(13685627529669685832, (arr_1 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_23 = (!var_10);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_24 ^= ((!(239 ^ 1582208500)));
                                arr_22 [i_2 + 2] [16] [i_4] [16] [i_2 + 2] = min((44787 / 1979875791), (((arr_12 [13] [13] [i_4]) ? ((var_10 ? var_9 : var_2)) : 2147483647)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 ^= var_12;
    #pragma endscop
}
