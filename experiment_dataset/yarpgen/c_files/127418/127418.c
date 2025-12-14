/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((((895377473616103373 / -1577837799) / var_8))), ((var_1 ? (max(50, var_7)) : (min(var_5, -1788289692))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((max(159, var_5))) && ((min((arr_1 [i_0]), (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2] = ((min((max(294580478514581128, 3755431755734054556), (arr_3 [i_1] [i_2])))));
                    var_13 += (((((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 1]) : var_6)) >> (9426935849531990262 - 9426935849531990211)));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                arr_18 [i_3] [i_4] [i_4] |= var_9;
                arr_19 [16] [i_3] = (19321 + (((((-1 ? 0 : 1073610752))) ? var_1 : 255)));
            }
            arr_20 [i_3 - 2] [i_4] |= 8575;
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_14 &= (arr_10 [i_3]);
            arr_24 [i_3] [i_3] [i_3] = ((141 ? 7281781088302823083 : 0));
            arr_25 [i_3] [i_3] = (max((((!((max((arr_1 [i_3]), 46411)))))), (37 / 14004485154154056336)));
        }
        arr_26 [i_3] [0] |= ((((max(var_10, (arr_5 [i_3] [i_3 + 2] [2])))) != 246));
    }
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        arr_30 [i_7] = (~1095364780940576071);
        arr_31 [i_7] [i_7] = ((((min((arr_0 [i_7 + 1] [i_7 + 1]), (arr_0 [i_7 + 1] [i_7 + 1])))) ? (((arr_0 [i_7 + 1] [i_7]) / (arr_0 [i_7 + 1] [i_7]))) : (arr_0 [i_7 + 1] [5])));
        arr_32 [i_7] [i_7] = ((var_4 - ((var_6 << (5844 - 5810)))));
    }
    var_15 ^= (!var_2);
    #pragma endscop
}
