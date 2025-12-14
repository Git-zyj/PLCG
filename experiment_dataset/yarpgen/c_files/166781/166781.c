/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = (min(85, (max((arr_4 [i_0 - 3]), (arr_4 [i_0 - 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_12 = 0;
                            var_13 = (min((arr_5 [i_1] [i_1]), (((!(arr_5 [i_0] [i_0 + 4]))))));
                            var_14 = 1492559681;
                            arr_10 [i_0] [i_1] [i_2] [i_3 - 3] = 1;
                        }
                    }
                }
            }
        }
    }
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_16 = ((-1 ? (max(780983687830411387, -1502733757)) : 1));
                var_17 &= (10433883505046030869 < 8012860568663520746);
                var_18 = (max(((+(max((arr_17 [i_4] [i_5] [i_4]), (arr_13 [i_4] [i_5]))))), ((((((1 ? (arr_14 [i_5]) : 67076096))) ? (((-(arr_15 [i_5])))) : (max(1657077385, 1)))))));
                var_19 = ((725178468 ? 1 : (((arr_15 [i_4]) ? 1233034530 : (arr_11 [i_5])))));
                arr_18 [i_4] = ((!((min(-4281614414, (((1 ? 2109532601 : -89))))))));
            }
        }
    }
    var_20 = (!var_2);
    var_21 = (~(min(var_0, var_5)));
    #pragma endscop
}
