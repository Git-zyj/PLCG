/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((!((((~4113576451811135719) << (!7031043633523614066))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_2] = ((-11542 ? (((-(arr_1 [i_0] [i_0])))) : 5006226418046585185));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (((((~(!-11859)))) || (((max(-27433, 1091086007))))));
                    arr_10 [i_0] = 1091086023;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_14 = ((-((((arr_6 [i_1] [i_1] [i_0] [i_1]) && 0)))));
                    arr_15 [i_0] [i_0] [i_3] = ((!(((~(min(56, 3330643388012296076)))))));
                    var_15 = ((!(((((~(arr_4 [i_1] [i_3])))) < -483034028))));
                }
                var_16 &= (((arr_4 [i_0] [i_1]) >= ((~(((!(arr_6 [i_0] [i_1] [2] [i_1]))))))));
                var_17 = 3203881282;
            }
        }
    }
    var_18 += 18469;
    var_19 |= (~var_5);
    var_20 = ((-var_12 ? 1111224854 : var_2));
    #pragma endscop
}
