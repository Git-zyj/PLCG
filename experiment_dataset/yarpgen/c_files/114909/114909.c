/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max((246136987 + var_14), -1368447916)) & ((max(var_9, var_8)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_1] &= var_5;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_18 = 0;
                        var_19 = (arr_8 [i_1]);
                        arr_14 [i_0] [i_0] [i_3] [i_0] [i_2] [i_3] &= (((((~(-32767 - 1)))) ? (((~(arr_0 [i_2 - 2])))) : (~3538706788)));
                        arr_15 [i_2] [i_1] [i_1] = (arr_4 [16]);

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_3] [14] [i_0] [i_0] |= (min(((163 ? (arr_17 [i_0] [i_0]) : (arr_16 [i_0] [i_0 - 1] [i_0 - 1]))), (min(5, (~251)))));
                            var_20 = (255 << 0);
                            arr_21 [i_0 - 1] [i_1] [13] [i_2] [i_2 - 3] [1] [i_2] = ((((var_4 ? var_2 : (arr_10 [i_2 + 1] [i_4] [i_2 + 1] [i_4]))) > (arr_19 [i_2 + 2] [i_2 - 2] [17] [17] [1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_21 = (((arr_16 [3] [i_1] [i_2]) ? (4611686016279904256 && 2047) : (arr_8 [i_0 - 1])));
                        var_22 = (arr_12 [i_2 - 3] [i_2 + 1] [i_2] [i_2 - 3] [i_2] [i_2 + 1]);
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_27 [i_6] |= (min(6168566446341416085, 0));
                        var_23 = ((((((min((arr_26 [i_0] [i_0] [i_2 + 2] [i_6] [15] [i_6]), -32767))) ? (arr_3 [i_1]) : 4216169339))) * ((255 ? 4814697050757296775 : 2493135842086648443)));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_24 = var_2;
                        arr_32 [i_0] [i_0 - 1] [i_2] [i_1] [i_2] [i_7] = 104;
                        var_25 &= (((arr_28 [i_0] [1] [i_0] [i_0 - 1] [i_0 - 1]) ? ((((74 >= (-127 - 1))) ? 15953608231622903173 : (min(10694288532007781861, 1)))) : (((var_16 ? (arr_12 [0] [i_2] [i_0 - 1] [i_7 - 1] [i_2] [i_2 - 2]) : (arr_7 [i_7 - 1] [i_0 - 1] [17]))))));
                    }
                }
            }
        }
    }
    var_26 = ((-((15953608231622903173 ? 756260534 : 20))));
    #pragma endscop
}
