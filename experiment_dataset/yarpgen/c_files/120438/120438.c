/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] &= (((max(-75490301, (~var_5))) > 75490301));
                var_10 |= (min(1980422582, 75490301));
                var_11 = ((0 ? 8 : 4219476981));
            }
        }
    }
    var_12 *= (((var_0 + (0 - 11183))) > ((max(4219476987, 62))));
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_14 *= (((((-((4123 ? var_9 : var_3))))) ? ((max(var_1, (~var_1)))) : (min((((arr_11 [i_2 - 1]) + -1980422582)), var_2))));
                arr_12 [i_2] [i_2] [i_2] = ((arr_7 [i_2]) != ((((0 > (arr_10 [14] [i_2 - 1] [i_2 + 2]))))));
                arr_13 [i_2] [i_3] [i_3] = (11295548209179523405 ? 7057640560799922923 : 2704757229819110546);
            }
        }
    }
    #pragma endscop
}
