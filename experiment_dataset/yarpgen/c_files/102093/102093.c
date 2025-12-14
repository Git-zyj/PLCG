/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((27585 / (((min(37950, var_11)) + (((min(27567, 37954))))))));
    var_14 = (37954 ^ (~var_6));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((((((((min(37954, 63173))) && 1)))) != (max((arr_1 [i_0]), (((arr_0 [1]) + 16777215))))));
        arr_2 [i_0] = (((((min((arr_1 [i_0]), 5594663394015499198)) >> (-6928123906325719970 && -18249))) / -756224585));
        var_16 += ((((((min((arr_0 [i_0]), 16236490960218331933)) >= ((11517940632656083590 & (arr_1 [i_0]))))))) + (min((2210253113491219698 + 32767), (arr_1 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_17 *= (((min((max((arr_4 [i_1]), (arr_1 [i_1 - 1]))), (((arr_4 [6]) - 1)))) >= 1));
        var_18 += (((min(((1399287383 >> (-1398 + 1409))), (arr_4 [i_1]))) == 1399287358));
        var_19 += (max((((arr_4 [13]) ^ (((arr_3 [20] [i_1]) + 32767)))), ((min((arr_1 [i_1]), (((arr_0 [13]) + (arr_0 [i_1 - 1]))))))));
        var_20 = (min(var_20, 12076515457998831972));
    }
    #pragma endscop
}
