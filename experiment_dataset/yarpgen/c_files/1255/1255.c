/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] = (~18446744073709551615);
                    var_12 -= (((!((max(4194296, 10574))))) ? 16 : 1251161231);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_13 = (((((arr_10 [i_1]) ? (arr_12 [i_0] [2] [i_3] [i_4]) : (arr_14 [i_0] [i_3] [i_4]))) == (((((arr_3 [i_0] [i_1] [i_3]) == (arr_2 [i_3])))))));
                            var_14 = 17029596442488646332;
                        }
                    }
                }
                var_15 = ((~((((max(1845355293, 11035194861084125792))) ? (arr_15 [i_0] [i_1]) : ((-215129029 * (arr_10 [13])))))));
            }
        }
    }
    var_16 = (min(var_16, var_1));
    #pragma endscop
}
