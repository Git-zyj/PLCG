/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_2] = ((var_5 | (((((11906826564747955911 ? 1 : (arr_5 [i_0] [i_0] [i_0])))) ? (((arr_0 [1]) ? 1 : (arr_4 [i_0] [i_0] [i_0] [i_0]))) : (arr_3 [i_0])))));
                    var_14 = (min(((((max(var_8, var_2))) ? ((((var_13 > (arr_5 [i_0] [1] [i_0]))))) : var_1)), (min((arr_2 [i_2] [i_1]), (max(18446744073709551615, var_12))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_3] = ((17447995810368127311 ? 13802248318306358227 : 18446744073709551615));
                var_15 = (((13802248318306358209 >> (((min(var_9, var_2)) - 761443448723934748)))));
            }
        }
    }
    var_16 = 17447995810368127322;
    #pragma endscop
}
