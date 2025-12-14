/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    var_16 = (max(var_16, 14299));
    var_17 -= (-(min((min(1417811566642967701, var_12)), ((min(65, 0))))));
    var_18 = (max(var_18, -1417811566642967707));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_19 = (-512 <= 163);
                            var_20 = (max((min(-531, (max(var_13, 2522439260183325687)))), ((min((arr_9 [i_0] [i_1 - 4] [i_2] [i_3]), (max(var_10, 227)))))));
                            var_21 &= ((-(((arr_8 [i_0 + 1] [i_1] [i_1] [i_2] [i_3]) ? -1368152555 : (arr_3 [i_0] [9] [i_3])))));
                            var_22 = (((((-1417811566642967702 ? 1368152555 : 110))) ? (min((((~(arr_6 [i_2] [i_2])))), (arr_0 [i_0 + 1]))) : ((min(2926814719, (arr_6 [i_2] [i_1 - 3]))))));
                        }
                    }
                }
                var_23 = (max(var_23, (((-(min(((max(var_7, 101))), ((16918 ? (arr_0 [i_1]) : 2522439260183325687)))))))));
                var_24 ^= (min(((min((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]), (max(1433, 29492))))), (((1417811566642967721 && -512) ? (arr_3 [i_1 + 2] [i_0 + 1] [i_1 - 2]) : (((arr_9 [i_0] [i_0] [6] [i_1]) ? 15924304813526225936 : 507))))));
            }
        }
    }
    #pragma endscop
}
