/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((~var_9) >= (191003835103305268 - 191003835103305268))))));
    var_15 = -191003835103305267;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((26 | var_13) + (arr_1 [i_0 - 1])));
                arr_8 [i_0] [i_1] [i_0] = var_4;
                var_16 = (min((max((arr_0 [i_0 - 1]), 7681707980046078778)), ((((arr_0 [i_0 - 1]) >= (arr_0 [i_0 - 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_3] = (arr_6 [i_2]);
                var_17 = 1;
                arr_15 [i_2] = 191003835103305269;
                var_18 = (arr_4 [i_2]);
                var_19 = (((((~((max(var_1, (arr_6 [i_2]))))))) ? (((var_5 / 1731529029961652512) % var_3)) : 1));
            }
        }
    }
    var_20 = (var_8 * var_3);
    #pragma endscop
}
