/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((var_13 ? 111 : var_8));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((min((arr_0 [i_0]), 7)));
        arr_5 [i_0] [i_0] = 16;
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_17 *= ((16 ? (((((-1978 ? (arr_7 [i_1 - 1]) : -4))))) : 1071837494));
        var_18 ^= ((((((((!(arr_6 [i_1]))) || ((max(5367362242575657178, 390933147))))))) + (min((arr_6 [i_1 + 1]), 1071837501))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    arr_13 [3] [3] = ((((((arr_9 [i_1 - 1] [i_1 + 1] [i_1 + 1]) / (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1])))) == (max((arr_9 [i_1 - 1] [i_1] [i_1 - 1]), -6679874912634750773))));
                    var_19 = (min(var_19, (((((max((min(-6679874912634750773, 3810636558144254618)), ((max((arr_6 [i_1]), (arr_11 [i_1] [i_1] [i_1] [i_1]))))))) ? (-113 < -9158983761728186441) : ((-5367362242575657179 ? 0 : ((-1721397935 ? -6679874912634750765 : 3810636558144254611)))))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_20 = ((-390933147 ? 1071837506 : (-2147483647 - 1)));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_21 += 4294967295;
            var_22 |= (--24567);
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6] [i_6] = ((5367362242575657178 ? -404341840 : 17289131225898161645));
        var_23 = ((((arr_10 [i_6]) ? -19 : 28201)) == (390933147 / 36405));
    }
    #pragma endscop
}
