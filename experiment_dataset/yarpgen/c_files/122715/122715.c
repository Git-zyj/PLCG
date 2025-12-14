/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (min(30, var_13));
                arr_6 [i_1] [i_1] [i_1] = max(((((arr_0 [i_0]) ? 3823387484 : (arr_1 [4] [4])))), (min((min(3823387474, 32)), ((12 ? 4294967295 : (arr_1 [19] [i_1 - 1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((min(-6464857639813640226, (arr_12 [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_3]))));
                                var_19 = (~23083);
                            }
                        }
                    }
                }
                arr_16 [i_1] = ((max(111, (max(-1101470522437865962, var_7)))));
                var_20 &= ((((max((arr_2 [i_0 - 1]), var_15))) && 11064408147480748465));
            }
        }
    }
    var_21 = var_13;
    var_22 = (min(var_22, (~var_11)));
    var_23 = (var_4 * var_2);
    #pragma endscop
}
