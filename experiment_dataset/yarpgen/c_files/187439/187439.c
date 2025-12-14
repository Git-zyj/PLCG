/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_19 |= (min((max(0, 148)), 154));
        var_20 = (max(var_20, 47));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_21 = (((((arr_3 [i_1]) + 1)) >= ((((arr_1 [i_1] [i_1]) == -158016684)))));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_22 = (10860 == var_4);

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_10 [i_1] [i_1] [i_1] [i_3] = ((((((min(16, 226))) & (120 != 1))) + (((var_12 > ((var_6 ? var_13 : 8)))))));
                var_23 = ((((2502713690 + (5544 / 22187))) % 2141859097));
            }
        }
        var_24 *= (((((-1 ? 1906053045 : (arr_6 [i_1] [i_1 + 2])))) == (((((238 ? 7740371606744850561 : 1))) ? (1486435540 && 2142962797) : (arr_9 [i_1] [i_1] [i_1 + 3])))));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_25 = (max(var_25, ((max((76 / 1421557230), ((4294967295 ? 5547810648259539508 : 1033)))))));
        var_26 *= (((((65535 + 251) || 2154028357)) ? 7738 : 32767));
    }
    var_27 += (((var_6 & 632803153974378654) ? (max(2743406791, 4294967295)) : var_2));
    #pragma endscop
}
