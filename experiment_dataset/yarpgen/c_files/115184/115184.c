/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_10 = (!9640);
            arr_6 [i_1] [i_1] = var_0;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_11 = ((!((max((arr_1 [i_0 + 1] [i_0 - 1]), (arr_8 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))));
            arr_9 [i_2] [i_2] [3] = 102;
            var_12 = (max(var_12, ((max(var_5, (((1196165538 < (((arr_0 [i_0]) ? (arr_5 [i_0]) : (arr_2 [i_0] [i_2])))))))))));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [i_3] [i_0] = min((min(var_6, (arr_2 [i_0 - 1] [i_3]))), ((((arr_2 [i_0 + 1] [i_0 - 1]) >= (arr_2 [i_0] [i_3])))));
            var_13 = (var_2 - var_5);
            var_14 = (min(var_14, ((max((min(((var_7 ? var_5 : var_6)), var_1)), 1)))));
            arr_14 [i_0] [i_3] [i_0] = ((((max((arr_0 [i_0 + 1]), (arr_7 [i_0 - 1] [i_3])))) ? (!-2147483637) : (min(var_0, 247015678531024069))));
        }
        var_15 = ((2147483624 <= (-1950209645 - 38938)));
        var_16 = var_9;
    }
    var_17 = var_9;
    #pragma endscop
}
