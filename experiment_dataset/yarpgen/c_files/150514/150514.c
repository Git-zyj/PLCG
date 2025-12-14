/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_0, (((!(!153))))));
    var_14 = var_8;
    var_15 += (!var_6);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = ((+((((min((arr_2 [i_0]), 1))) ? (1 - 0) : var_3))));
                var_17 = min((((((arr_4 [i_0] [i_0]) ^ 140)) | (((~(arr_1 [i_0])))))), ((max(103, (arr_2 [i_0 - 1])))));
                arr_5 [i_1] [i_1] = ((!(((((14150493708187696394 ? 30304 : 14)) >> (((((arr_1 [i_0]) - -321639060)) - 321609678)))))));
                var_18 -= ((((!(((arr_2 [i_0 + 2]) == (arr_1 [i_1]))))) ? (((!(~145)))) : -var_7));
                arr_6 [i_0] [i_1] = ((((var_12 ? var_3 : -30304)) >= (arr_4 [i_0 + 1] [i_0 + 2])));
            }
        }
    }
    #pragma endscop
}
