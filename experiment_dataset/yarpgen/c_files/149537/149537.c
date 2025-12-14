/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 *= (min(var_11, (((~var_10) | (arr_3 [i_0] [i_0])))));
                    var_17 = (max(18446708889337462784, ((((arr_7 [i_2] [i_1] [6]) + (max(360254524, 120922048)))))));
                    var_18 = 4174045232;
                }
                var_19 = (((var_3 && 67108863) ? var_10 : 120922064));
            }
        }
    }
    var_20 = (max((var_3 & -1982679481), 4174045225));
    #pragma endscop
}
