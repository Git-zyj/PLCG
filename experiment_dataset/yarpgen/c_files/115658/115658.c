/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = var_0;

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_7 [i_2] [i_1] [i_0] [i_0] = (((arr_2 [i_1 + 2]) & ((99 & (arr_3 [i_1 + 1] [i_0])))));
                var_16 = (max(var_16, (819165300 <= 38227)));
                arr_8 [i_2] [i_1] [i_0] |= -1;
                arr_9 [i_0] [i_1] [i_2] = ((var_12 ? ((max((((var_4 <= (arr_6 [i_0] [i_1 + 2] [i_2] [i_2])))), 28674))) : -14748036152864501898));
            }
            var_17 = var_3;
            arr_10 [i_1] = (max((max(65535, -6024)), 1));
        }
        var_18 = (var_0 + 24868);
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_13 [i_3] [i_3] |= (max(((((-127 - 1) ? 38227 : 255))), (((arr_3 [i_3] [i_3]) ? var_12 : (arr_3 [i_3] [i_3])))));
        arr_14 [i_3] [i_3] = (min((((!(arr_3 [i_3] [i_3])))), (max(1, 4952013785552767772))));
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_18 [i_4] = ((-((((max((arr_16 [i_4]), (arr_17 [i_4])))) % var_9))));
        arr_19 [i_4] = (max((arr_16 [i_4]), (!var_5)));
        var_19 = (min(7060009906442179807, 18));

        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_20 = var_8;
            var_21 = (arr_22 [i_4] [i_4] [i_5]);
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_25 [i_6] = (arr_6 [i_6] [i_6] [i_6] [i_6]);
        var_22 = var_9;
        arr_26 [i_6] = (min((min(9223372036854775807, (arr_17 [i_6]))), var_4));
        var_23 = -19963;
    }
    var_24 = (max((((!10) == ((122 ? 12122 : var_4)))), (1212751260662842015 == 0)));
    var_25 = var_1;
    #pragma endscop
}
