/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = (((1920 % var_9) ? ((-((max(var_1, 12))))) : (arr_9 [i_1])));
                                var_12 ^= ((+(((-1929 > ((((arr_13 [i_0] [i_0] [i_0]) <= (arr_6 [i_0])))))))));
                            }
                        }
                    }
                    var_13 &= ((((-1921 ? -815777805070761873 : (arr_13 [i_0] [i_1] [6])))) ? (max((arr_13 [10] [i_1] [i_0]), (arr_13 [i_0] [i_1] [i_2]))) : (((arr_0 [i_2]) - (arr_0 [i_1]))));
                    arr_15 [i_0] [11] [i_0] [i_0] = ((arr_2 [i_2] [i_2]) > ((((max(-815777805070761873, 14765)) >= var_0))));
                }
            }
        }
    }
    var_14 = (max(var_3, -1939));
    var_15 &= ((var_2 ? (~var_10) : var_7));
    var_16 = (max(var_3, var_1));
    #pragma endscop
}
