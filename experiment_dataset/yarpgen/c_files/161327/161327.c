/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = min((((arr_0 [i_1]) / (arr_2 [i_0]))), (arr_2 [i_1]));
                arr_4 [i_0] [i_0] = (max((arr_2 [i_0]), ((((((arr_0 [i_0]) ? (arr_2 [i_0]) : 8356))) ? (max(1125849544865327673, (arr_0 [i_0]))) : (((arr_2 [i_1]) | (arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 |= ((-((((min(512, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) - (min(510, 1948720222012579522))))));
                            var_15 = (max(((-177 != ((max((arr_9 [i_0] [0] [i_1] [i_2] [i_3]), -32648))))), ((!((!(arr_11 [i_0] [i_1] [i_1] [i_2 - 1] [i_3] [i_3])))))));
                            var_16 -= ((175 >= ((((((-(arr_11 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0])))) || (((~(arr_6 [i_0] [i_0] [i_2] [i_3])))))))));
                            var_17 *= arr_2 [7];
                        }
                    }
                }
                var_18 = (((((-355644358 / (max(-9019325526536948013, (arr_7 [i_0] [i_0] [i_1])))))) ? ((max((((arr_9 [i_1] [i_1] [i_1] [i_0] [i_1]) / (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1]))), ((512 ? -32648 : 243))))) : (((1 / (arr_8 [i_0] [i_0] [i_1]))))));
            }
        }
    }
    var_19 = (min((((((min(65023, var_7))) ? (~var_3) : ((var_6 ? 0 : var_9))))), (((((var_0 ? var_11 : -1))) ? (var_4 | var_4) : (var_9 | var_0)))));
    #pragma endscop
}
