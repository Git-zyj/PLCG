/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((-1076742006 ? 58 : 1076742006)))), (max(92, -12962))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = (max(var_12, ((max(((min(-107, 114))), (((97 || 1) ^ ((min((arr_1 [i_0]), 32))))))))));
        var_13 = ((((-1044900536 ? 96 : (arr_0 [1] [1]))) > 94));
        var_14 = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (i_1 % 2 == 0) ? ((min((arr_6 [i_1]), ((min(((var_1 >> (((arr_6 [i_1]) - 4141959221)))), ((((arr_3 [i_1] [i_1]) && var_0))))))))) : ((min((arr_6 [i_1]), ((min(((var_1 >> (((((arr_6 [i_1]) - 4141959221)) - 1344293157)))), ((((arr_3 [i_1] [i_1]) && var_0)))))))));
        var_15 = (max(var_15, var_6));
        arr_8 [i_1] [i_1] = ((((92 > 101) >> ((((max(-105, -106))) + 117)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_16 = 3764509404;
        var_17 = ((min(1, -57)));
        arr_13 [i_2] = (-1076741997 / 14756);
        var_18 = (var_5 ? (var_2 * 667043940) : (((arr_4 [9] [i_2]) >> (((min(15066058925663849921, 9223372036854775798)) - 9223372036854775773)))));
        arr_14 [12] [12] = 267911168;
    }
    #pragma endscop
}
