/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 14073165693688273674;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_14 = ((~(arr_0 [i_0 + 2])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_8 [i_1] [i_1] = -15438964945543650681;
                        arr_9 [i_1] [i_2] [i_1 + 1] [i_1] = (((arr_3 [i_0 + 1] [i_1 + 1] [1]) < var_9));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_15 = -6815889426213065933;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    var_16 ^= var_3;
                    var_17 += ((((-6815889426213065933 < (arr_16 [i_5] [4] [i_6 - 1])))) + (((((arr_18 [i_6 + 1] [i_6 + 1] [i_6 - 1] [16]) < (arr_16 [i_5] [i_6 + 1] [i_6 + 2]))))));
                    arr_19 [i_6] [8] [i_4] [i_6] = 967756207;
                    var_18 = (arr_13 [i_6] [i_6] [i_6 + 1]);
                }
            }
        }
    }
    #pragma endscop
}
