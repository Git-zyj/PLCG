/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((!(((var_15 ? var_3 : var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((((((((arr_3 [i_0] [i_1]) & (arr_3 [i_0] [i_1]))) < (0 >= 0))))) >= ((~((~(arr_2 [4])))))));
                arr_7 [i_1] [i_0] [i_1] = ((-12 ? 871085793199862839 : 11));
                arr_8 [i_0] [i_1] = (((((((((arr_0 [1] [i_1]) ? (arr_2 [i_0]) : (arr_5 [i_0] [i_1] [i_0])))) ? (~-5) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_5 [i_0] [i_1] [i_1])))))) ? (arr_0 [4] [i_1]) : ((((870720933 || -12) && ((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_4 [i_0] [i_0])))))))));
                arr_9 [i_1] = ((!12) + (((((arr_5 [i_0] [i_1] [i_0]) % (arr_5 [i_0] [i_0] [i_0]))) % (((arr_3 [i_0] [i_1]) ? (arr_3 [i_0] [i_0]) : (arr_5 [i_0] [8] [i_0 - 1]))))));
                arr_10 [i_0] [i_1] [i_1] = ((-(((((-(arr_2 [i_1]))) >= (((((arr_3 [8] [2]) && (arr_1 [i_0]))))))))));
            }
        }
    }
    #pragma endscop
}
