/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(5233195126300264738, 1));
    var_12 = (max((max((min(var_5, var_9)), ((max(var_7, var_10))))), ((max(1, 1)))));
    var_13 = (min((min(((min(1, var_0))), (min(17677012819945606542, 18090)))), ((max((max(var_2, 1)), ((min(var_8, 1))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = min(((max(30, -29))), (min((max(1, var_2)), ((min(var_8, var_4))))));
        arr_3 [i_0] = (max(((max(((max(2080374784, (arr_0 [7] [i_0])))), (min((arr_1 [i_0] [i_0]), 7196689939724649738))))), (max(((min(var_9, 70))), (min(-4661860063698362982, 5319894896183492771))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_1] = 50331648;
                        arr_14 [i_1] [i_1] [i_1] [i_1] = 30;
                    }
                }
            }
        }
        arr_15 [i_1] [i_1] = 1;
    }
    #pragma endscop
}
