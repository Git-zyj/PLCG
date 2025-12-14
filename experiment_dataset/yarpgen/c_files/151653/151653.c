/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = -2047668112;
                    var_21 += (min(((min(-2047668112, 1))), (min(11818085611434726206, 25788))));
                    var_22 = (min(-1594887335, 6628658462274825410));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_23 = 2047668111;
                                arr_13 [i_0 - 1] [i_1] [i_2] [i_1] [i_4] &= (max((arr_11 [10] [i_1] [10] [10] [i_1]), (var_13 % 2427960272682468099)));
                            }
                        }
                    }
                }
            }
        }
        var_24 = (max(var_24, 2047668112));
        var_25 = ((((~(arr_1 [12])))) ? ((max(1594887319, 5360505548072038382))) : 2211970943);
    }
    var_26 = var_5;
    #pragma endscop
}
