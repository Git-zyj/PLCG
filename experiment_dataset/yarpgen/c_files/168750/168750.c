/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = ((~(max(((var_6 ? var_19 : (arr_1 [i_0]))), (arr_7 [14] [i_0] [i_2])))));
                    arr_8 [i_2] [i_2] [i_2] = (min(((~(arr_5 [i_0] [i_0] [i_2] [i_0]))), (((var_4 >> (((arr_3 [i_1 - 2] [i_1 - 4] [i_1 - 4]) - 382887361)))))));
                    var_21 = ((var_3 >> ((((~((12082 ? var_6 : (arr_4 [i_1] [i_2]))))) - 774859491))));
                }
            }
        }
    }
    var_22 = 2147483647;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                {

                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        var_23 = (min(var_23, (--0)));
                        arr_20 [i_3] [i_4] [i_4] [i_6 + 2] = 0;
                    }
                    arr_21 [i_3] [i_3] [i_3] [i_3] = (max((((min(var_15, 15433)) << (-60 + 88))), var_12));
                }
            }
        }
    }
    #pragma endscop
}
