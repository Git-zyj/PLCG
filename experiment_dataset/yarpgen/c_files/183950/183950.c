/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((((((-7499952665392094196 ? 3 : -7704659373332270406))) <= (171 >= 2996678181023397610))))));
                    var_14 += ((78 ? (min(2917695161, -65528)) : var_12));
                    var_15 = (max(((1 ? (!3467053751) : (var_1 / 21451326))), (var_4 < 2996678181023397597)));
                    var_16 += ((((max((((arr_4 [i_0] [i_1] [i_2]) | var_10)), (1377272135 / 57)))) ? (max(((var_8 ? var_1 : 11467)), (((!(arr_2 [i_0])))))) : ((((!-8356112490541467015) && (~1377272140))))));
                }
            }
        }
    }
    var_17 = ((var_8 ? 0 : var_3));
    #pragma endscop
}
