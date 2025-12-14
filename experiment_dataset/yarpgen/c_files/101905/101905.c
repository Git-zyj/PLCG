/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 &= ((~((((28513 ? 1 : -28514)) << (var_14 - 15823763209902374304)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = -67108863;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_20 = (((((-28526 ? -11616 : 3545369646))) ? ((-28549 ? (65535 == 11615) : ((0 ? 1001814174 : 1)))) : ((-28519 ? 9 : -1))));
                        var_21 = (((((!10777) ? (~1) : ((0 ? 28514 : 0)))) <= (1 != -23)));
                    }
                    for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        var_22 = (min(var_22, 8));
                        var_23 = ((((1 ^ (1357326760 >= 0))) >> (((((((-22380 ? 1 : 0))) ? -10 : 0)) - 4294967267))));
                    }
                    for (int i_5 = 3; i_5 < 13;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_0] = ((3253355429573089212 / ((((((1026519395927407156 ? 585263042 : (-9223372036854775807 - 1)))) ? -6424 : -4294967295)))));
                            var_24 = (max(var_24, (~585263049)));
                            var_25 = (max(var_25, -1));
                        }
                        for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_26 ^= (607160182 <= 28519);
                            var_27 = (min(var_27, 230));
                            var_28 = (((!-73143848950893960) ? ((-(51917 * 0))) : (((6707242473438210369 & -73143848950893964) ? 217 : ((0 ? -47 : 12424))))));
                            var_29 = ((((((32767 ? 1348888072 : 43) != (-1 & 581927494))))));
                        }
                        var_30 = (min(var_30, (((((~((3709704253 ? 585263061 : 196682846)))) << (585263024 > 3253355429573089211))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
