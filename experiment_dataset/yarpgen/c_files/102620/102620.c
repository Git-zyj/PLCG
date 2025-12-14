/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-110 ? (((((-132294121 ? -132294113 : 1))) ? -498760885 : -423526620)) : 29499));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = ((~((max((arr_0 [i_0]), (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_1] [i_1] = ((132294107 + (((!(arr_1 [i_1]))))));
            var_21 = (max(var_21, ((var_14 + ((((((arr_1 [i_1]) ? 1 : var_6)))))))));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                var_22 = ((498760884 ? ((4021308974 ? var_17 : (arr_2 [i_0]))) : (arr_2 [i_0])));
                var_23 += 8585501819626943234;
                arr_8 [i_1] = (((arr_3 [i_1] [i_1] [i_2]) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 3]) : (arr_7 [i_2 - 2] [i_2] [i_2 + 1] [i_2 - 2])));
                var_24 = var_11;
            }
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_12 [i_0] [i_0] [i_3] = (min(((0 ? 2455347645 : -1827714455)), (((1 != (arr_2 [i_0]))))));
            var_25 = min((max((arr_6 [1] [1] [i_0]), (arr_6 [i_0] [i_3] [i_3]))), (((-498760893 ? var_0 : (arr_5 [i_0] [i_3] [i_3] [i_3])))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_26 = (min(var_26, (((max(var_0, var_6))))));
            arr_15 [i_0] [12] [12] = (min((((var_14 ? 1 : var_7))), ((349065366 ? 12849727263533401721 : (((4021308994 ? 7224396770460309024 : 1)))))));
            arr_16 [i_0] = (~var_1);
        }
        var_27 = ((60191 ? var_0 : ((~(min((arr_11 [i_0]), var_1))))));
        arr_17 [i_0] = (arr_6 [i_0] [i_0] [i_0]);
    }
    var_28 = (var_8 || var_0);
    var_29 = ((((max((min(0, var_9)), var_11))) ? (var_5 % var_12) : ((~((-112 ? -110 : var_8))))));
    #pragma endscop
}
