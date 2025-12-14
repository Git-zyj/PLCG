/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [16] &= (max(((((max(-5716889320076186727, -18))) ? ((63029 ? 38983 : 16)) : 11717)), (((((max(-18336, 0))) ? ((max(-13817, 4294967295))) : -942988865705262528)))));
                arr_5 [i_0] [i_0] = 0;
            }
        }
    }
    var_19 = (max((max((max(16, -31)), ((max(1, 17748))))), ((max(30, 4294967295)))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_20 = 4105041884;
                    var_21 = (max(var_21, ((((((37489 ? 13132001580530885810 : -31))) ? ((4 ? -48 : 1)) : 0)))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_22 = 5879298691990768707;
                    var_23 = (max((max(((max(0, -20))), (max(4532, 11417497927239805737)))), 15061));
                }
                arr_19 [i_3] [11] = (max(((max((max(3204, 908745598)), ((-3 ? 0 : 30968))))), 7527143898224980540));
                arr_20 [i_3] = (max(((max(((max(1, 37489))), ((-102 ? -3637290045869669750 : -54))))), (max((max(16061536696993244807, 30949)), (((1 ? 30 : 30957)))))));
            }
        }
    }
    #pragma endscop
}
