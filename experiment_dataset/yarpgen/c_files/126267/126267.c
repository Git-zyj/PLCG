/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((min(var_11, var_6)) + 2147483647)) >> 5))) ? (9647367835459406625 || 3625361955134700996) : -5329866227677107034));

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = ((+((206 ? (max((arr_1 [i_0]), 31930)) : (arr_0 [i_0 - 3] [i_0 - 3])))));
        var_16 &= ((((-var_0 ? (31911 + -1152921504606846976) : (((var_9 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0 + 1] [i_0])))))) > (((25 ? (~33624) : (max((arr_0 [i_0 - 3] [i_0]), 0)))))));
        var_17 += (max(30170, (((((arr_0 [i_0] [i_0]) ? 4294967287 : 20)) / 198))));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_18 = (max(var_18, (((((((arr_5 [i_1 + 1] [i_1 - 1]) % 70368744144896))) ? ((((1 | (arr_5 [i_2] [i_1]))))) : (min((((1 != (arr_1 [i_1 + 2])))), (arr_3 [i_2]))))))));
            var_19 = (min(var_19, (((((min(-4401, (arr_1 [i_1])))) ? 33639 : (arr_5 [i_2] [i_1]))))));
        }
        var_20 += ((2425052727 ? ((((!-33775128) || 33624))) : ((+((((arr_5 [i_1] [i_1]) < var_7)))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_21 = (((arr_2 [i_3 - 3]) && (arr_2 [i_3 - 3])));
        var_22 = (1756967736 ? (arr_9 [i_3 - 3] [i_3 - 2]) : (1252536285 ^ 2147483647));
    }
    #pragma endscop
}
