/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= -9;
    var_11 = ((~(var_5 == var_6)));
    var_12 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, ((!(((3584 ? 0 : 42261)))))));
                            arr_11 [11] [i_2] [1] [i_0] = ((((((5412426738379639127 == 37186) << (((((arr_6 [4] [i_0]) >> (((arr_6 [i_2] [i_0 - 1]) - 55366)))) - 79))))) == ((((((arr_6 [i_3] [i_1]) >> 21))) ? (((-(arr_4 [i_0])))) : (arr_2 [i_0 - 2] [i_0 + 1])))));
                            var_14 = ((!(((+(((arr_0 [10]) ? (arr_2 [i_0] [5]) : (arr_6 [i_0] [6]))))))));
                            var_15 = ((+(min(((16338879777773232684 ? (arr_5 [i_1] [i_3]) : (arr_3 [i_0] [6] [1]))), (arr_3 [i_0] [i_1] [2])))));
                        }
                    }
                }
                var_16 &= (18 << (min((((arr_10 [i_0 - 2] [i_1 + 1] [i_1]) ? (arr_6 [i_0] [i_1]) : 525444430940554362)), (((0 >> (1397266273 - 1397266250)))))));
                var_17 = (((((!(((arr_2 [4] [i_1]) <= var_8))))) == ((((arr_1 [i_0]) <= (min(0, 262080)))))));
                var_18 = (max(var_18, (((+(((arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1]) ? (arr_9 [i_1 + 1] [4] [i_1] [i_1 + 1]) : (arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]))))))));
            }
        }
    }
    var_19 |= var_5;
    #pragma endscop
}
