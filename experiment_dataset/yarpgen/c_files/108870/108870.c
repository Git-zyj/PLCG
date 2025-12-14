/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_11 ? var_12 : (!var_2)))) ? (max(var_15, (min(var_14, 144)))) : (+-2768386854884062998)));
    var_19 = (((((((max(9214205150192352027, 13705611508404615824))) ? 18223468469655880801 : (((1 ? 135 : 120)))))) || 20276131242454425));
    var_20 = ((9232538923517199589 ? var_15 : ((~(min(42, 17044515604796143173))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (arr_3 [i_0] [i_0]);
                arr_7 [i_0] [i_1] [i_1] = (min((arr_0 [i_0 - 1]), ((max((arr_1 [i_0 - 2]), 0)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            {
                var_21 = (!15876444223504379765);
                var_22 = 15876444223504379765;
                arr_14 [i_2] [i_2] = ((!((min((~var_7), (arr_2 [i_2]))))));
                var_23 = ((-((((min(187, -1370982852843424476))) ? 26 : ((-1370982852843424476 ? 31267 : 154))))));
            }
        }
    }
    #pragma endscop
}
