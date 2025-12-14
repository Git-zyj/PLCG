/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (arr_4 [i_0])));
                arr_5 [i_0] [i_1] = (((((96 ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : ((min((arr_2 [i_1]), (arr_2 [i_0]))))));
            }
        }
    }
    var_12 -= -438449975530265306;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_13 = (arr_8 [1]);
                    var_14 = ((438449975530265303 * (max((808264983009062433 < -1966331096), (arr_10 [i_2] [i_3] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
