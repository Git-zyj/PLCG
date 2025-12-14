/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = ((((30 >> (((~6279809786245648660) + 6279809786245648691))))) ? (max(var_7, ((728525483 ? var_15 : var_2)))) : (((((32 ? var_5 : 8532)) | ((max(var_10, 2052519025)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] |= (((arr_4 [i_2] [i_1] [i_0]) == (((((~(arr_6 [i_2] [i_1] [i_1])))) ? ((((arr_7 [i_1] [10] [i_1]) < 3566441801))) : (((-326 && (arr_3 [i_0]))))))));
                    var_18 = (arr_0 [i_0 - 2] [i_1]);
                }
            }
        }
    }
    var_19 = ((((-(max(var_13, var_6)))) / -32256));
    #pragma endscop
}
