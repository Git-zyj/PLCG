/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 += -24636;
                        arr_10 [i_0] [i_0] = (((arr_8 [i_0] [i_1] [i_0]) + (!-71)));
                        var_15 *= (arr_9 [i_3] [i_0] [i_2] [i_0] [i_0]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_16 = (arr_12 [i_4] [i_4] [i_6]);
                        arr_18 [2] [i_0] [i_5] [i_4] [i_0] [6] = (min(var_4, 1252833494));
                        arr_19 [i_0] [i_0] [11] [i_0] = (((((max(-1969688987, (arr_4 [i_0] [i_5] [16]))))) ? (min(((5714913981037186414 ? var_12 : var_5)), (arr_7 [i_0] [i_0] [i_5]))) : (max(-var_10, ((5714913981037186432 ? var_13 : (arr_13 [i_0])))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        arr_22 [i_7] = 5714913981037186414;
        arr_23 [i_7] [i_7] = (max((((!((min((arr_11 [18]), var_6)))))), (max(var_5, 5714913981037186414))));
        arr_24 [i_7] = ((((var_8 ^ (arr_4 [i_7] [i_7] [i_7]))) >= (~var_12)));
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        var_17 = (5791588306328721407 / var_9);
        var_18 = (var_3 >= -15547);
        arr_28 [i_8] = var_5;
    }
    var_19 = -7351175191419704676;
    var_20 = ((((5791588306328721413 < (7334139804474250065 || -1108738535))) ? (((((var_3 ? var_12 : var_5))) ? (-6997829453652671320 & 2305843009213691904) : (1 / 1))) : ((((-6997829453652671320 && (2354493033172313950 + -5791588306328721416)))))));
    #pragma endscop
}
