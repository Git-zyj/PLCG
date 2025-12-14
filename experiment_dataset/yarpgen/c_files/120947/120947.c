/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(((var_12 ? var_3 : -74)), ((74 ? var_14 : var_0))))) ? 0 : ((var_12 ? var_10 : var_4))));
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [12] [12] = ((((max((arr_3 [i_0 - 1] [i_0]), (arr_2 [i_0 - 1] [i_0 - 1] [i_0])))) > ((max((((!(arr_1 [i_0])))), (arr_0 [i_0]))))));
                var_18 ^= var_12;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            {
                var_19 = ((((max((arr_2 [3] [5] [i_2 + 3]), 17172))) ? (arr_2 [i_2] [i_3 + 1] [i_3 + 1]) : (((arr_2 [15] [9] [i_3]) ^ var_5))));
                arr_10 [i_2] [i_3] = ((((min(-88, 1536))) > (((arr_3 [i_2] [i_3]) ? 44016 : 59929))));
                var_20 ^= ((-108 ? var_9 : (min((~var_9), -92))));
            }
        }
    }
    var_21 = var_14;
    #pragma endscop
}
