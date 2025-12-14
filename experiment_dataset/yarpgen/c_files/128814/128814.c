/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_8, 7076490899389399083))) ? (max(var_2, 7076490899389399083)) : (min(var_6, var_3)))));
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 |= (((var_0 ? (arr_14 [i_0] [i_2] [i_2] [i_2] [i_4]) : 4161536)) / (arr_10 [i_0] [i_0] [i_0] [i_0]));
                                arr_15 [i_0] = ((!(((min((arr_10 [i_0] [i_2] [0] [i_0]), (arr_9 [i_4] [2] [18] [i_2] [i_1] [i_0]))) == (arr_11 [i_3])))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_2] = max(15444627916708492395, 32767);
                }
                arr_17 [i_0] [18] = (((max((((arr_2 [i_0]) ? 7315750326085346448 : var_5)), (((arr_3 [i_1] [8]) ? 15444627916708492415 : 1726906411)))) | ((~(max(var_8, (arr_6 [i_0] [i_0] [i_0])))))));
                var_14 = var_9;
            }
        }
    }
    #pragma endscop
}
