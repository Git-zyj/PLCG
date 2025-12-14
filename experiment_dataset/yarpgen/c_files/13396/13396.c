/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(1, ((-(var_9 * 6326079134882024924)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_16 -= (~-1);
            arr_6 [i_0] [i_0] [i_1] = 1;
        }
        for (int i_2 = 1; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_17 = (min(((1 ? (arr_3 [i_2] [12] [i_2 + 1]) : (arr_9 [i_2] [i_2]))), ((1 ? 128 : (((!(arr_2 [i_0]))))))));
            var_18 ^= ((-((1 ^ (-127 - 1)))));
            var_19 = ((((((!(((18907 ? 7745933412512073695 : 0))))))) + (((arr_10 [i_0] [i_0]) ? (max(var_4, (arr_5 [0] [0] [0]))) : 18902))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
        {
            arr_13 [i_3] [i_3] [i_0] = ((-((129 ? 18898 : -3))));
            var_20 = (1 - 11);
        }
        arr_14 [i_0] = 14648;
        var_21 = (min(var_21, (((((!(arr_5 [2] [i_0] [i_0]))) ? -4 : ((((((min(-7, var_1))) + 2147483647)) << (((((63050394783186944 != (arr_10 [i_0] [i_0])))) - 1)))))))));
    }
    #pragma endscop
}
