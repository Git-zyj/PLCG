/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_15, var_15));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 *= (((((((-(arr_2 [i_0]))) & 64184))) ? ((((65535 || (arr_2 [i_0]))))) : ((-(((arr_0 [i_0]) ? var_11 : 15601759972162005010))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_13 [0] [6] [i_3] [i_3] = (((((-((min(14, var_3)))))) ? 205 : (((arr_2 [i_3]) % (arr_2 [i_1])))));
                        var_20 = 5731755352143176254;
                        arr_14 [4] [i_1] [i_2] [i_1] = (((((((max(-4517, var_1))) == (arr_2 [i_0])))) > -19));
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = ((0 * (arr_6 [i_0])));

        /* vectorizable */
        for (int i_4 = 4; i_4 < 7;i_4 += 1)
        {
            arr_18 [i_0] = 333;

            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                arr_21 [i_0] [i_4 - 1] [i_4] &= (((arr_17 [i_4 - 2]) | var_13));
                arr_22 [i_5] = (((arr_5 [i_0] [i_0] [9]) ? (arr_16 [i_4 - 4] [i_5 + 1] [i_5 + 1]) : ((((arr_20 [i_4 + 1] [i_5] [i_5]) >= -23644)))));
                arr_23 [i_0] [i_0] [8] |= var_11;
                arr_24 [i_4] [i_0] [i_5 - 1] [i_4 + 2] &= (((arr_11 [i_4 + 2] [i_5 + 1]) - (arr_11 [i_4 - 3] [i_5 - 1])));
                arr_25 [i_0] [i_5] [i_5 - 1] = (((arr_4 [i_4 - 4] [i_5 - 1]) >= (arr_4 [i_0] [i_0])));
            }
            arr_26 [5] [i_0] [i_0] = ((((4938610296502697687 ? 5512385991246638177 : -5512385991246638178)) << ((((-5512385991246638193 ? 64162 : (arr_17 [i_0]))) - 64162))));
            arr_27 [i_0] = (arr_1 [i_4 - 2]);
            var_21 = (((((arr_20 [i_0] [i_0] [i_0]) ? 1 : 82649087)) + (arr_0 [i_4 + 2])));
        }
    }
    var_22 = ((-var_6 - ((var_8 ? (31720 || var_13) : var_8))));
    var_23 += (((4294967287 ? -305062775 : 8809815815414438792)));
    #pragma endscop
}
