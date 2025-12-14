/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [19] [i_2] = (((!12952702417271706865) % var_11));
                    var_13 = (((((((!(arr_1 [i_0]))))) ^ (max(12952702417271706865, (arr_0 [i_0 + 2]))))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_14 ^= (!var_5);
                    var_15 = (((arr_1 [i_1]) ? (((arr_1 [13]) ? (min((arr_1 [i_3]), (arr_5 [i_3] [i_3] [i_3]))) : (arr_1 [i_0 + 1]))) : (((((min(241, var_2))) ? 15 : 0)))));
                }
                var_16 = ((((max(((((-32767 - 1) ? 16 : 13523))), var_8))) ? (min(var_12, var_5)) : (((((arr_6 [i_0] [1] [i_1]) && var_2))))));
                arr_10 [i_0 - 1] [i_1] [i_1] = var_11;
            }
        }
    }
    var_17 = (min((1203827461 * 1), var_12));
    var_18 = (min((max(var_11, (max(var_7, 28)))), (((!((max(var_5, var_7))))))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                {
                    arr_18 [1] [i_6] = ((((((((arr_4 [i_4] [i_5]) ? var_5 : var_12)) != var_12))) << (((arr_4 [i_4] [i_6]) - 2155680264835705992))));
                    var_19 = (min(var_19, (((max((!18446744073709551615), (max(var_5, 37457))))))));
                }
            }
        }
    }
    #pragma endscop
}
