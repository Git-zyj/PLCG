/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_6, var_13))) ? var_4 : 280375465082880));
    var_20 = (max(var_20, (((1 ? var_8 : var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_21 = (min(var_21, ((((((((((arr_2 [i_0] [i_0]) / var_5))) ? (arr_3 [i_2]) : var_12))) ? -var_7 : (min((arr_1 [i_0] [i_1 - 2]), var_11)))))));
                    arr_7 [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_2]);
                    var_22 = (min(var_6, (arr_1 [i_0] [i_1 - 2])));
                }
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    var_23 = (max(var_23, ((((max((arr_9 [i_3 + 1] [i_3 + 1]), (((arr_2 [i_1] [i_0]) ? (arr_2 [i_0] [i_3 + 1]) : -280375465082881)))) >> (((((((11868867472534860944 >> (var_8 - 1877883044)))) ? (arr_10 [i_0] [i_1 - 1] [i_3 - 3]) : (arr_9 [i_1 + 1] [i_3]))) + 8255602161926255562)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_24 -= ((-(((arr_5 [i_0] [i_0] [i_3 - 2] [i_3 - 2]) + (arr_5 [i_3] [i_3 - 1] [i_3 - 2] [i_4 + 2])))));
                                var_25 = var_6;
                                arr_17 [i_5] [i_5] [i_3 + 1] [i_4 + 2] = 32767;
                                arr_18 [i_0] [i_0] [i_3 + 1] [i_4] [i_5] = ((((!(arr_9 [i_1 - 2] [i_1 - 2]))) || (arr_9 [i_1 - 2] [i_1 - 2])));
                            }
                        }
                    }
                    var_26 = (max((((280375465082880 ? 22 : 1))), var_9));
                }
                var_27 = ((~(((arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_0]) >> (((arr_13 [i_1] [i_1 - 2] [i_1 - 1] [i_1 - 2]) - 9629619788033643758))))));
                var_28 = 1813319672;
                var_29 = (min(var_29, (arr_5 [i_1 - 2] [i_1 - 2] [i_0] [i_0])));
            }
        }
    }
    #pragma endscop
}
