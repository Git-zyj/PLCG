/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 |= 0;
        var_14 = 656639996;
        var_15 = 2046419825396688607;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_16 = (((((arr_6 [14]) ? (arr_4 [i_1] [i_2]) : ((((arr_2 [i_1]) ^ -26844)))))) ? 4294967295 : 4294967295);
            var_17 = (arr_4 [11] [1]);
        }
        var_18 = ((((arr_4 [14] [i_1]) * (4294967283 <= 9771))));
        arr_7 [5] [5] = (1 <= -8043859847547371066);
        var_19 = (max(var_19, 0));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_20 = (max(var_20, 2533134019));
        arr_10 [i_3] = (((arr_2 [i_3]) % 2726425372));
        var_21 = (max(var_21, (arr_0 [i_3])));
        var_22 = (min(var_22, ((((((~(arr_5 [i_3])))) ? 8043859847547371066 : (-58 != 8043859847547371069))))));
        var_23 ^= (((((0 ? 2533134046 : 53991))) ? ((9292549494065670061 ^ (arr_3 [i_3] [i_3]))) : 33730));
    }
    var_24 = (((((!-8043859847547371084) ? 65535 : 32752))) ? var_2 : var_8);
    #pragma endscop
}
