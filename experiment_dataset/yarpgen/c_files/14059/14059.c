/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 ? (((((65535 ? var_3 : 1))) ? (var_10 - var_5) : ((53744 ? 537078515 : var_16)))) : (((((44882 % var_15) || (58886 & var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] |= ((((((arr_6 [i_1 + 1] [i_1] [3]) ? (arr_3 [i_1 + 1] [i_0]) : (arr_6 [i_1 + 1] [i_0] [i_1 + 1])))) ? ((((-18489 - 53744) < (arr_7 [i_1] [i_1 + 1] [i_1 + 1])))) : (~var_10)));
                arr_9 [6] = (((((((min(-1, (arr_0 [i_0])))) ? ((((arr_6 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_6 [i_0] [i_0] [i_0])))) : ((-118 ? (arr_5 [i_0] [i_1] [13]) : (arr_7 [i_0] [i_1] [12])))))) ? 23880 : ((((((arr_6 [i_0] [i_1] [i_1 + 1]) ? (arr_4 [i_0]) : var_5))) + (arr_7 [i_0] [i_1 - 1] [i_1 - 1])))));
                arr_10 [i_1] = ((((34250 ? ((((arr_5 [i_0] [i_1] [i_0]) <= (arr_5 [i_0] [i_0] [i_0])))) : 15753)) != ((1056964608 ? (var_5 <= 42602) : (arr_1 [i_0])))));
            }
        }
    }
    #pragma endscop
}
