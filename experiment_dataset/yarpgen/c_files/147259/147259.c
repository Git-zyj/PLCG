/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((401084023 ? 213 : var_8)) != ((248 ? 7 : var_0)))) ? (((((-5 ? 401084023 : 401084023))) ? ((248 ? var_7 : 401084037)) : ((var_3 ? 18446744073709551615 : var_5)))) : (((min((var_0 || 142), (var_8 < var_9)))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 *= var_4;
        var_12 -= (((((min(var_2, 32071)) != (((8101561164477058914 << (var_1 - 1)))))) ? ((min((var_8 <= var_3), var_8))) : 4770930430473440538));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 = ((+(max((-9223372036854775807 - 1), -98))));
        var_14 = ((((min(var_4, (var_6 == 48)))) ? var_5 : ((~(arr_3 [i_1] [i_1])))));
        var_15 *= (min(((var_2 & (arr_4 [i_1]))), ((((arr_4 [i_1]) ^ (arr_4 [i_1]))))));
        arr_5 [i_1] [i_1] |= ((((((4770930430473440538 >> (var_7 - 16135023100894041877))) != 1109227954)) ? (((min(0, 0)))) : (min((min(1536, (-9223372036854775807 - 1))), (((16 ? 246 : 72)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 7;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] &= ((((min(50, 233))) ? (min(var_7, (arr_11 [i_3 + 2] [i_3 - 3] [i_1]))) : (((max(var_3, (arr_11 [i_3 - 2] [i_3 - 2] [i_1])))))));
                    var_16 &= ((((min(var_2, (arr_10 [i_1] [i_3 - 1] [i_3] [4])))) ? (arr_3 [i_1] [i_1]) : ((-310707404 ? -5826825418013647069 : -37))));
                }
            }
        }
    }
    #pragma endscop
}
