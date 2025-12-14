/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = ((~(min((arr_3 [i_1]), ((18235730116605735628 ? 2489485083655669858 : 175))))));
                var_21 = (min(var_21, (((~(arr_4 [i_0]))))));
            }
        }
    }
    var_22 = ((((((-18044 && 14716) - var_11))) ? var_17 : var_12));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] = (((((!(((~(arr_9 [2] [21] [13]))))))) * -12086));
                arr_13 [i_2] [i_2] [i_3] = (max((!12086), (arr_7 [i_2] [i_3])));
                arr_14 [12] [12] [7] = (max(162, 1348659520));
                arr_15 [i_2] [i_3] [i_2] = (arr_11 [i_2] [i_3]);
                arr_16 [i_2] = ((((!(((var_15 ? (arr_9 [i_2] [i_2] [i_2]) : (arr_9 [i_2] [i_2] [7])))))) && (arr_11 [i_2] [i_2])));
            }
        }
    }
    #pragma endscop
}
