/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (21 ? 4294967295 : 56);

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    arr_7 [i_2] |= 255;
                    arr_8 [i_2] [i_1 - 1] = 536870911;
                }
                arr_9 [13] [2] [i_0] = 170;
                arr_10 [i_0] [i_0] = (((16599531431070453678 ? 4548345408697314897 : 255)));
                arr_11 [0] [i_0] = (+-7970729134874320843);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4] [i_5] = ((((((255 ? 4240859707 : -9309))) ? -107 : 11)));
                    arr_21 [16] [0] [i_5] = ((((((11 ? 17858992791470932011 : 1))) ? 60 : 536870897)));
                    arr_22 [12] [i_4] [i_4] [i_3] = -26566;
                }
            }
        }
    }
    var_10 = ((((268435455 ? 59266 : 1))) ? 4780059262182832594 : ((268435455 ? var_7 : 17858992791470932011)));
    #pragma endscop
}
