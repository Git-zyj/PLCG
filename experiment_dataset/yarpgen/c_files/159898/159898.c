/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((~((((-17284 ? 16972613245139187698 : 28)) | var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 *= (max((min(1365768819, (arr_0 [i_1 - 1] [i_1 + 2]))), (((1365768819 ? (arr_0 [i_1 - 2] [i_1 - 2]) : var_8)))));
                            arr_9 [i_3] [i_3] [i_3] [i_3] &= -9223372036854775807;
                            var_14 = (max(var_14, ((max((((!(((17 ? var_4 : 4294967240)))))), (((var_4 - 1971224834635398343) ? 9669171713932938392 : var_8)))))));
                        }
                    }
                }
                arr_10 [i_0] [i_1 + 2] |= ((9669171713932938392 ? ((((((255 ? 8149423255944564215 : 15984))) ? (min(-1971224834635398343, 183)) : var_6))) : (((((arr_3 [i_0]) ? 10407833333677538445 : 0)) | ((min(6, 1)))))));
                var_15 = (arr_4 [i_0] [i_1 - 2] [i_0]);
                var_16 *= (max(((((((var_2 ? 4294967247 : -8149423255944564215))) ? 17284 : (!0)))), (max((((28672 ? -9223372036854775805 : var_0))), ((-27316 ? var_9 : 3006983840))))));
                var_17 = 16380;
            }
        }
    }
    var_18 = -161360131620244729;
    #pragma endscop
}
