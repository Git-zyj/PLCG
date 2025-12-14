/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((max(var_0, 1)))) != ((-61 | ((1 ? 6 : 18446744073709551615))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = ((min((arr_10 [i_0] [i_0] [i_2] [i_3]), (arr_10 [i_0] [i_1] [i_0] [i_3]))) ? (((arr_10 [i_0] [i_1] [i_2] [i_0]) ? (arr_10 [i_3] [i_2] [i_1] [i_0]) : 1)) : (arr_10 [i_0] [i_1] [i_2] [i_3]));
                            var_19 = (!((((1306877566 ? 22 : 255)))));
                            var_20 = var_8;
                        }
                    }
                }
            }
        }
    }
    var_21 = -2;

    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_22 -= 47756;
        arr_16 [i_4] [i_4] = 255;
    }
    #pragma endscop
}
