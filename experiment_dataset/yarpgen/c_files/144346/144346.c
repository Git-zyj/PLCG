/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 14930325670627461733;

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_19 = (max(var_19, (((((!(arr_1 [i_0 - 1] [i_0 - 1]))))))));
        arr_3 [i_0] = (min(-25, ((~((((arr_0 [4] [4]) == 105)))))));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] [5] = 3516418403082089883;
        var_20 = (min(var_20, ((min(((max(-4111738966194807496, 3516418403082089883))), (((max(8569916515799222113, -8569916515799222114)))))))));
        arr_8 [i_1] = (((min(-66, (arr_4 [i_1])))));
        var_21 = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_22 -= ((-(((((max(8569916515799222130, (arr_9 [i_2])))) >= (((arr_6 [i_2]) ? var_9 : 8569916515799222113)))))));
        var_23 |= ((max(7, (arr_10 [i_2] [i_2]))));
    }
    var_24 = 3328680834243550446;
    #pragma endscop
}
