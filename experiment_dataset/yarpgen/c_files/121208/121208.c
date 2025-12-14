/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-var_8 & 8888695228804005708);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_1] = (((24065 ? 1 : var_14)));
                    var_16 = (min(var_16, var_4));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_17 &= ((11616739941009760332 | ((max(((min(-1211110058, (arr_10 [i_0] [i_1] [14])))), ((-5995274747453018081 ? -5872296802258856041 : -32742)))))));
                            var_18 = (min(var_18, (min(((((var_7 ? 3604406057132217866 : 15885738737117558292)) % ((max(-1072829748, 127))))), ((min(var_3, var_2)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
