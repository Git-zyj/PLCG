/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] = -23;
                        arr_11 [i_0] [i_0] [i_0] = (((max((((arr_1 [i_0]) ? var_4 : (arr_7 [i_0] [i_0] [i_0] [i_0]))), ((var_1 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : var_14)))) & (-23 | -1)));
                    }
                    arr_12 [i_0] &= -2;
                    arr_13 [i_0] [i_0] [i_0] = 4294967295;
                    var_15 = ((~((((arr_2 [i_2] [i_2] [i_2]) == ((1923 ? 63 : 1920)))))));
                }
            }
        }
    }
    var_16 = ((!((((((-1049368094 ? var_10 : -26))) ? ((1049368087 ? 22 : 10087244450119576261)) : var_14)))));
    var_17 = (((~var_12) > (var_1 / 25)));
    #pragma endscop
}
