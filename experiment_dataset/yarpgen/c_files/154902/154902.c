/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((~(max((!var_9), 18446744073709551607))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (((arr_0 [i_0]) != (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : (~126))), ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((max(var_11, (arr_1 [7])))) : (arr_1 [i_0])))));
    }
    var_17 = var_4;
    var_18 = ((var_3 - (max((5543070865876722368 + var_9), var_3))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                var_19 -= (((((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 12903673207832829271)))) + ((-(min(3212, 10))))));
                var_20 = ((((((!(arr_3 [i_1]))))) <= (max(var_2, (min(var_5, (arr_6 [i_1])))))));
                arr_9 [i_1] [i_1] = max(1, (arr_3 [i_2]));
            }
        }
    }
    #pragma endscop
}
