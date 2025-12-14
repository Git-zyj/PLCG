/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_10 ^= (max((524287 * 524282), 4294443015));
                var_11 = (max(var_11, (min((-127 - 1), 511))));
                var_12 = (max((((var_0 != ((64 ? 2964849503 : 18446744073709551615))))), var_6));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 = (((arr_4 [i_0]) ? -9174 : (((arr_8 [i_3] [i_1 - 1] [i_0]) ? (arr_8 [i_3] [i_2] [i_0]) : (arr_8 [i_1 - 1] [i_2] [i_3])))));
                            arr_11 [i_2] [i_3] = (((arr_1 [i_0]) < 524290));
                        }
                    }
                }
                var_14 = (((((var_4 ? ((((!(arr_0 [i_0]))))) : var_5))) ? (arr_2 [i_1]) : ((max(var_6, (max(var_7, (arr_1 [i_0]))))))));
            }
        }
    }
    var_15 = (!-511919501);
    #pragma endscop
}
