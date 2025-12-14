/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_2, (min((max(7552, 65535)), (var_3 > var_8)))));
    var_11 = (min(var_3, var_5));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [4] = ((!((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = (min((arr_1 [i_0]), (arr_0 [i_0] [i_0])));
        var_12 = (min((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [21])))));
        arr_4 [i_0] = (min(5454, 1));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_13 = ((~(min(((((arr_0 [i_1] [i_2]) > (arr_8 [i_1] [i_2] [i_2])))), (arr_7 [i_2] [i_1])))));
            arr_12 [i_1] = (max(31837, 8928960228703390058));
        }
        var_14 = max(-48, -38);
    }
    var_15 = var_0;
    #pragma endscop
}
