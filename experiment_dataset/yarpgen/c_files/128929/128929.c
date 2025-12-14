/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    var_15 += (arr_4 [i_0]);

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_3] [i_1] [i_0] = ((-(!6472)));
                        var_16 |= ((((-9080010284223168756 ? ((12863456743313662179 ? 288225978105200640 : (arr_0 [i_1 - 2]))) : (((((arr_4 [i_1 + 1]) > 7))))))) ? (max(2726700954322046370, 511)) : (~1));
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] = ((((min(365, 288225978105200629))) ? ((-(arr_4 [i_0 + 1]))) : 1));
                        var_17 = 65171;
                    }
                    var_18 = (arr_5 [i_1 - 1] [i_1] [i_2 - 3] [i_1]);
                }
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_19 = 288225978105200640;
                    arr_14 [i_4] = (0 ? ((((((!(arr_2 [i_1]))) && (((3513285790471516238 ? 11866 : 1854225298563393486))))))) : (min(((-(arr_0 [i_0]))), 18636)));
                }
                var_20 = ((216 ? 364 : ((max(1, 22873)))));
                var_21 = 224;
            }
        }
    }
    var_22 = (max(var_22, 1285682238));
    #pragma endscop
}
