/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_21 = ((((59194 ? (arr_6 [i_0] [i_0]) : var_4)) ^ ((max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0]))))));
                arr_7 [i_0] = (23022 >= 42511);
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_22 = -28786;
        arr_10 [i_2] [i_2] = 7237;
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_23 ^= ((((10082009043845916829 + (14870784696647441275 - 746768656))) < var_1));
        var_24 = ((((((((~(arr_1 [6])))) && ((((arr_1 [6]) ? 8364735029863634786 : (arr_11 [i_3])))))))) | ((46396 ? 65535 : 10231434030551138953)));
        arr_13 [i_3] = -22;
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_25 = (min(var_25, (((((((1 ? (arr_9 [i_4] [i_4]) : var_0)) + ((((arr_5 [i_4] [i_4]) ? 736804823 : 837))))) - ((((((min(42187, 32216)))) - -var_3))))))));

        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            var_26 = (max(var_26, (((-((((var_3 - 10348852123398097970) || (arr_9 [1] [i_5])))))))));
            var_27 = (min(var_27, (((((((max(41244, 3254))))) <= (min(-26532, (min(12385946121125032757, (arr_0 [i_5]))))))))));
        }
        arr_20 [i_4] = (arr_18 [1] [i_4]);
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_28 = (arr_11 [i_6]);
        var_29 -= ((arr_18 [i_6] [i_6]) ? (~12427822347340259843) : ((0 ? (((min((arr_8 [i_6] [19]), (arr_22 [i_6]))))) : 18855)));
    }
    #pragma endscop
}
