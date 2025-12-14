/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_3;
    var_12 = (max((-24252 - 112), 26063));
    var_13 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = (arr_3 [i_0]);
            var_15 = (max(((-26071 ? (arr_0 [i_0]) : (var_8 - 88))), (arr_2 [i_0] [i_0] [i_1])));
            arr_4 [i_0] [i_1] = (((-var_3 != (arr_0 [i_0]))));
            arr_5 [i_1] [i_0] = ((((((var_9 && 230) - (var_10 > 8)))) ? (((!(((28903 ? var_9 : -10268)))))) : -26075));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                arr_8 [i_0] [i_0] [i_0] [i_0] = max((-32767 - 1), var_2);
                var_16 = ((0 ? 26067 : (-23810 < 0)));
            }
        }
        arr_9 [i_0] = -23836;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = (max(((-22080 ? -2 : (arr_0 [i_3]))), ((0 ? 27998 : 0))));
        arr_12 [i_3] [i_3] = ((((((!255) >> (139 - 138)))) && 254));
        var_18 &= ((~((((max(var_5, 28))) ^ (~27998)))));
        var_19 = (max(var_19, (arr_0 [i_3])));
        arr_13 [1] [1] = 24608;
    }
    var_20 &= var_0;
    #pragma endscop
}
