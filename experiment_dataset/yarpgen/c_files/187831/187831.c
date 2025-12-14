/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-122217038 ? var_14 : ((min(((1 ? var_7 : var_11)), 119629981)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 *= (min(((min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))), (min(122217056, (arr_6 [i_1 + 1] [i_2] [i_0 + 1] [i_2])))));
                    var_18 = ((((!((max(var_3, (arr_4 [i_0] [i_1])))))) ? (max((arr_0 [i_1] [i_0]), ((min((arr_0 [i_2] [i_1]), 44173))))) : ((max(102, 21362)))));
                    var_19 = -122217041;
                    var_20 = (max(var_20, (((((arr_6 [i_2] [i_1 - 1] [i_2] [i_0 + 1]) || (arr_1 [i_2])))))));
                    arr_7 [i_2] [i_1] [i_2] [i_1] = (arr_5 [i_2] [i_1] [i_1] [i_0 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
