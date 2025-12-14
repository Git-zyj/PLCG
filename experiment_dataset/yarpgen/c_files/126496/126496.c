/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-var_1 + var_6);
    var_14 = (max(7724377320633810702, var_4));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((((10722366753075740931 ? (arr_5 [i_1 + 1] [i_0 + 1] [i_1 + 1]) : 13980305881157735763)) == (min((arr_5 [i_1 + 1] [i_0 + 1] [i_1 - 1]), 10722366753075740939))));
                var_16 = ((10722366753075740931 ? (arr_4 [i_0] [i_0]) : (arr_0 [i_1])));
                arr_6 [i_0] [i_0] = 6241;

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_17 = (max(10722366753075740927, 7724377320633810684));
                    arr_9 [i_0] [i_0 - 1] [i_2] [i_0] = (arr_3 [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
