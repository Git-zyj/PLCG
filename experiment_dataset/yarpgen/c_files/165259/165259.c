/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((!((min(-718087875, (min(var_6, -718087882)))))));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((!(-32762 ^ -15678))) ? (((((var_7 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))) ? (min(4611686018427387904, (arr_1 [i_0] [i_0]))) : (arr_2 [i_0] [i_0]))) : (arr_1 [i_0] [15])));
        var_11 = (((((!(arr_1 [i_0] [i_0])))) ^ ((-718087870 ? -7209 : -32763))));
        var_12 = (min(var_12, 718087904));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] = (max((arr_5 [i_1] [i_1]), -281588690));

                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    arr_14 [11] = (arr_8 [i_1] [i_3] [i_2]);
                    var_13 = ((~(((arr_8 [i_3] [i_3] [i_3 + 1]) ? (arr_8 [i_3] [i_3] [i_3 - 1]) : var_3))));

                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        var_14 = (-2147483647 - 1);
                        var_15 = (((arr_11 [i_1]) & ((((var_4 && (arr_17 [i_2] [i_2]))) ? (arr_17 [i_2] [i_2]) : (min((arr_7 [i_1] [i_2] [i_3]), (arr_17 [i_1] [i_2])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        var_16 = ((var_9 ? (~718087904) : (arr_15 [i_3 + 1] [i_3 - 1] [i_5 - 1])));
                        var_17 = (((~-663629010) ? (((arr_8 [i_1] [i_2] [i_3]) / (arr_15 [8] [i_2] [i_2]))) : (arr_6 [i_1])));
                        var_18 = ((-(!399529944)));
                        arr_20 [i_1] [i_1] [i_3] [i_5] [i_5] = (((((var_2 ? 243394529 : 2014842666))) || ((((arr_4 [i_2]) ? (arr_13 [i_2]) : var_6)))));
                    }
                    var_19 = ((32761 >> (((arr_13 [i_1]) - 3609928611))));
                }
            }
        }
    }
    #pragma endscop
}
