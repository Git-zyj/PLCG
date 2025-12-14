/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_1 ? var_8 : 5308330106880088347))) | -1739039290));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 -= ((((!(~1130738240292736938)))));
        var_15 = (max(var_15, (((!(!-4657))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_16 = ((!(!var_6)));
        arr_7 [i_1] [i_1] = var_4;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_17 = ((((((var_11 >= -4659) << (4657 - 4632)))) && 4664));
        arr_11 [i_2] [i_2] = (!1);
        var_18 += ((~((var_6 / (arr_9 [i_2])))));
    }
    var_19 = (min(var_19, ((-var_6 ? -4665 : (((!(!23))))))));
    var_20 = (+-4653);
    #pragma endscop
}
