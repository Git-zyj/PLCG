/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141792
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
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = ((~((~(arr_8 [i_0] [i_0])))));
                    var_19 *= ((+(((arr_6 [i_2 + 1] [11] [i_0]) ? (arr_6 [i_2 + 1] [i_0] [10]) : (arr_6 [i_2 + 1] [i_2] [i_2])))));
                }
            }
        }
    }
    var_20 = var_13;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_16 [i_4] [i_4] = ((((-(arr_11 [i_3] [i_4])))) ? ((+((min((arr_12 [i_3] [i_3]), (arr_14 [i_4])))))) : ((-(arr_14 [i_4]))));
                arr_17 [i_4] [22] [1] = (((((~((~(arr_12 [i_3] [i_4])))))) ? (!5482572543901518718) : (arr_12 [i_3] [i_4])));
                var_21 -= ((!(((-(arr_14 [i_3]))))));
            }
        }
    }
    #pragma endscop
}
