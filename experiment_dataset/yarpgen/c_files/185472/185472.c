/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_16 = ((-((9223372036854775807 ? 12991826198390000993 : var_14))));
        var_17 = ((((((5975324872679602373 ? 5985843152960681446 : (arr_0 [i_0 - 3]))))) ? (!var_9) : 2722183629173130497));

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            arr_4 [10] [i_1] = (((max((((arr_2 [i_0 - 1] [i_0] [i_0]) ? var_13 : (arr_1 [i_0]))), (max(var_7, var_2))))) ? (((((var_0 ? (arr_2 [i_0] [i_0 + 2] [i_1]) : 1))))) : (max((((-(arr_2 [i_0] [i_0] [5])))), var_0)));
            var_18 = (5985843152960681457 ? (arr_0 [i_1 - 1]) : 1);
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_19 = (min(var_19, 5985843152960681446));
                            var_20 = (max(var_20, (((+(min((~var_14), 2305771273205335243)))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_21 = (min(var_21, ((((min(41, 5985843152960681445))) ? var_0 : 4397622658132666071))));
        var_22 = 3155179073059749902;
    }
    #pragma endscop
}
