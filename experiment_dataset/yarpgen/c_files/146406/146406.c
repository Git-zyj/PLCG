/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((208 ? 208 : 64704));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((((max(var_8, (max((arr_1 [i_0]), var_19))))) >= ((max((3039421884 <= var_2), (max(-25454, (arr_5 [i_1]))))))));
                var_21 = (max(var_21, ((((((((((arr_4 [20] [i_1]) ? -31481 : 832))) ? ((3039421860 ? -24391 : 1539618488)) : var_12))) ? ((255 | (arr_2 [i_1 - 2] [i_1 - 4]))) : (((188 ? -98994792 : 67))))))));
            }
        }
    }
    #pragma endscop
}
