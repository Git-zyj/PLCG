/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~551007086);

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_19 = ((11606559823619903588 <= (((((3743960213 ? 1518723994 : (arr_1 [i_0 - 1])))) - (max(9836956576613722784, 1119527096))))));
            arr_4 [i_0] [i_1] [i_1] = 39603;
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_20 = ((((min(262143, 651766628647962710))) || (~65408)));
            var_21 = (((~76) & (arr_5 [i_0])));
            var_22 = 1;
        }
        var_23 = -16856721929782306611;
        var_24 ^= 106;
    }
    for (int i_3 = 4; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_25 ^= ((!(((3432206217 ^ (((arr_12 [2] [2]) ? 3749387424 : (arr_10 [1]))))))));
                    var_26 = min(((min(-7906551281835675430, 3378378945))), (((((max(198, 977889078))) && -57))));

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_27 = (arr_9 [i_3 - 1]);
                        arr_16 [i_3 - 4] [i_4] [i_6] = ((130023424 / (arr_8 [i_3 - 1])));
                        var_28 &= (40866 && 204);
                    }
                }
            }
        }
        var_29 = (max(var_29, ((~((16856721929782306611 ? (arr_7 [i_3 - 1]) : ((39373 ? (arr_13 [i_3] [i_3]) : 12748456161494526508))))))));
        var_30 = (9387869977025405575 * 2107704871);
        var_31 = (199 > 2234433893);
    }
    var_32 = (~(min(var_13, -522312691)));
    #pragma endscop
}
