/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (4926217285719385979 <= 19581);
        arr_4 [i_0] [i_0] = (~1);
        var_13 = ((-1503802518 ? 1 : 45957));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        var_14 = (((((arr_5 [i_1 + 1]) | var_9))) ? (arr_0 [i_1 - 3]) : (142 / 3));
        arr_8 [6] = (175 >> 0);
        var_15 = (min((+-1143396433), (min(1, (1 - 46673)))));
        var_16 = (-(((arr_2 [i_1]) % var_2)));
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            var_17 = (min(var_17, ((((arr_10 [i_3]) ? (((((-1933289655 % 9094099531306343861) < (arr_12 [i_3 + 1] [i_3 + 1]))))) : (max(((((arr_9 [i_2]) ^ var_12))), (min((arr_13 [i_2] [4] [i_3]), var_7)))))))));
            arr_15 [i_2] [9] [14] = (((arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 1]) * (-48 / 7883954891129046244)));
        }
        arr_16 [i_2] = (arr_9 [i_2]);
        arr_17 [i_2] [i_2] = (((((4926217285719385953 ^ -4926217285719385950) + 9223372036854775807)) << ((((((-(arr_10 [i_2]))) + 871)) - 37))));
    }
    var_18 = (min(var_18, var_1));
    #pragma endscop
}
