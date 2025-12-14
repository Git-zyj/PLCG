/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] = (((((((min(var_4, var_3))) ? ((1369295419 ? 649290552614325070 : -3747467420261990895)) : ((min(-1369295419, 8192)))))) || (((-(!var_10))))));
                                arr_11 [i_0] [i_1] [i_1] [18] = var_8;
                                var_12 = (max((((~-27729) ? (max(var_8, var_1)) : ((min(var_9, var_3))))), (((-8192 ? (0 / 16) : ((var_10 ? var_9 : var_8)))))));
                            }
                        }
                    }
                }
                arr_12 [16] [i_0] = (min((((!var_8) ? var_3 : (min(var_10, var_9)))), ((min((var_2 == var_0), (max(1, 28432)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_22 [i_6] = ((min((var_6 / var_6), var_0)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_13 = (((((((max(var_5, var_4))) ? var_7 : (!var_11)))) ? ((min(var_7, (max(var_10, var_5))))) : ((((min(var_9, var_10))) ? var_3 : (min(var_1, var_1))))));
                                var_14 = (min(var_14, ((((var_2 + (max(var_10, var_1))))))));
                                var_15 += 917504;
                                var_16 -= (((max((var_0 < var_2), (var_1 / var_6))) > ((max((max(var_0, var_7)), (-6196653948637642610 / 64244))))));
                            }
                        }
                    }
                    arr_28 [i_6] [i_7] = (min((min(var_9, (min(var_7, var_1)))), ((min((min(237, 112)), 1)))));
                }
            }
        }
    }
    var_17 = (min(var_17, ((min((((~(min(var_2, var_9))))), ((((min(var_4, var_10))) - ((var_8 ? var_1 : var_0)))))))));
    #pragma endscop
}
