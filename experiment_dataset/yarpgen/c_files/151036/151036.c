/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? var_2 : ((var_10 ? var_5 : var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((max((~1152921504606846975), (((var_0 >> (5184982702453298308 - 5184982702453298286)))))))));
                var_13 = ((((((!(arr_3 [i_0] [i_1]))))) ^ ((6144 & (arr_0 [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [i_3] = -19507;
                    var_14 = (arr_1 [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
