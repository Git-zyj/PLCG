/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_8 || (((((var_14 ? var_4 : var_12))) && (((976939251 ? var_14 : var_3))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = var_14;
                    var_20 ^= (((((-(arr_5 [i_0] [i_2])))) * (min(((54 ? (arr_5 [i_2] [i_2]) : (arr_3 [i_0] [i_1] [i_2]))), ((max(25159, -71)))))));
                    var_21 = (max(var_21, (((((max(var_8, (arr_4 [i_0] [i_1] [i_1] [i_2])))) == ((((!(arr_4 [i_2] [i_1] [i_1] [i_2]))) ? 14646415390967795384 : (((min(253, 31551)))))))))));
                    arr_7 [i_0] = (arr_6 [i_0] [i_2] [i_1] [i_0]);
                }
            }
        }
    }
    var_22 += (((((28 ? 184 : 48))) ? var_1 : var_9));
    var_23 = ((((min(50042, -54))) ? -17375 : -20912));
    var_24 = (min(var_24, (((var_9 ? var_1 : (min((max(7340032, 1)), (var_1 == 1))))))));
    #pragma endscop
}
