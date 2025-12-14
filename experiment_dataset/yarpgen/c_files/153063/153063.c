/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 |= ((((1 < 0) >> (min(var_2, 5572753747212188751)))) < 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 += ((~(max((arr_6 [i_1] [i_1]), (((217 ? -112 : 1)))))));
                arr_8 [i_1] |= ((-0 ^ ((((255 ? -95 : 30528))))));
                var_13 = ((((!var_5) >> (((~-5382577485917803747) - 5382577485917803732)))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_13 [i_0] [i_2] [i_2 - 1] [1] = (max(var_8, 5158942387568925200));
                    var_14 = (max(var_14, (arr_7 [i_1] [i_1] [i_1])));
                }
            }
        }
    }
    var_15 = var_3;
    #pragma endscop
}
