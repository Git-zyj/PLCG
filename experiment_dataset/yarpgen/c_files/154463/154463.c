/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154463
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = var_6;
                var_10 = (min((((!(1637805047 < 1637805044)))), (min(((~(arr_0 [16] [i_1]))), (arr_1 [i_0])))));
            }
        }
    }
    var_11 = ((-1367540648918460866 / ((var_6 ? 2 : (0 * var_9)))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] [i_2] = -1;
                var_12 = (((((var_5 ? 81 : var_5))) ? (var_5 >= var_8) : (min(-var_3, (~1)))));
                var_13 = (min(var_13, ((min(1, ((min(((~(arr_7 [i_2 + 1] [i_3]))), var_8))))))));
                arr_11 [i_2] [i_3 + 1] = ((~(arr_0 [i_2 - 1] [i_2 - 1])));
            }
        }
    }
    #pragma endscop
}
