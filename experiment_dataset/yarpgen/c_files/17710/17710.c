/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(0, 3654597215871894832))) * (((~6678500989008597923) & -921172868))));
    var_11 = var_9;

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_12 = (-1805516072 > var_9);
                    arr_8 [i_0] [i_0] = ((((max((~-1805516067), (max(var_2, var_1))))) ? ((min(1805516076, (max(var_2, 1))))) : (((min(var_9, 6678500989008597923)) / (arr_2 [i_0])))));
                    var_13 = (max(-6223898882760165294, (((~(arr_3 [i_0] [i_0 + 2] [i_0 + 1]))))));
                }
            }
        }
        var_14 = 5283243326029542342;
        var_15 = ((((((13231993849960669220 == 6223898882760165294) || (((39713 ? 32767 : 4294967295)))))) << ((((var_3 ? (var_5 / var_3) : var_6)) - 4436916079))));
        arr_9 [i_0] [8] = (arr_3 [i_0] [i_0] [8]);
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (((((3994229441 ? 116 : (arr_5 [i_3] [0]))) ^ ((504403158265495552 + (-69 || var_2))))))));
        var_17 = (min(var_17, 10));
    }
    for (int i_4 = 1; i_4 < 8;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_18 &= (arr_18 [i_4] [9]);
            arr_19 [i_4] [i_5] = min(((max(var_7, (!3998932715033858890)))), (min(var_3, (var_0 == 32780))));
        }
        arr_20 [5] = ((~(arr_1 [i_4 + 3])));
        var_19 = (arr_4 [3] [i_4] [i_4]);
    }
    var_20 += ((var_5 ? 32753 : ((((-32759 * 2064384) <= var_7)))));
    #pragma endscop
}
