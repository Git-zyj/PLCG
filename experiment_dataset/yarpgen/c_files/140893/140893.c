/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = 8;
        var_19 = (((~1191813660) ? (arr_0 [i_0]) : 1));
        var_20 = (min((min(((1383036206 ? 1383036231 : var_5)), (arr_0 [i_0]))), ((((((arr_0 [i_0]) << (arr_0 [i_0]))) | (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [1] = 8;
                    arr_8 [i_0] [i_1] [1] = (arr_2 [i_2] [i_2] [i_2]);
                    var_21 = 1;
                }
            }
        }
    }
    var_22 = ((~(min(((var_4 ? var_16 : 2911931083)), ((var_6 ? 1383036233 : 1383036231))))));
    var_23 &= ((var_13 ? ((((min(var_10, var_12))) ? 7447967677149643563 : (-2147483647 - 1))) : ((1383036190 ? ((1 << (2911931069 - 2911931069))) : 1383036206))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_24 |= (arr_12 [12] [5] [i_4]);
                var_25 = (min(((((var_12 == var_11) <= 54))), -6499));
                var_26 |= (arr_10 [i_3]);
                arr_13 [i_3] [9] [3] = (((arr_11 [i_3]) ? (((arr_11 [i_3]) ? (arr_11 [i_3]) : (arr_11 [i_4]))) : ((5 ? (arr_11 [i_4]) : (arr_11 [i_3])))));
            }
        }
    }
    var_27 = ((var_2 ? ((((max(1, 1588972562))))) : 2911931065));
    #pragma endscop
}
