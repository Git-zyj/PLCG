/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (var_11 + 0);

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_15 = ((~((var_2 ? (((var_0 ? var_1 : (arr_4 [i_0])))) : (var_6 % 5)))));
            var_16 = ((((((-(arr_0 [i_0]))))) ? ((((!(-5584747400288232012 ^ 3))))) : ((-((4294967290 << (((arr_4 [i_0]) - 7422))))))));

            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                var_17 += (-(4294967290 % -18240));
                var_18 = (max(4227800347, (arr_4 [i_0])));
            }
            arr_8 [i_0] [i_0] [i_0] = ((-((-((var_11 ? (arr_4 [i_1]) : (arr_5 [i_0] [i_0] [i_0])))))));
            var_19 ^= ((var_2 > (((((var_12 > (arr_0 [i_1]))))))));
        }
        var_20 = ((((((((3 ? (arr_5 [i_0] [19] [i_0]) : (arr_4 [i_0])))) ? (min((arr_3 [i_0] [i_0] [i_0]), 4294967292)) : -var_9))) ? ((~((((arr_1 [i_0]) != (arr_7 [i_0] [i_0] [i_0])))))) : ((((300892121 << (var_2 - 7111372580940156386)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    var_21 ^= ((-(((arr_0 [6]) ? ((var_6 ? 19040 : var_6)) : (((~(arr_4 [i_0]))))))));
                    arr_16 [i_0] [i_3] [i_4] = (((var_0 || var_2) ? ((((((arr_1 [i_0]) ? (arr_11 [i_0] [i_0]) : (arr_6 [i_4])))) ? (min((arr_7 [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_3] [i_4]))) : -23310)) : ((((255 ? var_3 : var_4))))));
                    var_22 = ((((-1438680877 + (arr_13 [i_0] [i_0] [i_0] [i_0])))) + 2018464540);
                    var_23 = ((((((arr_0 [10]) ? (arr_4 [i_0]) : var_10))) ? (((arr_0 [18]) - ((var_6 + (arr_7 [i_4] [i_4] [i_4]))))) : (((((((arr_12 [12] [i_3] [i_4]) ? var_0 : (arr_12 [1] [1] [1])))) ? (~4) : var_11)))));
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_24 = arr_0 [18];
        var_25 = ((-4294967293 ^ (((max(-18235, 46492))))));
        arr_21 [i_5] [i_5] = ((32443 ? 2468847161754357664 : 191));
        var_26 = (((((~(max(var_9, (arr_17 [i_5 + 1])))))) && ((((arr_10 [8] [i_5]) ? (((~(arr_4 [12])))) : (arr_18 [i_5]))))));
        var_27 -= ((((((min((arr_17 [i_5 + 1]), (arr_11 [i_5 + 1] [15])))) || (arr_19 [i_5]))) ? ((var_8 + (arr_6 [i_5 + 1]))) : (max(var_4, (var_12 / var_2)))));
    }
    #pragma endscop
}
