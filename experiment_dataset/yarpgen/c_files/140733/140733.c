/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((var_5 <= var_3) == ((var_4 ? var_6 : var_9)))) ? (~717310178) : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((3577657121 ? 717310174 : 0))) ? ((var_11 ? 717310193 : (arr_0 [i_0]))) : -7);

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [12] [10] [i_0] [i_0] |= ((-var_5 ? (717310187 << 1) : (min(var_8, (arr_8 [12] [i_0] [i_1 + 1] [i_4] [i_4])))));
                                arr_13 [1] [8] [i_0] [i_1] [1] = 3577657133;
                            }
                        }
                    }
                    var_13 = ((arr_6 [i_0]) << (-var_9 - 65433));
                    arr_14 [i_0] = (((((((min(var_0, var_0))) ? var_3 : 42853))) ? ((~((717310175 ? (arr_0 [i_0]) : (arr_9 [i_2 + 1] [i_0] [i_0 - 1] [i_0] [i_0]))))) : 1));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_19 [1] [i_5] [i_0 - 1] [1] |= ((((((arr_1 [i_5]) ? (arr_1 [i_5]) : (arr_1 [i_5])))) <= ((var_6 ? var_9 : var_1))));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_22 [i_0] [i_0] = (((min(((var_1 ? 5180307646119891798 : var_8)), (arr_11 [i_1 - 1] [i_0] [i_5] [i_6]))) - (((((arr_11 [i_0] [i_0] [i_0] [9]) || var_4))))));
                        arr_23 [1] [i_0] [i_0] = ((-1 ? ((var_5 ? var_5 : (arr_0 [i_0]))) : (arr_6 [i_0])));
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        var_14 = (max(var_14, (((-679614409282908257 ? ((13088891854434593589 ? (((arr_16 [i_0] [i_1] [i_5] [i_5]) ? var_5 : var_0)) : 1)) : ((((((var_2 ? 6970278985572213677 : var_2))) ? (((arr_15 [i_0] [i_5] [i_0 - 1]) * var_9)) : -32))))))));
                        var_15 = (max(var_15, 0));
                        arr_26 [i_7 + 1] [i_0] [i_0] [i_0] [i_0] = ((-679614409282908244 ^ ((((369671852 ? 9686 : (arr_7 [14] [i_1 + 1] [i_5] [i_1])))))));
                    }
                    var_16 = (249 != 3577657119);
                }
            }
        }
    }
    var_17 = 1;
    #pragma endscop
}
