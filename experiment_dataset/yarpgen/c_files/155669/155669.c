/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!5586);
    var_11 += (((-var_7 ? var_4 : var_1)));
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = -679781157364312589;
        var_13 = (max(var_13, ((((((!(arr_2 [i_0])))) * ((-(arr_0 [i_0]))))))));
        var_14 = (min((~8191), ((var_0 ? var_4 : (1 || var_9)))));
        var_15 = (max(var_15, (((~(~1))))));
        var_16 = var_7;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] &= (-1402156245 >= -1402156265);
        var_17 = (max(var_17, ((min(((max((min(255, -5153315233218545772)), 11))), (max((-32767 - 1), (((arr_4 [i_1] [i_1]) ? var_2 : var_5)))))))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_1] &= ((109 ? 1 : 1));
            arr_10 [i_2] [i_2] = (arr_4 [i_1] [i_1]);
            arr_11 [i_2] [i_2] = ((~(((arr_4 [i_2] [i_1]) ? (arr_5 [i_1] [i_1]) : 12953))));
        }
    }
    #pragma endscop
}
