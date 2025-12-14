/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -4785993664418615599;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 1] [i_0 - 1] [i_0] [17] = ((6600269159822404487 ? 54 : ((((arr_4 [1] [i_0]) ^ (arr_4 [i_2] [i_0]))))));
                            var_18 = (min(38, ((var_13 ? (arr_9 [i_0] [i_0] [i_0 - 2] [2]) : 4785993664418615589))));
                            arr_11 [i_0] [i_1] [i_0] [i_0] = ((((((min(4, 503316480)) << (((arr_0 [i_0]) + 1219656851))))) && (arr_6 [i_0] [i_1] [i_0] [i_1])));
                            arr_12 [13] [i_0] = ((~(((((-104 ? 1703441711788335598 : var_6))) ? var_12 : (arr_6 [i_0] [i_2 - 1] [i_3 + 1] [i_3 + 1])))));
                        }
                    }
                }
                arr_13 [i_0] = (((((arr_6 [i_0] [i_0] [i_0] [i_1]) != (arr_9 [i_0 + 1] [i_0] [i_1] [i_1]))) ? ((~(arr_7 [i_0]))) : ((-(arr_6 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
                var_19 = (((arr_4 [i_0 + 1] [i_0]) && ((((arr_8 [17] [i_0] [i_0 + 1] [i_0]) ? (arr_6 [i_0] [i_0] [i_0 - 2] [i_1]) : (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                var_20 = ((!((((((arr_0 [i_0]) ? 9223372036854775789 : (arr_2 [i_0] [i_0]))) % (arr_7 [i_0]))))));
            }
        }
    }
    var_21 |= ((var_12 && (6811314869706251252 <= 15295)));
    #pragma endscop
}
