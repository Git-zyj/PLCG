/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((13164280338511972415 | var_2) ? var_10 : var_17))) ? var_4 : (((var_7 * 16241960345215829814) & var_7))));
    var_21 = ((var_12 != (((6821695884237302594 % 3932160) >> ((var_1 ? var_7 : var_17))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_22 = 384;
                    var_23 = (36624 ^ 3098897445100046024);
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_24 = ((max((((var_4 >> (-3098897445100046024 + 3098897445100046045)))), (arr_5 [i_0 + 1]))));
                    var_25 = ((((!((((((arr_8 [i_3] [i_1] [i_3] [i_0]) + 2147483647)) >> (140480131 - 140480123)))))) ? (((((arr_5 [i_0]) < (30162 | 9569380704936322223))))) : ((var_10 ? (((arr_4 [i_3] [i_3]) ? var_10 : (arr_2 [i_0] [10]))) : ((((arr_2 [i_3] [19]) | var_13)))))));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_26 = (arr_7 [i_1]);
                    var_27 = (((((18446744073441116160 ? 27858 : 1))) || 49576));
                    var_28 = (((3409441456 || 124) <= ((var_13 ? (arr_1 [i_4]) : var_19))));
                    var_29 = (((max(var_18, (arr_5 [i_0 - 1]))) != (((~(arr_3 [i_0] [i_0 - 3]))))));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_30 = (((max(((max(var_13, (arr_2 [i_0] [i_1])))), var_0)) ^ (arr_3 [i_0 + 1] [i_1])));
                    var_31 = (((((((((arr_11 [i_5] [i_1] [1] [i_0]) ? 5282463735197579226 : var_15)) >= -3098897445100046024)))) <= ((((9569380704936322209 << (63856 - 63814))) >> 25))));
                }
                var_32 &= (((var_9 - (max(3318801872, 64)))));
            }
        }
    }
    var_33 = var_12;
    #pragma endscop
}
