/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149233
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
                    var_15 = (max((arr_3 [i_1 + 3] [i_1 - 1]), (~65024)));
                    var_16 = (max((max(-8514, 21362)), ((((max((arr_7 [i_2] [i_2] [i_1 + 1] [i_0]), -8529))) ? -8514 : (((-8514 == (arr_3 [i_2] [7]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_17 -= ((!(((((arr_12 [i_3]) * (arr_11 [i_3]))) >= ((((arr_11 [i_3]) >> (2646102856238952904 - 2646102856238952882))))))));
                arr_16 [i_3 - 1] = (-(!0));
                var_18 = (max(var_18, ((((((~(max(10936, 2191266784971895014))))) || ((max((((arr_13 [7]) ^ (arr_10 [3]))), ((max((arr_14 [i_3]), (arr_9 [i_3]))))))))))));
                var_19 = (max(var_19, (((+(max((((arr_10 [i_3]) ? -1153783017 : (arr_14 [i_3]))), (((65024 == (arr_9 [i_3])))))))))));
            }
        }
    }
    #pragma endscop
}
