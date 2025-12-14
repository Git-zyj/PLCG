/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0] [i_1 - 2] [i_1] = ((var_1 ? var_13 : (~-var_7)));
                    arr_7 [i_1] = ((1 ? ((-(arr_3 [i_0] [i_1] [i_2]))) : var_0));
                    arr_8 [4] |= var_3;
                }
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    arr_12 [i_1] [17] [i_3 - 1] = (1947213337 ? 12287900061166008050 : 8646911284551352320);
                    arr_13 [20] [i_1] [20] [i_1] |= (~var_1);
                    var_16 = ((!(arr_1 [i_3 - 1] [i_3 + 3])));
                }
                var_17 = (max(var_17, (!var_13)));
            }
        }
    }
    var_18 = ((!((min((7 <= var_14), -3422)))));
    #pragma endscop
}
