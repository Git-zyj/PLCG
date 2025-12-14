/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 ^= (max(((9223372036854775807 ? var_5 : -1973155767739824364)), (max(8227532131416062716, (!1973155767739824386)))));
            var_14 = max((((((max(-6620, var_4))) ? ((266867908 ? -1 : var_4)) : (arr_5 [i_0])))), 4875105829982302658);
        }
        arr_8 [i_0] = (((arr_5 [i_0]) ? 2071609209 : (1973155767739824364 % 1)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_15 = ((!((((arr_11 [8] [i_0] [i_3]) - (arr_11 [i_3] [i_0] [i_0]))))));
                    arr_15 [i_0] [i_0] = (max((((arr_4 [i_3]) ? (arr_4 [4]) : (arr_4 [i_2]))), (arr_4 [i_0])));
                }
            }
        }
        var_16 = ((-32106 ? (!12293218157563324612) : 4032));
    }
    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        arr_18 [i_4] [8] = (((arr_14 [i_4 - 2]) ? ((1 ? 0 : 3447588872)) : (((arr_3 [i_4 + 2] [i_4 - 2]) ? (arr_2 [1]) : 847378444))));
        arr_19 [i_4 - 3] = 221;
    }
    #pragma endscop
}
