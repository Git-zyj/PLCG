/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((((((arr_0 [i_0]) ? (arr_5 [i_1] [11] [11] [i_1]) : (arr_3 [i_0] [i_0])))) || (((~(arr_2 [13]))))))))));
                    var_18 &= ((((min((((arr_3 [i_0] [i_0]) & -30)), var_5))) ? 2017952616 : ((-var_4 ? (arr_2 [i_2]) : (arr_4 [i_2] [17] [17] [i_0])))));
                    var_19 = ((-((86 ? -2017952601 : ((max(30, 1403163596)))))));
                    var_20 = ((((min((arr_2 [i_2]), (((17789390996162536370 ? 0 : 0)))))) ? ((var_10 ? (~2277014694) : (~2017952640))) : (((((var_4 ? 0 : 5330)) & (~var_13))))));
                }
            }
        }
    }
    var_21 = var_15;
    #pragma endscop
}
