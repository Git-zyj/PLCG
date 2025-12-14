/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = 0;
                        var_17 = max(var_3, (((max(10, 1116224408)) ^ ((0 ? 3930469347 : 1502325022)))));
                        var_18 = (min(var_18, ((101013220 ? (max((max((arr_9 [i_0] [13] [i_2] [i_3 + 1] [i_3]), (arr_8 [i_0] [i_1] [i_2]))), 3909575066)) : (((((139090328 ? var_11 : 3531294041))) ? -3919842532 : (~328257340)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_2] = ((((((arr_8 [i_0] [i_1] [i_2]) | (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) && ((!(arr_0 [i_0])))));
                        var_19 = (min(var_19, (((((-(arr_4 [i_0] [i_1] [10])))) ? (arr_13 [i_0] [i_1] [i_2] [i_0] [i_4 + 1]) : 3966709955))));
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] = ((((((arr_9 [i_1] [i_1] [i_2] [i_5 - 1] [i_5 + 2]) ? (arr_4 [i_5 - 1] [i_5 - 1] [i_2]) : (arr_4 [i_5 + 2] [i_1] [i_2])))) && ((max(((-(arr_3 [3]))), (((arr_1 [i_0]) | 2746384071)))))));
                        var_20 = (min(var_20, (max((min(((1073709056 ? 2746384071 : (arr_12 [i_0] [i_0] [i_0] [10] [i_0] [10]))), (((arr_3 [i_2]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_10 [18] [i_1] [i_1]))))), ((((max(1169142263, 3178742887))) ? (min(4053453554, 2633691034)) : (~1262396406)))))));
                        arr_18 [i_0] [i_0] [i_0] = (((-(arr_2 [i_0]))) & (((arr_13 [i_0] [i_1] [i_2] [i_2] [i_5]) + (arr_13 [i_5] [i_2] [i_2] [i_1] [i_0]))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_21 *= max((((((~(arr_0 [i_5])))) ? (arr_6 [i_0] [i_5 + 1] [i_0] [i_1]) : (arr_15 [i_0] [i_0] [i_2] [i_5] [i_0]))), ((~(arr_1 [i_5 + 1]))));
                            var_22 = (((((-((4294967284 * (arr_0 [i_5])))))) ? (((4294967284 >= (arr_13 [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 2])))) : ((((!4294967272) == (arr_10 [i_5 - 1] [i_5 - 1] [i_5 - 1]))))));
                            var_23 = min(((~(arr_19 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5 - 1] [i_6] [i_6]))), (((arr_19 [i_0] [i_1] [i_0] [i_5 + 2] [i_6] [i_1] [i_0]) ^ (arr_1 [i_6]))));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_23 [i_7] [i_0] [i_0] [i_0] [i_0] = var_10;
                            arr_24 [i_2] [i_5] &= 1548583224;
                            var_24 |= (((min(8, (arr_10 [i_0] [i_0] [i_0])))) ? ((((100655379 >= (arr_6 [i_5 + 1] [i_5 + 1] [i_1] [i_1]))))) : ((-((129157724 ? (arr_7 [i_0] [i_1] [i_7]) : 0)))));
                        }
                    }
                    arr_25 [i_0] [i_1] [i_2] [i_2] = ((((-(arr_22 [i_0] [i_1] [i_1] [i_1] [i_2])))) ? ((~(arr_22 [11] [22] [11] [11] [i_2]))) : (max(3107750577, 2633691043)));
                }
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
