/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (-9223372036854775807 - 1);
                arr_6 [4] [13] [i_0] = (((((((~(arr_0 [i_0])))) != (min((arr_3 [i_0]), (arr_3 [i_0]))))) ? (max((arr_1 [12]), (!var_0))) : ((((((43368 ? 9536144964101699587 : 5048202063410624506)) < (-9223372036854775807 - 1)))))));
                arr_7 [i_0] [i_0] = ((!(3431809183 - 274912661)));
            }
        }
    }
    var_14 = (((max((max(4308830065969176809, var_0)), (min(var_12, var_10)))) >= var_12));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                var_15 = (((arr_12 [i_3 + 1] [8] [i_3]) | ((min((arr_12 [i_3 - 1] [5] [i_3]), -22816)))));
                arr_14 [i_2] = (min(3417307767, 82));
                var_16 = var_11;
                arr_15 [i_3] [i_2] = (((!8832460169397908588) | (min((arr_2 [i_2] [14]), (((arr_2 [i_2] [i_2]) % 2771122466))))));
            }
        }
    }
    var_17 = (max((((var_0 ? (min(var_12, var_1)) : (((var_12 >> (var_7 - 12899743541279278552))))))), ((((max(var_2, var_9))) ? var_7 : var_2))));
    #pragma endscop
}
