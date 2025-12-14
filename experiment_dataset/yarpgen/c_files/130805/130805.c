/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 0;
    var_12 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (arr_2 [i_0]);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((((var_6 * (!var_3))) * ((((arr_8 [i_2] [i_1] [i_1] [i_0]) << (1784661287 - 1784661260))))));
                    var_13 = (max(var_13, (arr_4 [i_2] [i_1])));
                    var_14 = (-(max((((arr_7 [i_2] [i_1] [i_2] [0]) - var_2)), ((((arr_6 [i_2] [i_0] [i_0] [i_0 + 1]) - -1784661303))))));
                    arr_11 [i_0] [i_0] [i_0] = (((arr_3 [i_1 - 1] [i_1 - 1]) ? ((1784661302 ? (arr_2 [i_1 + 2]) : (arr_2 [i_0 - 1]))) : ((((((arr_8 [i_0] [5] [i_2] [i_0]) || -1784661288)) ? (arr_1 [i_0]) : ((1784661284 >> (arr_8 [12] [i_1] [4] [i_1]))))))));
                }
                var_15 = (max(var_2, (+-1784661278)));
                arr_12 [0] [i_1] [i_0] = (((arr_3 [i_0] [i_1 + 2]) ? ((1784661287 ? 1784661278 : 1784661283)) : 1784661288));
                var_16 = (max(-1784661288, -1784661288));
                arr_13 [i_0] [i_0] = ((((1784661302 ? (arr_3 [i_0 + 1] [i_0 - 1]) : (arr_3 [i_0 + 1] [i_0 - 1]))) < -var_4));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_17 = (min(var_17, ((((1784661303 > 1784661289) ? var_6 : ((max(1784661286, -1784661279))))))));
                    var_18 = (min(var_18, (((max(-1784661296, (~1784661253))) / (arr_20 [i_4] [i_4] [i_4] [i_4])))));
                    arr_22 [i_3] [i_4] = ((-(((arr_21 [10] [i_4] [i_5]) % (min(var_8, 1784661266))))));
                    arr_23 [i_3] [i_4] [i_5] = (((((((!(arr_15 [i_3])))) >= (((-1784661254 || (arr_19 [i_3] [i_4])))))) ? (min(((-1784661262 ? var_4 : var_5)), (arr_21 [i_4] [i_4] [i_4]))) : -1784661287));
                }
            }
        }
    }
    var_19 = ((1784661276 - (~-1784661303)));
    #pragma endscop
}
