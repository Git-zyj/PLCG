/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = var_9;
                var_19 ^= ((((8117378663606538229 && (((-(arr_2 [i_0])))))) ? (((((((arr_3 [i_0]) ? var_10 : (arr_4 [18] [i_1] [i_1])))) ? (arr_2 [i_0 + 1]) : (arr_4 [i_1] [i_0 - 2] [i_0])))) : 8117378663606538229));
            }
        }
    }
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            {
                var_21 = (((arr_0 [i_2 - 2]) ? -65523 : (((arr_11 [i_2 - 2]) ? ((min(6, (arr_10 [i_2 - 1] [i_2 - 1] [i_2])))) : (((var_1 && (arr_6 [i_2] [i_3]))))))));
                arr_12 [i_3 - 3] = (min((((((arr_7 [i_2]) ? (arr_9 [i_3 - 2]) : var_2)) / (arr_7 [i_2]))), (~var_10)));
            }
        }
    }
    var_22 = var_17;
    #pragma endscop
}
