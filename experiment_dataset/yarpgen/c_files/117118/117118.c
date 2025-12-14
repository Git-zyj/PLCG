/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((49966 | var_2) + 2147483647)) << (max(var_3, (var_17 + 36218)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((!(((var_4 ? (arr_1 [i_0]) : 15569))))))) | -14743224420433286568);
        var_20 = ((((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) && (min(0, 0))));
        arr_3 [i_0] = ((49969 ? (!4676685452203800609) : 49984));
        var_21 += ((((max((arr_0 [i_0] [19]), (min(12954, (arr_1 [i_0])))))) ? (((((15551 ? (arr_1 [i_0]) : 15578))) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = max((arr_0 [i_0] [i_0]), var_5);
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((max(1, 1)) && (!63))) || ((((!14743224420433286568) ? -2081941661 : 49964)))));
        var_22 ^= var_18;
        var_23 += ((-(min(((min((arr_0 [i_1] [i_1 + 1]), var_11))), ((-(arr_0 [i_1] [i_1])))))));
        arr_8 [i_1] [i_1] = (max((-21490 * -var_1), (min(((min(22587, 49966))), (1 / 1)))));
    }
    #pragma endscop
}
