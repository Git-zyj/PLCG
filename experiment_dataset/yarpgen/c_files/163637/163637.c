/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= ((var_10 && (((-(36785 + var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] = ((-8477701822525163353 ? (max((((-31187 + 2147483647) << (((var_2 + 1891668899628056658) - 15)))), (arr_0 [i_1] [i_0]))) : ((194 >> (((min(60365650, 16387785946720446211)) - 60365644))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (!4410349363491296829);
                    }
                    var_12 = (min(var_12, (((~((-(arr_5 [i_0 - 1]))))))));
                }
            }
        }
    }
    #pragma endscop
}
