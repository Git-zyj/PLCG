/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_1 ? -1 : var_9)))) ? (((min(var_9, (min(var_4, var_7)))))) : (max((var_2 * var_2), (var_3 / 127))));
    var_11 = 7851628300071971695;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (min(((max(var_0, (-7851628300071971695 || -7851628300071971696)))), (min(((var_1 ? var_2 : var_0)), (var_1 >> var_2)))));
        var_12 = (min((1470479744 + 67), var_9));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_13 = 2541355709;
            var_14 = (min(var_14, ((max(((max(var_7, var_2))), (min((arr_8 [i_2 - 2] [i_2 - 2] [i_2]), (arr_5 [i_2 - 1] [i_2 - 2]))))))));
            arr_9 [i_2] = var_8;
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_15 = (min(var_15, (((25 ? -4831125093318947652 : 100)))));
            var_16 = ((max(-7786, 7851628300071971708)));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            var_17 = (min(var_17, ((max(-32767, ((var_3 ? (min(var_9, 7851628300071971696)) : (((((arr_6 [i_1] [i_4]) != var_8)))))))))));
            var_18 = ((var_9 || ((min((((var_7 && (arr_12 [i_1] [i_4] [i_4])))), 122880)))));
            var_19 &= -617582100;
        }
        var_20 = var_4;
    }
    #pragma endscop
}
