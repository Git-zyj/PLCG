/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_8;
    var_13 -= (26935 * 1);
    var_14 = var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [1] [i_0] = arr_2 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = arr_6 [1] [i_0] [i_0] [i_2];
                    arr_9 [i_2] &= (((((((min(-8915, (arr_7 [i_0] [4] [i_0]))))) / -2236610110362245339)) % (max(((max(1, (arr_8 [i_2])))), var_10))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((41 ? 1759361319153943777 : 6292483378146622947));
                                var_16 -= 1;
                            }
                        }
                    }
                    var_17 += ((((var_5 | ((min((arr_8 [i_1]), (arr_11 [i_0] [i_1])))))) + ((-(arr_13 [i_0] [i_1] [i_1] [i_1] [i_2])))));
                }
            }
        }
    }
    var_18 = (min((((-14091650043786220125 >= (3837358834647926266 ^ var_11)))), (max((((3727593897 << (var_4 - 6563471291458761732)))), var_10))));
    #pragma endscop
}
