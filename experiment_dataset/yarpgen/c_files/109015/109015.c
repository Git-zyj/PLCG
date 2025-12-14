/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((!-1251067758172668163), ((!((max(var_9, var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 -= (((max((arr_6 [i_0]), (((arr_7 [i_0] [i_1] [10] [10]) & (arr_6 [i_0]))))) * (arr_6 [i_0])));
                    var_16 += ((((((1251067758172668162 ? (arr_2 [i_0]) : (arr_4 [i_0] [i_1 - 2]))) <= (((((arr_1 [i_0] [i_0]) < 26658)))))) ? ((((!(arr_6 [i_0]))))) : (min((((arr_4 [i_2] [i_2]) / (arr_0 [i_1]))), (((-1510098371 ? -59 : (arr_7 [i_0] [i_1] [10] [4]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (max((arr_4 [i_2] [i_2]), (((((((arr_3 [i_0] [13] [i_1]) - (arr_7 [i_0] [i_0] [i_0] [i_3])))) > (((arr_12 [i_1] [7]) ? 556324210 : var_3)))))));
                                arr_17 [i_0] [i_1] [15] [i_1] [i_4] [i_0] [15] = (arr_15 [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_4] [i_1]);
                                var_18 = ((((((!18076471458020749168) ? (26651 * var_3) : -7123289916998097907))) ? (((17565599555143499738 ? -6123 : -1251067758172668178))) : (((((841489146 ? 370272615688802448 : var_8))) ? (78 && 258664027) : (((arr_3 [i_0] [13] [i_1]) % 18076471458020749177))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 += ((((((!(-81 < 16))))) ^ -2824790032708478177));
    var_20 = var_12;
    #pragma endscop
}
