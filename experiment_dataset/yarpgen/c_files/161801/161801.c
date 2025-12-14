/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (-((32136 ? 0 : 0)));
        var_12 = ((((((((1 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (!-21681)))) ? ((-(arr_0 [i_0]))) : ((((!-9085) || (((0 ? -21681 : (arr_1 [i_0])))))))));
        arr_3 [i_0] = (max((((arr_1 [i_0]) >= ((21675 ? (arr_1 [i_0]) : -20246)))), (((((-9056 ? 408016146 : 9085))) || (arr_1 [i_0])))));
        arr_4 [i_0] = (i_0 % 2 == zero) ? ((((((arr_0 [i_0]) << (((arr_1 [i_0]) - 3960542190))))) ? ((((arr_1 [i_0]) < (arr_0 [i_0])))) : (((9085 <= (arr_1 [i_0])))))) : ((((((((arr_0 [i_0]) + 2147483647)) << (((((arr_1 [i_0]) - 3960542190)) - 18446744073383152333))))) ? ((((arr_1 [i_0]) < (arr_0 [i_0])))) : (((9085 <= (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((((((max((arr_11 [i_1]), 4294967293))) ? (min((arr_10 [i_1] [i_1]), 9077)) : (!4)))))));
                    var_14 = (max(0, 13511));
                    arr_12 [i_0] [i_0] [i_0] = ((((((((min((arr_7 [i_0] [i_0]), (arr_10 [i_0] [i_0]))) + 2147483647)) << (((arr_7 [1] [i_0]) - 5017))))) ? (arr_10 [i_0] [i_1]) : (18200238327537949580 == 197118132)));
                    arr_13 [i_0] = ((((min((arr_9 [i_0] [i_1] [i_2]), (arr_1 [i_0])))) ? ((~(arr_8 [i_0] [i_0] [i_1] [i_2]))) : (arr_10 [i_0] [i_2])));
                    var_15 = ((((((arr_8 [i_0] [i_0] [i_1] [1]) ? (arr_8 [i_0] [i_1] [i_2] [i_0]) : (max(var_10, 3886951158))))) ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : (((869894757 ? 32421 : (arr_0 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
