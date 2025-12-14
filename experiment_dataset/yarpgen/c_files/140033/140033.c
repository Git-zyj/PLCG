/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 += ((-4696966208776169699 ? 12277 : 53557));
                    arr_7 [i_1] [i_1] [i_1] [i_1] |= (((((31596 ? (((((arr_6 [i_0] [i_1] [i_2] [0]) == var_4)))) : 1872706270))) ? (((~var_4) ? 13812 : 2422261026)) : ((25538 % (min(var_5, 1))))));
                    var_12 = (max(var_12, ((((((~1922232511) != var_8)) ? ((((~var_7) == var_2))) : ((((max(14, (arr_4 [i_1] [i_2])))) ? ((max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [10])))) : (((-1388155195 + 2147483647) << (((arr_0 [i_1]) - 12224740783918968562)))))))))));
                }
            }
        }
    }
    #pragma endscop
}
