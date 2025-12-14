/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_6 && (((14697672053823867748 ? 226251627 : 65535))))))) ^ (min(var_7, -18))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((3749072019885683858 ? var_8 : 4294967284)));
        var_12 = (max(var_12, ((min((~var_6), ((~(((!(arr_1 [i_0])))))))))));
    }

    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_1] [i_2] [i_2] = (max(((86 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1]))), ((~(arr_4 [i_1 - 1])))));
            var_13 -= (max(-9223372036854775782, 13442237559356315746));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_13 [i_2] = 13;
                arr_14 [i_1 - 1] [i_3] [i_3] |= (min((arr_10 [i_1 - 1] [i_1] [i_1]), 2595886560));
            }
        }
        var_14 ^= ((~(((((arr_6 [i_1] [i_1]) ? var_8 : 3)) & (((~(arr_4 [i_1]))))))));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] = var_5;
        arr_19 [i_4] = 9223372036854775802;
        arr_20 [i_4] = ((~(((((1 ? 4294967284 : 3749072019885683872)) > (arr_8 [i_4] [i_4 - 1]))))));
        arr_21 [i_4] = ((~((((!-11378) != var_2)))));
    }
    var_15 -= (min(14566257314560093037, ((min(var_8, ((max(var_10, -242329347))))))));
    var_16 = ((-55934 ? (((((7 ? 1 : 18659)) << (!15)))) : var_4));
    #pragma endscop
}
