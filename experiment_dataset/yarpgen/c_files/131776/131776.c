/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (((-(arr_1 [i_0]))));
        var_19 = (min(var_19, ((min(9160765017035508308, (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = (((arr_4 [i_1] [i_1]) ? ((((arr_3 [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))) : ((((((arr_4 [i_1] [i_1]) << (19465 - 19465)))) ? (arr_3 [i_1]) : (((arr_4 [i_1] [1]) ? var_9 : 204))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_20 = (min(var_20, (((!((min((min(9285979056674043310, (arr_3 [i_1]))), (6159520301009802147 + 9160765017035508306)))))))));
            arr_10 [i_1] [i_1] [i_2] = var_14;
            arr_11 [i_1] [i_1] [i_1] = ((!((((arr_9 [1] [i_2]) >> (1 != var_11))))));
        }
        arr_12 [i_1] [i_1] = (((min(9285979056674043300, 2407887276985553305)) / (((var_16 - (min(-7902636863546266907, var_2)))))));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = (min(((268435440 << (-8283442723491713472 + 8283442723491713494))), (((1 == ((min(var_4, var_4))))))));
        arr_18 [i_3] = 255;
        arr_19 [i_3] [i_3] = (((((((-1306644884 / 29161) < (!var_4))))) < ((-(((arr_6 [8]) ? 1 : (arr_16 [i_3])))))));
    }
    var_21 = (((min((!var_5), (min(var_0, 9563682940886934723)))) * ((min((var_4 | var_16), ((min(217, 122))))))));
    #pragma endscop
}
