/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (!var_6)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] &= ((var_1 ? (((((-5990 ? (arr_1 [1]) : (arr_1 [i_0])))) ? (!57128) : (arr_0 [i_0]))) : (((!(arr_0 [i_0]))))));
        var_16 = (max(var_16, (((((min((arr_1 [i_0]), 57128))) > ((~(-127 - 1))))))));
    }
    for (int i_1 = 1; i_1 < 7;i_1 += 1) /* same iter space */
    {
        var_17 = ((~(((((8408 >> (arr_1 [i_1 - 1])))) ? ((-8440104864649126701 ? 8956264363144627357 : 7209731586426266029)) : (((5093 ? -5094 : (arr_1 [i_1 + 3]))))))));
        var_18 = (max(var_18, (((-(arr_1 [i_1 + 2]))))));
        var_19 = (((((-5094 ? -17710 : ((43010 ? (-127 - 1) : 3311036239))))) ? (arr_0 [i_1 + 3]) : (((((var_0 ? var_1 : (arr_4 [i_1])))) ? (arr_3 [i_1 + 3]) : (min(35184372056064, -117))))));
    }
    for (int i_2 = 1; i_2 < 7;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_18 [i_2] = (~3169868325);
                        var_20 = ((((!((min(-5, 0))))) ? ((((min(-17179869184, 1))) ? var_2 : -1125098971)) : (arr_16 [i_2 + 1] [i_2 + 1] [i_2] [i_5])));
                        var_21 = var_14;
                        var_22 &= ((+((-26214 ? (arr_8 [i_3] [i_3 + 1]) : 1316779252824307097))));
                    }
                }
            }
        }
        var_23 = (max(var_23, (((35705 ? 20 : (!4643758947822457936))))));
        var_24 = (max(var_24, (((((min((arr_16 [i_2] [i_2 + 3] [i_2] [i_2]), (arr_16 [i_2 + 1] [i_2] [i_2 + 2] [i_2 + 2])))) ? 5 : (arr_16 [i_2] [i_2 + 1] [i_2] [i_2 - 1]))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_25 = ((-5413465261683211087 ? (arr_1 [i_6]) : ((-(arr_21 [i_6] [i_6])))));
        arr_22 [i_6] = (!(((5 ? 702568482 : -5094))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 11;i_9 += 1)
                {
                    {
                        var_26 = -var_10;
                        var_27 = (max(var_27, (((10 ? 2125069721875119183 : 1)))));
                    }
                }
            }
        }
        var_28 = (arr_1 [i_6]);
    }
    var_29 = 0;

    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {
        var_30 ^= (((arr_24 [6] [i_10] [i_10]) ? ((142 ? 2748304984 : 2748304979)) : ((((arr_24 [i_10] [i_10] [i_10]) ? (arr_24 [i_10] [i_10] [i_10]) : (arr_24 [1] [7] [i_10]))))));
        arr_32 [i_10] = (arr_31 [i_10] [i_10]);
        var_31 = ((26205 >= (arr_19 [i_10])));
    }
    #pragma endscop
}
