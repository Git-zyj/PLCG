/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_17 = ((var_4 < (max(246, ((min(var_16, -1721)))))));
            var_18 |= ((((min((~var_14), (arr_4 [10])))) - var_12));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_19 = (max(var_19, var_16));
            var_20 = (min((max(18, var_0)), var_8));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_10 [i_3] [22] = (min(var_8, var_10));
            var_21 = 14;
            var_22 = (((~(arr_8 [i_0]))));
            var_23 = (min(var_23, ((max(((var_15 | (arr_8 [i_3]))), ((-(max(15697, -1080127735)))))))));
        }
        var_24 |= (min(-8033392684010243625, 20));
    }

    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_25 *= (arr_7 [i_4] [i_4] [i_4]);
        var_26 &= (17873551610949698713 != -33);
        var_27 = (max(var_27, ((max(473653419, (arr_11 [8]))))));
    }
    #pragma endscop
}
