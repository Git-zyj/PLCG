/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_19 ^= 0;
        arr_3 [i_0] [i_0] = ((((8547302977774296234 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) ? (min(1, (arr_0 [i_0] [i_0]))) : (((max(-15556, -6924)))));
        var_20 = (1323877284 ? 1 : 4294967295);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_21 = var_11;
        var_22 ^= (((max(14541047886485123849, 1)) & 1));
        var_23 = (min((((min(9899441095935255381, var_14)))), (min(179, 3941164609272356588))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_24 = ((((max((arr_5 [i_2]), (arr_5 [i_2])))) ? 8547302977774296234 : (max(((3930730143 ? var_14 : (arr_0 [i_2] [i_2]))), (arr_0 [i_2] [i_2])))));
        arr_9 [i_2] [i_2] |= var_16;
        arr_10 [i_2] [i_2] = var_3;
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = max((min((min(var_7, 0)), 473621038)), 17454747090944);
        var_25 = 4294967295;
        arr_14 [i_3] [i_3] |= 1421;
        arr_15 [i_3] = ((((arr_0 [i_3] [i_3]) ? (arr_0 [i_3] [i_3]) : 4294967295)) > (min(-var_5, (arr_6 [i_3]))));
        var_26 = (((max(((-2412 ? (arr_7 [i_3]) : var_0)), (((~(arr_2 [i_3] [i_3])))))) ^ var_13));
    }
    #pragma endscop
}
