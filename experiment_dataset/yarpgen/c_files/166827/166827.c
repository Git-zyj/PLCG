/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((((((((min(-29385, 5720625674409966932))) ? (1074205247 / 1074205247) : ((((arr_1 [i_2]) & (arr_4 [i_0] [i_1]))))))) ? (((-(max(1, 2136667514))))) : 5720625674409966934)))));
                                var_13 = (max(var_13, (((((((25591 ? 1 : (arr_3 [i_0] [i_2]))) * (arr_4 [i_0 + 3] [i_0 - 1]))) / ((((((arr_3 [i_0] [i_2]) >> (3220762049 - 3220762041))) != -2003103734))))))));
                            }
                        }
                    }
                }
                var_14 = (max(((-5720625674409966933 - (((27897 % (arr_10 [i_1] [i_1] [i_0] [i_0 + 4])))))), ((((arr_0 [i_0 + 3] [i_0 + 1]) - (arr_6 [i_0 + 2]))))));
            }
        }
    }
    var_15 |= var_10;
    var_16 = (max(var_16, ((((((((5720625674409966942 + var_6) != (~var_10))))) / -var_11)))));
    #pragma endscop
}
