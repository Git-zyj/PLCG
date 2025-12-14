/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((6195184948690036419 <= 229) <= (max(-var_11, ((6195184948690036444 ? -1 : var_1))))));
    var_19 = ((-(((var_4 + 9223372036854775807) >> (!var_14)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [2] [2] = ((-((~(arr_5 [i_0])))));
                arr_9 [i_0] = (max((((arr_7 [i_0] [i_1] [i_1]) ? -var_14 : ((var_6 * (arr_6 [i_0]))))), ((((((var_8 ? (arr_0 [i_0]) : 5772026184734462716))) ? ((3451030797 ? var_6 : -134876650)) : ((max((arr_4 [i_0] [i_1]), var_10))))))));
            }
        }
    }
    var_20 = (-(max((min(var_4, 134876649)), (max(var_16, var_7)))));
    var_21 = (min(var_21, var_7));
    #pragma endscop
}
