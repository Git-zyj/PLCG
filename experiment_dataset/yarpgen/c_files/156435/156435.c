/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(-110060125, (~var_3))) >= var_2));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (((min((18446744073709551597 > -5821167050460551373), (arr_0 [i_0]))) / 1418686385));
        var_17 = (min(((12697091296804432049 ? 10 : 18446744073709551613)), ((((var_7 ? var_5 : (arr_2 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = ((((var_6 & (arr_3 [i_1 + 1]))) ^ (((arr_3 [i_1 + 2]) ^ (arr_1 [i_1 + 2])))));
        var_18 = var_0;
        var_19 *= (min((!0), (((((var_9 ? (arr_3 [i_1]) : 9))) && (((var_11 ? (arr_1 [i_1 - 1]) : var_11)))))));
    }

    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_20 = (((((min(2105588992, -169808816782252656)))) / ((1418686382 ? -7248753930170700510 : 2147483647))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 12;i_4 += 1)
            {
                {
                    var_21 = (min((min(((min(var_7, (arr_1 [i_2])))), ((2147483647 ? 19 : (arr_9 [i_4] [i_3]))))), ((min(12, (((arr_9 [1] [i_3]) ? (arr_13 [i_2] [i_3] [i_4]) : var_0)))))));
                    var_22 = (max(var_22, ((((min((var_8 - 6223927156051304180), ((min((arr_10 [i_2]), 2140446572))))) > ((-(min(-1, 7920640046802386090)))))))));
                    arr_14 [i_2 + 1] [i_3] [i_2 + 1] = -4219195267062900602;
                }
            }
        }
    }
    #pragma endscop
}
