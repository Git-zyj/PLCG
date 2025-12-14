/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_10 -= (max((arr_4 [i_0 - 2]), (!533023387492175474)));
                    arr_7 [i_1] [2] &= (((((min(((533023387492175469 ? var_8 : var_5)), (arr_5 [i_0 + 2] [i_0] [i_0] [i_0]))) + 9223372036854775807)) >> ((17913720686217376141 ? (((arr_2 [i_0 - 2]) / 6244)) : (7069 < 17913720686217376141)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_11 = -983039652;
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_0] [i_0] = (((((~(var_3 > 3496089679)))) + 517833087));
                            }
                        }
                    }
                }
            }
        }
    }
    var_12 = ((var_4 ? var_6 : (min(533023387492175446, (var_1 ^ 530382857)))));
    var_13 = (((((var_0 ? ((var_8 ? var_0 : var_7)) : var_9))) ? var_7 : ((~((var_2 ? var_9 : var_8))))));
    var_14 = (max(var_0, 17913720686217376145));
    #pragma endscop
}
