/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (max(var_6, var_0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 |= 23761;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] = 32761;
                        var_12 -= var_6;
                        var_13 -= (max((-23762 <= 10731), (((!3) % (-457226555 - -52)))));
                    }
                    arr_13 [i_0 - 1] [i_1] [i_2] [i_2] &= (min((14408 == var_7), ((((-23765 ? var_1 : var_4)) >= var_1))));
                    var_14 |= (((((var_8 << ((((23761 ? 457226558 : var_4)) - 457226546))))) || (((-23754 ? ((8 ? var_8 : var_9)) : -1619373703798740699)))));
                    var_15 -= 65531;
                }
                var_16 = (min(var_16, ((min(57344, ((14303 ? ((-457226559 ? 65535 : 0)) : var_6)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 4; i_4 < 20;i_4 += 1)
    {
        var_17 &= (~4);
        var_18 *= ((-20463 - (3312628876362704737 + 32753)));
        var_19 = -1291391362;
    }
    #pragma endscop
}
