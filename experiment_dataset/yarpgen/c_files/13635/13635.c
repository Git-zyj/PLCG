/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 18446744073709551615;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, 18446744073709551615));
                    var_15 = (18446744073709551606 - 8588886016);
                }
            }
        }
        var_16 = ((50364 ? 41939 : (18446744073709551615 / 1)));
        var_17 = ((15174 ? ((41939 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_0] [i_0] [i_0]))) : 0));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_18 = (max((((((arr_11 [17]) ? 18446744073709551611 : (arr_10 [i_3]))) - (arr_11 [i_3]))), (arr_10 [i_3])));
        arr_12 [i_3] = (((max(41939, (arr_11 [i_3])))) ? 41919 : 13413524824093474776);
        var_19 = ((((-((12006789317376230686 ? 50373 : (arr_10 [i_3])))))) ? (((((arr_10 [i_3]) < ((8254632902152631012 ? 0 : 65510)))))) : 5033219249616076840);
        var_20 = (min((arr_11 [20]), ((41939 ? 6120393057200355202 : 0))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_21 = 21263;
        var_22 = (!18446744073709551591);
        arr_15 [i_4] [i_4] = 9392;
    }
    var_23 = var_6;
    var_24 = -var_1;
    #pragma endscop
}
