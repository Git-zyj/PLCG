/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((!(((var_5 ? 1 : var_12)))))) >= (((!(var_5 != var_0))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (4294967263 & (~-1885102087));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_0] = ((((var_11 ? (arr_6 [i_1] [i_2 + 1] [i_3]) : (arr_9 [i_1] [i_2 + 1] [11] [i_2 + 1] [i_2] [i_3])))) || ((((arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1]) ? 247 : (arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [1] &= (((((var_8 ? 28 : (!-38)))) ? (max((max(var_5, 434205929876387822)), (-9223372036854775807 - 1))) : (arr_1 [i_2] [i_3])));
                    }
                }
            }
        }
        arr_13 [i_0] [0] = ((~((2595797430104641875 ? var_13 : (max((arr_9 [i_0] [7] [i_0] [7] [i_0] [i_0]), 2595797430104641875))))));
    }
    #pragma endscop
}
