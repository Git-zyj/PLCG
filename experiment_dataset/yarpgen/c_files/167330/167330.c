/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((-(arr_0 [i_0] [i_0])));
        var_20 = (~var_16);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (max((arr_4 [i_1] [i_1]), (min((((!(arr_2 [i_1] [i_1])))), ((5085798862029668751 ? 1 : -5636906572147684613))))));
        var_21 = (min(var_21, (((~(max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))))));
        var_22 = var_7;
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((var_8 ? (((((1 ? 6824853065716588404 : -116))) ? ((-5085798862029668752 ? var_4 : var_17)) : -var_18)) : (~var_10)));
        arr_10 [i_2] = (min((min((arr_2 [i_2 + 2] [5]), (arr_2 [i_2 + 1] [22]))), (max(67108856, -5085798862029668751))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        var_23 |= ((-(-127 - 1)));
                        arr_18 [i_2] [i_2] = (min((min((1 & 1), 6824853065716588404)), 1));
                    }
                }
            }
        }
        arr_19 [i_2] [i_2] = (337871148 << 2);
        var_24 = ((var_3 > (min((max(5085798862029668747, var_9)), (6824853065716588390 > -6824853065716588405)))));
    }
    var_25 = (5085798862029668764 - 7666889332410656182);
    #pragma endscop
}
