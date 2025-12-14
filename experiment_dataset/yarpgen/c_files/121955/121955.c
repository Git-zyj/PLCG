/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_13 = (+(((max((arr_0 [i_3]), -1294604848)) ^ -1927394324)));
                        var_14 -= (min((min((arr_3 [i_2]), (((62 ? 8192 : (arr_0 [i_2])))))), 4));
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_15 = ((((!(arr_1 [i_0]))) ? (231 < 7912629331831560797) : 231));
                        arr_12 [i_0] [i_0] [i_0] [i_1] = (((6625701725308682454 ^ 1) ? (!-1369816852) : (1 | 6625701725308682464)));
                    }
                }
            }
        }
    }
    var_16 = var_1;
    #pragma endscop
}
