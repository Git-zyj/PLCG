/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (min(((((!(arr_8 [i_0]))) ? ((((83 || (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))))) : (~11477913360058449720))), var_8));
                                var_14 = ((11477913360058449742 ? ((-3391188862661180080 / (arr_10 [i_3 - 1] [i_3 + 3] [i_3 - 2] [i_3 - 2] [i_3 + 2]))) : ((((!(arr_9 [i_0] [i_2] [i_3 + 3] [i_3] [i_3] [i_4])))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((+(((arr_9 [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7] [i_7]) >> (((arr_16 [i_7 - 1] [i_7 - 1] [i_7] [i_7] [15] [i_7]) - 7435581777692443568)))))))));
                                var_16 *= (((!6968830713651101900) >> 0));
                            }
                        }
                    }
                }
                var_17 = ((((min(6968830713651101897, (arr_13 [i_0] [i_1]))) < ((((1921053589063758207 < (arr_2 [i_0] [i_1]))))))));
            }
        }
    }
    var_18 = var_2;
    var_19 = ((((((((11477913360058449715 ? 13283 : var_5))) ? ((4294967295 ? var_6 : 0)) : var_5))) ? (((var_9 + 4294967291) & ((var_5 ? var_5 : var_7)))) : ((((((var_9 >> (var_5 - 4662947303909720486)))) / 1944020066)))));
    #pragma endscop
}
