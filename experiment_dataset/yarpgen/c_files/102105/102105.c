/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102105
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((((max(var_3, var_8))) ? (max(var_3, var_3)) : (((max(var_5, var_7))))))) ? ((max(((var_4 ? var_9 : var_8)), var_2))) : (max((~var_3), (var_6 ^ var_5))))))));
    var_11 = (max((((223 ? 17441 : 17418))), (max((max(var_6, var_9)), (~var_8)))));
    var_12 += ((((max((var_3 + var_3), ((max(var_7, var_1)))))) ? (max(((((var_7 + 2147483647) << (var_9 - 3633386255)))), ((-8048253394279695177 ? 8048253394279695168 : 8)))) : ((var_3 ? (max(var_7, var_3)) : (~var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 ^= ((((((var_9 == var_2) ? (arr_4 [i_0 + 1] [i_0]) : ((var_6 ? (arr_3 [3]) : var_4))))) ? ((-var_0 ? (((max((arr_3 [i_0 - 1]), (arr_1 [i_0 - 1] [i_1]))))) : (((arr_3 [i_0]) ? var_6 : (arr_0 [i_0] [i_1]))))) : (((((((max(0, (arr_1 [i_0 + 2] [i_1]))))) > -8048253394279695168))))));
                arr_5 [i_0] [i_0] = (max((((((max(4294967288, 107))) ? (arr_0 [i_0 - 1] [11]) : (((max((arr_4 [i_0 + 2] [i_0 + 2]), (arr_3 [i_0])))))))), (max((max(var_7, var_0)), (arr_3 [i_0])))));
                var_14 = var_3;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_12 [i_3] = (((((((max((arr_1 [i_2] [i_3]), (arr_8 [3])))) ? (max(var_4, 1)) : (((arr_1 [3] [i_3]) ? (arr_9 [i_2] [i_3] [i_3]) : var_3))))) ? (max(((max((arr_3 [11]), (arr_11 [i_3])))), (max((arr_9 [i_2] [i_3] [i_3]), var_9)))) : (((+((max((arr_1 [i_3] [i_3]), (arr_2 [i_3] [i_3])))))))));
                var_15 = var_2;
            }
        }
    }
    #pragma endscop
}
