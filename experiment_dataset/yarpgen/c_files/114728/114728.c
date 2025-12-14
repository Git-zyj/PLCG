/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((((((!(arr_1 [2] [4]))))) % (max(((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 0))), (arr_1 [i_0] [i_0])))));
        var_20 *= ((~(max((8340816477038778301 || var_6), -8340816477038778309))));
        arr_3 [i_0] |= ((((max((max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), (((8340816477038778307 ? 951855404 : 8340816477038778308)))))) && ((((((8340816477038778326 ? var_2 : var_7))) ? -8340816477038778302 : (max(-23, var_12)))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_21 = (((((arr_5 [i_1] [i_1]) ^ var_19)) * ((((arr_5 [i_1] [i_1]) ^ (arr_5 [i_1] [i_1]))))));
        var_22 = (!10582);
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_23 = (((((-(arr_5 [i_2] [i_2])))) ? ((((arr_5 [i_2] [i_2]) < (arr_6 [i_2])))) : (arr_1 [i_2] [i_2])));
        var_24 ^= ((((-8340816477038778308 ? 4294967295 : 10513712973283206036)) <= ((4294967295 ? (max(7, 8340816477038778300)) : (arr_7 [i_2])))));
    }
    var_25 ^= var_18;
    var_26 = (max(8340816477038778301, -8340816477038778319));
    #pragma endscop
}
