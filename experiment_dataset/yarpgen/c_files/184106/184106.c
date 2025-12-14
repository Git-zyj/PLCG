/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
        {
            var_18 &= ((((min((arr_5 [10]), var_2))) + (arr_1 [i_1 + 1] [i_0 + 1])));
            var_19 = (arr_0 [i_1] [i_0 + 2]);
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (((((3570071237687922734 ? var_3 : 1954301751590161730))) ? (var_14 + 0) : ((min(1, (arr_2 [i_0 + 2]))))))));
            var_21 ^= (((arr_8 [i_0 - 1] [i_2 - 1] [i_2 + 4]) ? (var_15 && 1) : var_14));
            var_22 = ((!(((-((var_17 ? var_10 : (arr_2 [i_2]))))))));
            var_23 = (((arr_5 [i_2 + 3]) && 1));

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                var_24 = (((((~(arr_2 [i_0 + 1])))) ^ ((var_1 ? var_1 : (arr_8 [i_0] [12] [i_3])))));
                arr_14 [10] [8] [i_0] [i_0] = (min(((((var_14 ? (arr_3 [i_0] [i_0 - 1]) : var_17)) | (arr_9 [i_2] [i_2 + 1] [i_3 + 2]))), (arr_9 [i_0 + 1] [i_2 + 2] [i_3 + 1])));
            }
        }
        arr_15 [i_0] = ((((((arr_0 [i_0 - 1] [i_0 + 1]) * (arr_0 [i_0 + 1] [i_0 + 2])))) ? 495714350 : ((var_6 ? 1 : 2166057136))));
    }
    var_25 = (min(var_25, (((3064791611 ? 9223372036854775798 : 0)))));
    var_26 = (((3064791611 ? 5932635406941015329 : 1)) + -5711069054448616878);
    #pragma endscop
}
