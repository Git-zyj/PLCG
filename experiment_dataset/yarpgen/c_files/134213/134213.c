/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 ^= ((((var_1 || (var_9 - var_7))) ? (arr_4 [i_0]) : -6196913024004131803));
                arr_7 [4] [4] [10] &= ((!((((((var_4 ? var_13 : 2967467596730653771))) ? (arr_1 [i_1]) : (11248858357916302046 * var_13))))));
                var_16 = var_11;
                arr_8 [i_0] [i_0] [i_0] = (min(((var_5 ? (var_14 - var_2) : ((var_5 ? 26414 : var_8)))), ((((var_4 - 29349) <= (~var_8))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_17 = (min((max((~var_7), (11351196192236063293 == 5687007417251147990))), (arr_9 [i_2])));
        var_18 ^= max(var_7, (~var_11));
        var_19 = (min(var_19, (((15479276476978897844 * (((var_9 & -8966364343023178473) ^ var_11)))))));
        arr_11 [i_2] [i_2] = (arr_10 [i_2]);
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
    {
        var_20 = var_4;
        arr_15 [i_3] = 59095;
    }
    #pragma endscop
}
