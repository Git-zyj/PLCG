/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((29 ? -1 : 3))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] = ((-1 * (arr_2 [i_1] [i_1] [i_1])));
            arr_6 [i_0] [i_0] [i_0 - 1] = 253;
            arr_7 [i_0] [i_0] = ((var_2 ? 9007190664806400 : -252));
            arr_8 [12] = (min(18437736883044745213, 154));
        }
        arr_9 [i_0] = ((-(((90 || 65535) & (~65535)))));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        arr_14 [i_2 - 1] = (((((238 / var_7) ? 5814884999970700166 : (arr_3 [i_2 - 1])))) ? ((((!var_16) > (!var_1)))) : ((((arr_3 [i_2 - 1]) && var_14))));
        arr_15 [i_2] = ((max(((max(-103, -1))), ((63175 << (50 - 35))))));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_19 [6] [6] [i_3] = 25;
            arr_20 [i_3] [2] [2] = max(((min(((max((arr_17 [i_3] [15]), var_5))), (arr_1 [i_2 - 1] [i_2])))), (((9007190664806414 % 2366) ? (arr_17 [i_2 - 1] [i_3]) : (arr_4 [i_3] [i_3] [i_2]))));
        }
        arr_21 [i_2] = ((+(min((arr_3 [i_2 - 1]), (1 | -105)))));
        arr_22 [i_2] = ((647887213 ? (~7218799576237828120) : ((((((min((arr_13 [i_2]), 124))) == ((-32767 ? 9212 : 2346))))))));
    }
    #pragma endscop
}
