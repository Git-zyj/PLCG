/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185418
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

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_1] = ((((((((arr_9 [i_0] [i_1] [i_2]) >> (((arr_1 [i_1]) - 191)))) < (arr_3 [i_0] [i_0])))) % -var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_1] [i_0] [i_0] = (((max(((~(arr_5 [i_1]))), (arr_11 [i_3 - 2] [i_3 - 2] [i_3] [i_3])))) == ((((max(var_5, -104))) ? ((103 ? (arr_0 [3] [i_1]) : var_8)) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_17 [i_0] [i_0] [i_2] [i_0] [i_4] &= (max(30, 2147483647));
                                var_10 = ((((((!((max((arr_2 [5]), (arr_5 [i_3])))))))) > 17140722035552623358));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    var_11 = ((!(!-715226827)));
                    arr_20 [i_1] [11] = ((((min(17840, (arr_4 [1] [i_1])))) == (arr_13 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0])));
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_12 = ((((min((((9988 || (arr_19 [i_1] [i_6] [i_1] [i_1])))), 1))) || (arr_21 [i_6 - 1] [i_6 + 2] [i_1])));
                            var_13 = (min(var_13, ((((max((arr_18 [i_0] [i_1] [i_6 - 1] [i_7]), ((1306022038156928257 ? (arr_1 [i_7]) : var_0)))) >> (((min(((var_1 ? (arr_13 [i_6] [i_1] [i_6] [i_7] [i_7 - 1] [i_6 - 1]) : (arr_3 [i_0] [i_1]))), (((1 ? -1 : 0))))) - 16896591734614388994)))))));
                        }
                    }
                }
            }
        }
    }
    var_14 = 17140722035552623363;
    #pragma endscop
}
