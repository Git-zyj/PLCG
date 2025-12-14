/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [16] &= (max((max(3989323307, ((var_7 ? -6740 : 1213804228)))), ((((4878969355652946046 ? var_6 : (arr_5 [12])))))));
                var_16 ^= (max(((((3081163067 ? 6170859311513228683 : 1213804228)))), ((-((min(0, var_9)))))));
                var_17 = (((((+((min((arr_4 [i_1] [i_0] [i_0]), var_14)))))) ? (((+(((arr_1 [i_0]) ? var_4 : 40561))))) : (max(5056858200806211041, -1703061774))));
            }
        }
    }
    var_18 = var_11;
    #pragma endscop
}
