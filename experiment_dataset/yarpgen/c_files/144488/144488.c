/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = var_10;
                var_14 = (((arr_6 [i_0] [i_1] [2]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (max(((((var_5 + 2147483647) >> (208 - 202)))), (arr_10 [i_0] [i_1] [i_1] [i_2])));
                    var_15 = ((82 | (((arr_1 [i_2] [i_1]) ? (arr_1 [i_1] [i_0]) : var_7))));
                    var_16 = ((((max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((arr_0 [i_1]) ? var_12 : var_8)) : (((min(30, 219))))));
                    var_17 *= (((((arr_6 [i_0] [i_1] [i_2]) ? var_5 : (arr_6 [i_0] [i_0] [i_0]))) / -4825122951973147830));
                    var_18 = 4825122951973147845;
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_19 = (min(((219 ? 71 : (arr_3 [i_1] [i_3]))), (((3204254155688912024 || var_7) ? (((arr_13 [i_0] [i_0] [i_0]) ? var_4 : var_10)) : var_4))));
                    var_20 = (max(var_20, ((((min((arr_8 [i_0] [i_0] [i_3]), (arr_6 [i_0] [7] [i_1])))) ? ((3204254155688912027 ? 10935692186885409918 : (90 / 158))) : (((min(var_5, (arr_9 [i_0])))))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((var_10 ? (((92 * 2251799813619712) ? (max(var_9, var_8)) : (((-(arr_1 [i_3] [i_0])))))) : (arr_6 [i_3] [i_1] [9])));
                    var_21 = (((((((var_1 ? 536870912 : (arr_1 [i_0] [i_1]))) >> (((arr_3 [i_1] [i_0]) - 14544123184381953176))))) ? (arr_13 [i_0] [i_0] [i_0]) : (((((126 ? 8556380160 : 186))) ? ((var_11 ? var_9 : 85)) : (((33 ? var_10 : var_2)))))));
                }
            }
        }
    }
    #pragma endscop
}
