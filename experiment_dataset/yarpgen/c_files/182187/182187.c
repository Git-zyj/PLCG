/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (!-var_10);
                var_12 ^= (((0 | 65535) % ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2]))))));
                var_13 = (min(var_13, (((((!(((var_9 ? 6 : 165))))) ? (arr_4 [i_0] [i_1 - 1] [i_0]) : (min((1 | 15317), 3)))))));
                var_14 = ((1441783529 << ((((var_6 ? var_4 : ((16368 ? var_4 : 15315)))) - 6736))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [i_2] = 3;
        var_15 = var_0;
    }
    for (int i_3 = 2; i_3 < 12;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_16 = (max(-15330, 1));
                    var_17 = (((min(3486, 32760))));
                    var_18 = (arr_0 [i_4]);
                    var_19 = (65511 >= 3886596186);
                }
            }
        }
        arr_16 [i_3] = (((((var_3 ? (arr_15 [i_3]) : 5230))) ? ((min((arr_15 [i_3]), (arr_15 [i_3])))) : ((max((arr_15 [i_3]), var_10)))));
        var_20 = (min(((max((arr_1 [i_3 + 1] [i_3 + 1]), (min(-16360, var_2))))), (((((0 ? var_5 : (arr_3 [i_3 - 2] [19])))) / (-4138882183822654910 / 16128)))));
        var_21 += (8905 / (max(-54702, 8917)));
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_22 = ((((var_2 ? (arr_20 [i_6]) : 63)) % 203));
        var_23 = (((arr_11 [i_6 + 3]) * var_5));
    }
    #pragma endscop
}
