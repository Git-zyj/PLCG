/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (max(var_10, ((min(((((arr_0 [i_0]) ? 1572436634 : 53512))), ((((~90) || -5923897561734504736))))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = -0;

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_10 [i_0] = (((12041 >= 6920447456993526683) + (arr_6 [i_0])));
                var_11 = 30;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_12 = (((((13990499975321422367 ? (arr_16 [i_4 + 1]) : (arr_16 [i_4 + 1])))) ? ((53517 ? 13990499975321422367 : (arr_16 [i_0]))) : (((1465373418039500514 ? 7 : (arr_16 [i_2]))))));
                            var_13 = (min(var_13, 12));
                            var_14 = (arr_15 [i_1] [i_1] [i_2] [i_2] [i_4 - 1] [i_4] [i_4 - 1]);
                            var_15 *= (((~(min((arr_5 [i_0] [i_4] [i_2]), -5923897561734504720)))));
                            var_16 = (51650 & 4456244098388129253);
                        }
                    }
                }
            }
        }
    }
    var_17 = var_1;
    var_18 = (max(((-((-1380765765 ? var_4 : var_9)))), -51650));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_19 = (((((arr_15 [i_5] [i_5 - 2] [i_6] [i_6] [i_7] [i_6] [i_5 - 2]) != 0)) ? (arr_11 [i_6] [i_7 + 1]) : ((((arr_20 [i_7 - 1] [i_7 + 1]) ? (arr_20 [i_5 + 1] [i_7 - 1]) : (arr_20 [i_5 - 2] [i_5 + 1]))))));
                            var_20 = (((((((((arr_0 [i_5]) ? 58903 : (arr_15 [i_5] [i_5] [i_6] [i_6] [i_7] [i_7 + 1] [i_8])))) ? (3265968774964118620 != 255) : 55416))) || ((max((((arr_21 [i_5] [i_6]) ? (arr_12 [i_5] [1] [i_5] [i_8]) : 29)), (max(1122196363, -1289749697)))))));
                            arr_27 [i_8] [i_7 + 1] [i_5] = ((((0 >= (min(65535, 726047575)))) ? ((((16981370655670051122 ? (arr_20 [i_8] [i_5]) : 3265968774964118629)) - 40)) : -4141555940));
                        }
                    }
                }
                var_21 = ((((65498 && (arr_18 [i_5 - 1]))) ? (((arr_18 [i_5 - 1]) ? (arr_18 [i_5 - 1]) : (arr_18 [i_5 - 1]))) : ((~(arr_18 [i_5 - 1])))));
            }
        }
    }
    #pragma endscop
}
