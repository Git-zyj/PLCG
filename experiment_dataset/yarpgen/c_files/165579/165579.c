/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, 13231114059463948281));
    var_18 ^= ((!((min(var_3, ((max(var_15, var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = ((((max(8196301573266147239, 3531496284))) ? (max((!var_7), (var_9 * -8196301573266147239))) : (((((min(-4445329657441784936, (arr_2 [i_0] [i_2 - 3])))) ? 0 : var_15)))));
                    arr_10 [i_0] [i_1] [i_0] = -var_16;
                }
            }
        }
    }
    var_20 &= var_1;
    var_21 = (max((((!((min(var_1, 6310788067471671019)))))), (min(var_1, (min(var_10, var_12))))));
    #pragma endscop
}
