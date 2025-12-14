/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_18 < 18191497484730037492);
    var_21 &= (~var_4);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [17] = var_14;
                var_22 = ((((min(-var_0, (max(var_0, 2993135265))))) / 7027178908525909688));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((((!(arr_15 [22] [i_1] [i_2] [i_0] [i_4] [i_1 + 2])))) < ((min((arr_3 [3]), (var_17 >= var_10)))))))));
                                var_24 = (min(var_24, var_15));
                                var_25 = (min(var_25, 7027178908525909684));
                            }
                        }
                    }
                }
                var_26 = (((max(8191, (arr_14 [i_0] [i_0] [i_1] [i_0] [i_1])))));
            }
        }
    }
    #pragma endscop
}
