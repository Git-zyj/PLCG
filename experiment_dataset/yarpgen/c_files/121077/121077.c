/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((50536116 / 110) ? -3 : (max(var_8, -1)));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!((((arr_2 [i_0 - 1] [i_0 - 1]) ? 4992284481192505351 : (-2147483647 - 1))))));
        var_16 = (min((((arr_0 [i_0 - 1]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))), ((((-(arr_0 [1]))) ^ (8003926021504333360 && -195979145349269214)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = var_12;
            var_18 = (max(var_18, ((min((((((2356846058319811892 ? 259305752 : -100))) ? (124 == 50536120) : (arr_9 [i_2]))), (((((min(1, 6))) * -50536123))))))));
            arr_10 [i_2] |= (min((((!(((~(arr_6 [i_2]))))))), (((~0) ? -131282758 : -8733101939483459193))));
            var_19 &= min(0, 38);
        }
        arr_11 [i_1] = (max(-3318169897430400222, 101));
        arr_12 [i_1] = (arr_4 [i_1] [i_1]);
        arr_13 [i_1] = (min(((((max((arr_5 [i_1]), 1)) > 18))), ((((min((arr_7 [i_1] [i_1] [i_1]), var_0))) ^ (arr_7 [i_1] [i_1] [i_1])))));
    }
    var_20 += -470907549856120961;
    #pragma endscop
}
