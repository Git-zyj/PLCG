/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 15852;
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = var_1;
        arr_2 [i_0] = (((((arr_0 [i_0] [8]) ? (arr_1 [i_0] [i_0]) : 1076540657))) ? (~49683) : 49684);
        arr_3 [i_0] = -21659;
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 = ((((var_9 % (arr_5 [i_1 + 1] [1]))) << (-49683 + 49685)));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_8 [i_2] = ((((-(((arr_4 [i_2]) ? 15865 : var_7)))) < var_4));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_16 = ((-49671 - (((arr_9 [i_1] [15] [15] [i_1 + 1]) - (arr_9 [17] [i_1] [i_1 + 3] [i_1 + 3])))));
                var_17 = (((((-(~15865)))) ? -48 : 1179919044));
                arr_11 [1] = (min(-57, (!12589)));
            }
            arr_12 [i_1] = (arr_6 [i_1] [i_1]);
        }
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            var_18 = ((~15865) && ((((-334740126 % 207) / ((-1501882886 ? 15878 : -4715))))));
            var_19 = (((((var_1 >= var_5) - 1)) | (!0)));
        }
    }
    var_20 = ((~(max(((8681568346321918053 ? 42604 : var_8)), (4715 % -2147483619)))));
    #pragma endscop
}
