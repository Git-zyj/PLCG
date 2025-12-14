/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((20323 ? 2775827231 : 1)))));
    var_19 += (max((min((min(1519140072, var_15)), (min(8059574356241861078, var_15)))), (max((max(9454918921547662660, var_5)), var_6))));
    var_20 = ((~(min(-11917, 1768541045))));
    var_21 = (max(var_21, (190 * 8991825152161888948)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_22 = (((min((((arr_7 [i_1] [i_1] [i_1]) ? (arr_3 [i_0] [i_1] [8]) : (arr_1 [6]))), (((var_17 <= (arr_7 [1] [15] [15])))))) <= ((max((arr_2 [i_2 - 1]), (min(var_7, (arr_5 [i_0] [i_1] [i_1] [i_0]))))))));
                    var_23 = ((!((max((1612998817 != var_8), (arr_3 [16] [i_1] [i_0 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
