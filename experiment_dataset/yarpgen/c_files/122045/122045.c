/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(((var_17 + var_18) ? ((max(var_5, var_16))) : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = 4294967286;
                arr_5 [i_1] [i_0] [i_0] = ((-1152139600 ? (-9223372036854775807 - 1) : 13255577091094723699));

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    var_20 -= var_0;
                    var_21 = (arr_7 [i_0] [i_1] [i_2] [i_2 + 1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {
                var_22 *= ((-((+(((arr_8 [i_4]) ? 13255577091094723699 : (arr_11 [i_3] [i_4] [i_3])))))));
                var_23 -= 222;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                {
                    arr_20 [i_5] [i_5] [i_5] [5] = ((-(+-45)));
                    arr_21 [i_5] = ((!((min(-1, -32753)))));
                }
            }
        }
    }
    var_24 = var_1;
    #pragma endscop
}
