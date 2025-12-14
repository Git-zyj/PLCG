/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((!(arr_4 [i_0] [i_1] [i_0])));
                    arr_9 [i_1] [i_0] = 71;
                    var_12 *= (((((8862 ? (arr_3 [i_2 - 3]) : (arr_3 [i_2 - 1])))) == (((var_6 & (arr_4 [i_0] [0] [12]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [1] [i_3] [i_0] [i_0] [i_1] [i_0] = (max((((arr_10 [i_2 - 2] [i_2] [i_2 - 3] [i_3] [i_3] [i_3]) ^ ((-(arr_11 [i_4] [i_3] [i_0] [7] [i_0]))))), ((((min(4294967295, (arr_5 [i_0] [i_0] [i_0] [4])))) ? (var_6 < var_6) : (1 == -8369264412490968978)))));
                                var_13 = ((56666 ? 47961 : (!23194)));
                                var_14 = (min(var_14, ((min((arr_6 [0]), (228 ^ var_7))))));
                                var_15 = (0 > -63);
                            }
                        }
                    }
                    var_16 = (max(var_16, ((((((4294967295 > var_8) ? var_4 : (arr_4 [i_0] [i_1] [14])))) / (~-8369264412490968978)))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_17 = ((!(((min(0, 34359738240))))));
                                arr_30 [i_7] [i_9] [16] = (((~((max(var_4, var_8))))));
                                arr_31 [i_6] [i_6] [i_9] [i_6] [i_6] [i_8 + 2] = (!var_5);
                                arr_32 [i_9] = (max(((9 ? (arr_0 [i_9]) : 17)), 143));
                            }
                        }
                    }
                    var_18 = (((arr_20 [i_6]) != ((((~46) ? 7507 : ((-(arr_0 [14]))))))));
                    var_19 = 53420;
                }
            }
        }
    }
    #pragma endscop
}
