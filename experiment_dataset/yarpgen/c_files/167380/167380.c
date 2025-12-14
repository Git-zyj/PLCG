/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(112, (((-32767 - 1) - 65535))));
        arr_3 [i_0] = (((((1 ? 18446744073709551615 : 0))) ? ((((arr_0 [i_0]) ? (-32767 - 1) : (arr_0 [i_0])))) : 8));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [14] [i_2] [i_2] = (max(var_10, ((max((((arr_10 [12] [i_2] [i_2]) >= (arr_7 [i_2]))), (arr_6 [i_1 - 2] [i_2]))))));

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                arr_14 [i_2] [i_1] = (min((arr_8 [i_3]), (arr_13 [i_2] [i_3])));
                var_11 = (max(((1 + (arr_7 [i_1]))), var_3));
                var_12 = ((+(min((-32742 || var_4), 0))));
                arr_15 [i_1] [i_2] [i_3 - 1] = (arr_6 [i_3 - 1] [i_2]);
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_19 [i_1] [i_1] [18] = var_1;
                var_13 = (max((((~(arr_7 [i_1 - 2])))), (min((((var_7 >> (((arr_18 [i_4] [i_1 - 2]) - 5471142900888463047))))), ((18446744073709551615 ? 1 : 0))))));
            }
            arr_20 [i_2] [i_1] [i_2] = (arr_12 [i_1] [i_2] [i_2]);
            arr_21 [i_1] = (max(139, (max(4294967295, 0))));
        }
        var_14 = ((((((max(32767, 0))))) && ((min((arr_4 [i_1 + 1]), (arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 2]))))));
        var_15 = (min(((((arr_9 [i_1 + 1]) ? ((22 ? var_4 : 15)) : (((0 ? 65535 : (arr_9 [i_1]))))))), var_2));
        var_16 = (((((((((arr_13 [i_1] [10]) ? 18446744073709551587 : (arr_9 [i_1])))) ? (((min((arr_10 [1] [1] [i_1 - 2]), (arr_9 [i_1]))))) : (((arr_8 [i_1]) ? var_8 : 18446744073709551608))))) ? -var_8 : 255));
        var_17 = (min(var_17, var_6));
    }
    var_18 = ((2 || ((4 != ((min(-1, var_5)))))));
    #pragma endscop
}
