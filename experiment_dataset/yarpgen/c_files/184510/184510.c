/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((~var_4), var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_2] = ((!((min(-1837612650, ((0 ? 9223372036854775807 : -1899106787)))))));
                    arr_9 [i_0] [i_2] = (max((!2147483647), 22));
                    arr_10 [i_2] [i_2] = (max((((51408 ? -39 : 771710760)), -0)));
                    arr_11 [i_0] [i_2] = 2009973549;
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_20 *= (max(3768057265, (((~(!1837612649))))));
                    arr_14 [i_0] [i_0] [i_3] = ((0 != ((min(0, -1899106787)))));
                }
                var_21 -= ((!(((~(-9223372036854775807 - 1))))));
                var_22 = (min(-13, (max((832256231 >= 2657871581), 4294967282))));
            }
        }
    }
    #pragma endscop
}
