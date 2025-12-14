/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((((((min(-1419596657, (arr_3 [i_1] [i_0]))) - ((var_1 ? var_2 : (arr_2 [i_0] [i_0] [i_0])))))) ? (min((arr_0 [i_1 + 1]), (((arr_3 [i_0] [i_0]) + var_12)))) : (arr_0 [i_1])));
                var_19 = ((~(min(-1419596647, -1187237204320552192))));
                var_20 = (((-24 - 17) - (((((max(33, var_12)))) - 20))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    var_21 = (((arr_7 [i_2 - 1]) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 + 1])));
                    var_22 = (min(var_22, (((-((-(arr_11 [i_2] [i_3]))))))));
                    arr_13 [i_2] [i_3] [i_2] [i_2] = (((arr_8 [i_4 + 2] [i_2] [i_2 + 1]) >> var_6));
                    var_23 = var_1;
                }
                var_24 = (((((((min((arr_11 [i_2] [i_3]), (arr_11 [i_3] [i_2])))) >= ((-35 ? var_5 : (arr_5 [i_2])))))) >> (min(1173726824, 21))));
                var_25 = 1883071061;
            }
        }
    }
    #pragma endscop
}
