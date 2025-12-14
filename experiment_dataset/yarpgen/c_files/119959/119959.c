/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = (i_1 % 2 == 0) ? (((((((arr_4 [i_1] [i_1] [i_0 + 4]) << (((min((arr_4 [i_0 + 4] [i_1] [i_1]), var_7)) - 556961153))))) ? ((((10654840844216437169 ? 3367573171146377885 : -10331)) ^ ((((arr_3 [i_1]) - -8643609272428597099))))) : ((min((((!(arr_4 [1] [i_1] [5])))), (((arr_0 [i_0]) ? (arr_5 [i_0] [i_0]) : 15446)))))))) : (((((((arr_4 [i_1] [i_1] [i_0 + 4]) << (((((min((arr_4 [i_0 + 4] [i_1] [i_1]), var_7)) - 556961153)) + 186273095))))) ? ((((10654840844216437169 ? 3367573171146377885 : -10331)) ^ ((((arr_3 [i_1]) - -8643609272428597099))))) : ((min((((!(arr_4 [1] [i_1] [5])))), (((arr_0 [i_0]) ? (arr_5 [i_0] [i_0]) : 15446))))))));
                var_17 = (min(var_17, ((min((min((min((arr_4 [i_0 + 1] [4] [i_1]), var_7)), ((max((arr_1 [i_0]), var_9))))), var_7)))));
            }
        }
    }
    var_18 = ((+(((var_16 || 50107) & (min(16827522014679136, var_11))))));
    #pragma endscop
}
