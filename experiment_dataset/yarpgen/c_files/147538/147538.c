/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_6;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_19 -= ((20 >> ((((653736280 >> (64849 - 64842))) - 5107292))));
        var_20 = ((((246 + (37 ^ -86))) / (0 || 12)));
        var_21 = 6547762496508167066;
    }

    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_7 [10] &= ((((((63978 || 3665655451) == 246))) == ((((1 | 107) || 64858)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    arr_13 [i_1] [16] &= 64858;
                    var_22 = (min(var_22, (((((29979484 ? 13729665613972273120 : 64863)) - (((228 ? 7 : 408132810))))))));
                }
            }
        }
    }
    var_23 = ((((((1564645951 && 0) && var_8))) / 248));
    #pragma endscop
}
