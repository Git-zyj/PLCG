/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = (min(var_12, var_4));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((15295 ^ (((((24576 ? var_2 : 0)) >= var_9)))));
        var_13 = (((((((26161 >> (1417270082 - 1417270055)))) ? ((min(var_9, var_3))) : var_4)) & var_8));
    }
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (max((((arr_5 [i_1]) + var_5)), (((arr_0 [i_1 - 2] [i_1 + 2]) ? var_8 : 114613086))));
        var_14 = (max(var_14, (arr_5 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                {
                    var_15 = (arr_4 [i_1] [i_1]);

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_16 = (max(var_16, var_9));
                        arr_14 [i_1] [i_1] [i_4] = (min(222919777, (var_7 & 4294967295)));
                    }
                    for (int i_5 = 3; i_5 < 8;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            var_17 = 1;
                            var_18 = (max(var_18, (((((max((arr_2 [i_3 - 1]), (arr_2 [i_3 + 1])))) ? (((!(arr_2 [i_1 + 1])))) : (4294967295 == 36028797002186752))))));
                            var_19 ^= (max((((((((-32767 - 1) ? var_9 : (arr_13 [i_3])))) > ((32758 ? 32764 : 7059711779146912385))))), (max(var_2, 2107101856437200663))));
                        }
                        var_20 = ((((min(var_8, ((var_1 ? 3388722105789354435 : 19397))))) && ((max(2, (min(var_6, var_5)))))));
                    }
                    for (int i_7 = 3; i_7 < 8;i_7 += 1) /* same iter space */
                    {
                        var_21 = 50242;
                        arr_21 [6] [6] [i_2] [i_1] = ((!((max((arr_16 [i_1 - 3] [i_3] [i_3] [i_3]), (arr_11 [i_1 + 2] [i_3 - 1] [i_3 + 2]))))));
                        var_22 = (arr_8 [i_1]);
                    }
                    var_23 |= (max((max((arr_15 [i_1] [i_1] [i_3 + 1] [i_1 + 3] [i_1]), (arr_15 [i_1] [i_1] [i_3] [i_1 - 3] [i_3]))), ((((arr_15 [i_1] [i_2] [9] [i_1 - 1] [i_1]) == (arr_15 [i_1] [i_2] [i_3] [i_1 + 3] [i_3]))))));
                    arr_22 [8] [i_2] [i_3] = ((19390 != ((19628 + ((40550 ? 7059711779146912385 : 65511))))));
                }
            }
        }
        var_24 = var_7;
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_25 = ((!((min((!32834), (((arr_23 [12]) ? var_4 : 188)))))));
        var_26 = (((~var_2) && (((var_9 ? ((231 ? 1324448782828072667 : 3)) : var_6)))));
    }
    var_27 = (min(var_27, (((var_2 ? (((!(!-56)))) : -917839919)))));
    #pragma endscop
}
