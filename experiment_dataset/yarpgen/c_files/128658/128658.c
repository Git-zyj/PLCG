/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 4294967295;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    var_12 = ((((((arr_3 [i_0 - 1]) + var_8))) && (((var_4 ? var_5 : (arr_2 [i_0]))))));
                    var_13 ^= ((min((65535 - var_2), ((96 ? var_0 : var_3)))) * ((max((~0), ((max(-40, (arr_4 [i_0] [i_1]))))))));
                }

                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    var_14 ^= ((-var_8 ? 9633958628426836378 : 4294967295));
                    var_15 &= ((var_1 ? (-32767 - 1) : var_7));
                }
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    var_16 = ((((-(arr_12 [i_0 - 1] [i_0] [i_0 - 1]))) - 123));
                    arr_13 [i_0] = (((((((arr_1 [3]) || var_2)) || ((max(-86, 3201704845))))) ? (((min((!22), (!4321))))) : (min((max(2097151, -25)), ((min(var_10, 1)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0 + 1] = ((min(-22, (arr_17 [0] [i_1] [16] [i_5] [i_5] [i_6]))));
                                var_17 = -10;
                                var_18 = (max(var_18, ((min((min((arr_4 [0] [i_0 - 1]), 18079728193376998887)), (arr_4 [18] [i_0 + 1]))))));
                            }
                        }
                    }
                    var_19 = ((((((var_8 ? var_1 : var_10)) ^ (var_8 && var_6)))) ? var_2 : var_2);
                    arr_20 [i_0] [i_0 + 1] [13] [i_1] = (min((arr_4 [i_0 - 1] [i_0 - 1]), (arr_6 [i_0 + 1] [i_0 + 1] [i_4 + 1])));
                }
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    arr_23 [i_0] [i_0] [i_7 - 2] = ((7718908413554213606 ? 549454241 : 215));
                    var_20 = (((((-((max(var_3, 3)))))) ? var_6 : (((((min(var_3, var_6))) && (~var_7))))));
                }
                var_21 = var_1;
            }
        }
    }
    var_22 = (max(var_22, var_1));
    #pragma endscop
}
