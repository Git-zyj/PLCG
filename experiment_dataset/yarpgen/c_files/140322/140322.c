/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(((-12689 / (var_10 | 10632389056727994386))), -var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((((var_3 ? 14361984782463050953 : -432255608))) ? -46 : ((~(arr_2 [i_0] [i_0] [i_0]))))) < 49));
                var_13 = (61 | 74);
                var_14 = 1;

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] = (min((~49), (!3814)));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (min(185464598, 39794));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_1] [i_0] = ((!(5044807385529542346 <= 6018187584778702989)));
                    arr_16 [i_0] [i_0] = 1;
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_15 -= (min(0, 31239));
                    arr_19 [i_4] [i_1] [i_4] |= (((!1051816395) > ((74638437 ? ((min(-1051816395, 1051816382))) : 3115044342))));
                    arr_20 [i_0] [6] = (((13263797917452680192 >> (-124 + 143))));
                    arr_21 [i_0] [i_1] [i_1] [i_0] = ((!(((1926128947 ? 82 : (-49 == 39))))));
                }
            }
        }
    }
    #pragma endscop
}
