/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = var_4;
                        arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (var_10 != var_6);
                        var_20 = (min(var_20, ((((((max(-20593, 20575)))) | var_12)))));
                    }
                    var_21 |= (((((112 - (2899664981 <= -123)))) >= (((((var_14 ? var_1 : var_2))) ? var_7 : var_4))));
                    var_22 = 4294967295;
                    var_23 = (max(var_23, (((((-((var_12 ? var_7 : var_1)))) >= ((max(var_3, var_17))))))));
                }
            }
        }
    }
    var_24 += (max(((max(var_4, var_2))), (max((~0), var_7))));
    var_25 = var_7;
    var_26 = ((0 ? var_14 : (max(var_16, (2689410637 > -7093429179850382965)))));
    var_27 += var_15;
    #pragma endscop
}
