/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((!(((((4 ? -5375 : -5401)) * (((arr_2 [i_1] [i_1] [i_1]) ? 5412 : -5414))))))))));
                var_20 -= (((((((-7007823424626022050 < (arr_1 [13] [i_0]))) ? 262143 : ((-(arr_1 [i_0] [i_0])))))) ? -511 : (!-5401)));
            }
        }
    }
    var_21 -= -5375;
    var_22 = 1;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_11 [i_2] [19] = (((((arr_6 [i_3]) ? (arr_6 [i_2]) : (arr_5 [i_2]))) < (((-5408 % 1) ^ (arr_10 [i_2] [i_2])))));
                var_23 ^= (arr_8 [i_2] [i_3] [i_3]);
                arr_12 [i_3] [i_3] [i_3] = (((!78) ? ((((arr_5 [i_3]) ? (arr_9 [0]) : (arr_10 [i_2] [i_2])))) : ((((((arr_8 [i_2] [i_2] [i_3]) ? 1 : (arr_6 [i_2])))) ? ((1 ? 24 : -5394)) : -5359))));
                var_24 = ((+((-526647069543151080 ? (((arr_7 [i_2] [i_2]) ? 1 : 5374)) : (((arr_6 [i_2]) ? (arr_5 [i_2]) : (arr_5 [i_2])))))));
            }
        }
    }
    #pragma endscop
}
