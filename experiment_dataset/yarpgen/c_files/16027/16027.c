/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((max(72, 3453293443)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [14] [i_0] [14] |= (((var_6 && ((var_7 >= (arr_0 [2]))))));
                    var_20 = (min(var_20, (((((min(247, 7385145428901521201)) * 841673870))))));
                    arr_7 [i_0 + 1] [i_1] [i_0] [i_2] = ((var_1 ? ((max(((min(var_14, (arr_3 [i_0] [14])))), (max(3453293425, (arr_5 [i_0] [i_0] [8])))))) : (((arr_5 [12] [i_0] [i_2]) ? 7385145428901521207 : (arr_5 [i_0 + 1] [i_0] [14])))));
                }
                var_21 = ((((var_3 ? (arr_1 [i_0] [i_1]) : (((var_8 ? var_8 : var_18)))))) ? (arr_2 [i_0] [i_1]) : ((((!(((var_16 ? var_4 : 2492993361))))))));
                var_22 = ((~(max((((1801973934 ? var_12 : -37))), ((48 ? (arr_0 [i_0]) : var_3))))));
                arr_8 [i_0] = var_0;
            }
        }
    }
    var_23 = 3453293444;
    var_24 |= 1;
    var_25 = 23;
    #pragma endscop
}
