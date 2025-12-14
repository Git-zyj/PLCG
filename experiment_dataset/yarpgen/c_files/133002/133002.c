/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (((arr_1 [i_2]) ? ((max(2367974808, 1713930421))) : var_10));
                    var_18 = (arr_5 [i_0] [i_1] [i_2]);

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_19 = (arr_3 [i_0] [i_0] [i_0]);
                        var_20 = (min(var_20, (((((((arr_0 [i_0]) ? 1926992488 : 1926992487))) ^ (max((((arr_4 [i_3] [i_3]) ? 4294967295 : 18446744073709551611)), var_11)))))));
                        var_21 = (-9223372036854775807 - 1);
                    }
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_22 = (((var_3 | var_16) > (((((min(10360436768110313434, var_9)) <= 1617226331551232249))))));
                        var_23 = (max(var_23, (arr_6 [i_0] [12] [i_2] [i_4 + 1])));
                    }
                    arr_10 [i_2] [i_0] [i_2] [i_2] = ((((((var_3 > 593209317) >= 16829517742158319380))) >= ((((arr_3 [i_0] [i_0] [6]) != (min((arr_3 [14] [i_1 - 1] [17]), 33)))))));
                }
            }
        }
    }
    var_24 = (max(var_6, var_11));
    #pragma endscop
}
