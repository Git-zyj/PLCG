/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((0 >> ((((204 ? var_10 : 2)) - 1623869666))))) * var_0));
    var_18 = (~248);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 *= (arr_1 [1] [i_1]);
                arr_6 [i_0] = (arr_0 [i_0]);
                var_20 = (((max((0 * var_4), 14313329298475735575)) - (((((-(arr_4 [i_0] [i_0] [i_0 + 2]))) & (768 && 4096))))));
                arr_7 [12] |= 3001881362;
            }
        }
    }
    #pragma endscop
}
