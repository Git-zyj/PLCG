/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 -= ((((((arr_1 [0]) ^ (arr_4 [2] [i_1] [2]))))) ? var_12 : (arr_4 [24] [i_1] [i_2]));
                    var_18 = (arr_2 [i_2 - 1] [i_0 - 2]);
                    arr_8 [13] [i_1] [i_0] [i_0] = (((((((arr_0 [17] [i_0]) ? var_5 : (arr_1 [i_0]))))) < (arr_1 [i_0])));
                }
            }
        }
    }
    var_19 = ((!(((((min(-155855127, var_14))) ? (~70368207306752) : var_1)))));
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            {
                var_20 = (min(var_20, ((((~(arr_3 [i_3])))))));
                var_21 -= var_15;
                var_22 *= (min(((663991349948249281 - (min(7846525154008675007, (arr_4 [i_4] [i_3 + 3] [i_4]))))), ((((arr_7 [i_4] [i_4 - 2] [i_4 - 2] [i_4]) ? (!var_13) : -1602338451)))));
            }
        }
    }
    #pragma endscop
}
