/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (((((var_8 | (12423430402411985414 >= var_3)))) || ((min((((1 * (arr_1 [i_0])))), (min(2356296509, (arr_0 [i_0]))))))));
        var_21 = 1;

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_22 = (max(var_22, (arr_0 [i_0])));
            var_23 = (max(6145122091713889720, 1));
        }
        arr_5 [i_0] = 1;
        arr_6 [i_0] = (min((((32741 ? 52452 : (arr_1 [i_0])))), ((var_4 ? (arr_1 [i_0]) : 2746841318))));
    }
    #pragma endscop
}
