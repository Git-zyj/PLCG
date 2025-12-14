/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (max(var_11, (((11852754369983890870 >= 3941292423589733706) - var_8))));
        var_12 = (var_6 & (((arr_1 [i_0] [i_0]) ? 18446744073709551603 : (arr_1 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = (min(var_13, (arr_3 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {

                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_14 &= (9199187820023065989 / 14505451650119817909);
                        arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (18446744073709551591 < 19);
                    }
                    var_15 &= 2271961905113931878;
                    var_16 = (min(var_16, (arr_8 [i_1] [i_2] [i_3])));
                }
            }
        }
        var_17 |= var_9;
        var_18 ^= (((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_2));
    }
    var_19 |= (min(-71, -var_5));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                arr_21 [i_5] [i_5] [i_5] = max((arr_7 [i_5] [i_6] [i_6]), ((((arr_7 [i_6] [i_5] [i_5]) ? 3375482489656334229 : 22))));
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_20 = 4246877352422674677;
                                var_21 &= (min((((arr_23 [i_5] [i_7] [5]) ? 15517619330649419684 : (max(-7550954445068700427, 2962349909266688644)))), (arr_27 [i_5] [i_5] [i_5] [i_7 + 1] [i_8] [i_9 - 3])));
                                arr_30 [i_5] [i_5] [i_5] [1] = ((((((65 ? var_0 : var_3)) % var_4)) != (((arr_16 [i_6]) ? ((134 ? (arr_7 [21] [i_7] [i_7]) : -2984114334347142942)) : 2178070674149676184))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 10;i_11 += 1)
                    {
                        {
                            var_22 *= var_7;
                            arr_36 [i_5] [i_6] = arr_20 [i_11] [i_6] [i_5];
                            var_23 = (((min(2060141322444602559, 169))) ? (min(var_7, (arr_8 [i_11] [i_11 + 2] [i_11]))) : (max(var_9, (arr_8 [16] [i_11 + 1] [i_11]))));
                            var_24 = (((((((123 ? 123 : var_6))) ? ((6986034825197267917 ? var_3 : (arr_11 [i_5] [i_5] [i_6] [i_10] [i_11]))) : 7550954445068700415))) ? ((((!(arr_25 [i_6] [i_6] [i_6] [i_6] [4]))))) : ((((7967247150372100408 >> (var_7 - 1369553178676079980))) >> (((((arr_24 [10] [10] [10] [10]) * var_7)) - 6537852018330400350)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
