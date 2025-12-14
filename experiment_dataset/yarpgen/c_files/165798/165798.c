/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_10 = (((((arr_2 [1] [i_3]) ? (((~(arr_0 [i_0])))) : ((27119 ? var_1 : 577645100))))) * -422212465065984);
                        arr_9 [i_0] [i_1] [i_0] [i_0] = 1;
                        var_11 |= (min((((1 | (((1 && (arr_8 [i_0] [i_0]))))))), 3015740604));
                        var_12 += ((((((0 && 985830951) ? (arr_1 [i_1] [8]) : (~125)))) ? ((((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 3]) ? (~-31) : (min(37, var_3))))) : ((((((arr_7 [i_1]) ? (arr_6 [3] [i_1] [i_0]) : 126))) ? var_1 : (~1532)))));
                    }
                    var_13 = 22;
                    arr_10 [4] [i_2] [i_1] [4] &= var_9;
                    arr_11 [i_0] [1] [i_2] = ((0 ? ((0 ? (1 < -1306861403) : var_3)) : ((-(((arr_5 [i_0] [3]) ? -1073741824 : 1566087418))))));
                }
            }
        }
    }
    var_14 = ((!(((var_4 ? ((var_6 ? 5395470693673000390 : var_9)) : (((125 ? 1 : var_8))))))));
    var_15 = (min(108, 29601));
    var_16 = -108;
    #pragma endscop
}
