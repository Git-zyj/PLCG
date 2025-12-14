/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = ((1057209381 >= ((max(((var_3 ? var_6 : var_7)), ((var_7 >> (var_5 + 8890194804095742196))))))));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1057209397;

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] = (((15206819231114561438 - 31) ? ((((arr_5 [i_0] [i_0 + 1]) ? (arr_5 [i_0] [i_0 + 1]) : (arr_5 [i_0] [i_0 + 1])))) : (max((((arr_1 [i_0]) ? 3237757914 : (arr_4 [i_0] [i_0] [i_0]))), (((arr_4 [i_0] [i_1] [i_1]) ? -1217406361 : 1057209408))))));
            var_15 = (((3237757884 ? (arr_3 [i_0]) : (arr_0 [i_0 - 2] [i_0 + 1]))) * (((min((arr_5 [i_0] [i_1]), (0 != 255))))));
        }
    }
    var_16 = (((var_9 + 1057209391) ? ((((((58769 ? var_9 : var_1))) && 2147483638))) : 838096491));
    #pragma endscop
}
