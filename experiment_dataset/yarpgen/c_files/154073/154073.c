/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((~(60325 << var_1)))) ? (!var_11) : -1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 += (!((max(var_9, ((1538840365 ? var_9 : 871654335))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (min(-16, 8121896520581170576));
                    var_16 += ((max(-46, ((~(arr_2 [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                {
                    var_17 = (((min((arr_8 [i_1]), ((min(1, 1))))) * (arr_8 [i_1])));
                    arr_11 [5] [i_0] [i_1] [i_3] = ((var_11 ? (((-4 ? 5582 : (arr_8 [i_0])))) : (((((-1 ? (arr_1 [i_0] [i_1]) : (arr_8 [i_0])))) ? (max(var_6, var_5)) : (~1)))));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [4] = 1;
                    var_18 ^= (max((max(((127 ? (arr_12 [i_4]) : 59)), ((max((arr_5 [i_0] [i_1] [i_0] [i_4]), -1))))), ((((arr_0 [i_4] [i_1]) ? (arr_10 [14] [14]) : (max((arr_8 [i_1]), (arr_8 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [1] [22] [i_1] [14] [14] [i_6 - 2] = ((((((arr_15 [i_5] [6] [6] [i_4] [i_6 - 1] [i_6 - 1]) ? (arr_15 [i_0] [i_0] [i_5] [i_6] [i_6 - 1] [i_0]) : var_0))) ? (arr_15 [i_0] [i_1] [i_6] [i_5] [i_6 - 1] [i_5]) : ((max(127, 127)))));
                                var_19 -= ((!(((arr_19 [10] [i_0] [i_0] [i_5] [i_6 + 1] [i_6 - 1] [i_6 + 1]) && 8683292408146566440))));
                                var_20 = (arr_15 [i_0] [5] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    var_21 += ((-8683292408146566428 ? ((((arr_2 [i_4]) ? (arr_13 [i_0] [i_1] [22]) : (arr_8 [i_0])))) : ((min((-112 * 31), -62)))));
                }
            }
        }
    }
    #pragma endscop
}
