/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 65;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [3] = (((max(64145, ((32764 ? 1 : -4568)))) >= (min((arr_2 [i_0] [5] [i_0]), (1 * 1)))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_19 -= ((1 ? 505423979719189221 : 1));
                    arr_9 [i_0] [i_0] [i_2] = (((arr_3 [i_0] [i_2 + 1]) * ((252 ? 1 : 3160377791))));
                }
                var_20 = ((((((1 && (arr_8 [i_0] [i_1]))))) != -4233494959));
                arr_10 [i_0] [i_0] = (max(((((var_5 != var_2) >= (~1134589503)))), ((var_3 ? (arr_8 [i_0] [i_0]) : ((min(1, var_10)))))));
            }
        }
    }
    #pragma endscop
}
