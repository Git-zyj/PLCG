/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1998829544 ? 150 : 1));
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 |= (max((max((((arr_0 [i_0]) ? (arr_1 [i_0]) : 4293536802)), ((max((arr_0 [i_0]), (arr_0 [i_0])))))), (((~(((arr_1 [i_0]) + (arr_1 [i_0]))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 -= (((((-(max(var_8, 9511001120588908122))))) ? ((((arr_3 [i_0] [i_1]) ? (var_5 + var_5) : ((var_8 ? 0 : 63))))) : ((~(max(120, var_0))))));
            var_14 = (((((-(arr_1 [i_1])))) ? ((((min(var_4, 3302969617))))) : (((arr_2 [i_0] [i_1]) ? (var_4 - 4293536802) : ((min(var_7, (arr_1 [i_1]))))))));

            for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
            {
                var_15 *= var_4;
                var_16 = (max((((~874983122) + 8761679418808126492)), 991997675));
                var_17 = ((((var_1 ^ (arr_5 [i_0] [i_2] [i_2 + 1]))) % (~0)));
                var_18 = ((-((1 ? (arr_3 [14] [i_2 + 1]) : var_0))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
            {
                arr_8 [i_3 + 1] [i_1] [i_0] = (8935742953120643493 | var_6);
                arr_9 [i_0] [i_1] [i_3] = (((arr_1 [i_3 + 1]) ? 0 : (arr_7 [i_0] [i_0] [i_3 + 1] [i_0])));
            }
        }
    }
    #pragma endscop
}
