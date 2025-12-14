/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [16] |= ((((-1572293893 ? (arr_2 [8]) : (arr_2 [22]))) == 14336));
        var_10 = (min((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_3 [i_0]))), ((3 ? (arr_3 [i_0]) : (arr_3 [i_0])))));
        arr_5 [i_0] [i_0] = ((((max((arr_2 [i_0]), 3523131458))) ? (min(((3 ? -42 : 9)), 3)) : ((max(1, 12)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((((arr_7 [i_0]) ? -11 : 1)))));
                    var_12 = (min((((min(-1599351562, (arr_9 [i_2] [5] [i_0]))))), (min((max(-14323, (arr_7 [14]))), (((4095850803 ? 1 : (arr_0 [i_0] [i_1]))))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_13 = 7;
        var_14 &= (((((((18446744073709551615 ? (arr_10 [i_3]) : 12))) ? ((min(-91, 1380396871))) : (max(1446257255, -767268109)))) < ((((-91 > 1) ? -7 : (((arr_11 [i_3]) ? -24388 : -61)))))));
        arr_13 [i_3] = (((arr_7 [i_3]) ^ (max(-1201568007, 87))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_20 [i_5] [i_4] [i_5] [i_3] = ((arr_10 [i_5 - 1]) > (arr_2 [i_5]));
                        var_15 = (min(((min((867226480 / 255), (max(-19, (arr_0 [2] [i_4])))))), 0));
                        var_16 &= (arr_9 [1] [i_4] [i_5 - 1]);
                        var_17 &= (((arr_15 [i_3] [i_5 - 1]) ? (arr_15 [20] [i_5 + 1]) : (arr_15 [10] [i_5 - 2])));
                    }
                }
            }
        }
    }
    var_18 = var_0;
    var_19 -= (max(var_2, (max(var_0, -8))));
    #pragma endscop
}
