/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 = (min((max((max(var_4, 1152358554653425664)), var_11)), 35755));
                            arr_12 [i_0] [i_1] [i_0] [i_0] = ((-(4294967283 - var_10)));
                            var_17 &= 1361210001;
                        }
                    }
                }
                var_18 &= (+-1361210002);
            }
        }
    }
    var_19 = (min(1361209997, 35760));
    #pragma endscop
}
