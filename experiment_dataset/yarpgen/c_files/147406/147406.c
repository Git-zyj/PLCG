/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((!((var_6 || (!-1785607242871874769))))))));
                    var_20 = ((+(max(3214, ((2057152375 ? (arr_0 [i_1]) : 2057152373))))));
                    arr_9 [i_0] [i_2] [i_1] [i_2] = ((((((((arr_4 [i_0] [i_0]) ? 1970111178 : var_0)) > -var_9))) >> (((-var_2 <= (min(26986495, -1785607242871874769)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, ((min(((max(((-(arr_12 [i_3] [i_3] [i_3]))), (-17 / -82)))), (((arr_2 [i_3]) * (arr_10 [i_5]))))))));
                    arr_17 [i_3] = ((((((16264 * var_5) ^ 11032))) ? (((-52 || -11025) ? ((251 << (-1 + 24))) : (((arr_1 [i_5]) ? -58 : var_14)))) : ((((max(16135, (arr_16 [i_3] [i_4] [i_3] [i_5])))) ? ((-80 ? 1682509108 : -47)) : (arr_15 [i_3] [i_3] [i_3])))));
                    var_22 = ((-(max(var_11, 71))));
                    var_23 = (max(var_23, ((((((((max(2237814902, 1))) ? 40 : -1131423945))) ? -38 : 57533)))));
                }
            }
        }
    }
    #pragma endscop
}
