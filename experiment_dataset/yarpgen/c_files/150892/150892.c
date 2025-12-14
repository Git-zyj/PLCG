/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_12 |= ((1 ? (((arr_0 [i_1 - 3] [4]) ? 15 : 2386882663220441910)) : 4294967295));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] [i_1] = ((((((1835370436 ? (arr_7 [14] [19] [i_2] [i_3]) : 37409)))) ? ((((79 == 3) ? ((var_11 ? (arr_6 [i_0] [i_1] [i_1]) : (arr_5 [i_3]))) : (arr_7 [i_3 + 1] [i_2] [i_2] [i_1 - 2])))) : (((((1 ? var_2 : 2805183552))) % (288230376151711744 % 31742)))));
                            var_13 = -77;
                            var_14 = ((var_0 ? -2624190148931716364 : (((((1 ? var_1 : (arr_4 [i_0]))) * (arr_10 [i_3 - 3] [i_3 - 3] [i_3] [i_1 - 2] [i_1] [10]))))));
                            var_15 |= ((2624190148931716345 ? ((((18446744073709551615 ? 5 : 2512763339)) * 0)) : ((((arr_6 [i_0] [i_0] [i_0]) ? -111 : 96)))));
                            var_16 = ((((min((arr_0 [i_1 + 2] [i_3]), (arr_0 [i_2] [12])))) || (arr_5 [i_0])));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [8] = (((28271 ? (268369920 / 3622597498) : 68)) % (((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1 - 1]) != (((min(110, 32752)))))))));
                var_17 = 50;
            }
        }
    }
    var_18 = (min(var_0, ((-114 ? var_9 : -15243))));
    #pragma endscop
}
