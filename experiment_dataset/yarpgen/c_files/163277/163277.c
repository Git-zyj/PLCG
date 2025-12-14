/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((((((-440360146 != 7) ? -440360147 : 121)) == (((0 == (440360145 / 2147483647)))))))));
                    arr_8 [i_1 + 2] = 18349010860754062627;
                    var_13 += (((min((-440360146 || 0), ((-440360146 ? 0 : 0)))) > 107));
                }
            }
        }
    }
    var_14 = ((!((((2147483647 > -440360153) & var_3)))));

    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        arr_13 [i_3 - 1] = ((((((-440360160 / 35595) * (min(440360156, 592554772))))) ? ((((((2147483646 ? -440360146 : -440360130))) != 1470011039))) : (max((58482 | -30), 56))));
        arr_14 [i_3] = (29 >= 462098885);
    }
    #pragma endscop
}
