/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= 4819310051034363541;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    var_15 = (((arr_4 [i_0] [i_1] [i_0] [i_0]) && (arr_2 [i_0] [i_2 - 1])));
                    var_16 = ((arr_0 [i_0]) + var_3);
                    arr_6 [i_0] [i_1] = (!var_2);
                    var_17 |= (((arr_2 [i_2] [12]) ^ ((((!(arr_3 [i_1] [i_2])))))));
                    var_18 = (arr_2 [i_2 - 1] [i_0]);
                }
                arr_7 [i_1] = (max((min((arr_5 [i_1] [i_1] [i_1] [i_0]), ((min(var_6, (arr_4 [i_0] [i_1] [12] [6])))))), (((((1192437314 ? 15968266465316062972 : 31))) ? 8876122410100000933 : (~var_3)))));
                var_19 = (((((((min((arr_3 [i_0] [i_0]), (arr_4 [3] [i_1] [i_0] [i_0])))) ? (arr_2 [i_1] [i_0]) : ((var_0 ? -1192437314 : var_3))))) ? ((var_10 % (min((arr_5 [i_1] [i_1] [i_1] [21]), var_7)))) : ((((((arr_1 [i_0] [i_1]) ? var_7 : 13627434022675188075)))))));
            }
        }
    }
    var_20 = var_1;
    var_21 = (max(var_21, ((((((9570621663609550683 * var_8) / (var_0 - var_5))) >> ((((-((var_6 ? var_12 : 1)))) - 8470817737365900113)))))));
    #pragma endscop
}
