/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 13571;
    var_12 = ((!((((30568 ? 30567 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = ((min(((max(13571, var_10)), var_6))));
                arr_5 [i_0] [i_1] = (max(((min((!4194303), (arr_4 [i_0] [i_1])))), -128));
            }
        }
    }
    var_14 = ((((!(((var_9 ? var_3 : 26672)))))));
    #pragma endscop
}
