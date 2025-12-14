/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106590
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        arr_3 [4] = ((/* implicit */unsigned short) var_11);
        arr_4 [10] = ((long long int) ((unsigned short) var_11));
        arr_5 [(short)14] [(short)14] = var_12;
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_3 = 3; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [19LL] [19LL] [i_0] [i_0] = ((/* implicit */short) var_0);
                    arr_17 [i_0 + 2] [i_1] [i_0] [i_0 + 2] = ((/* implicit */int) ((long long int) ((long long int) var_3)));
                    arr_18 [i_0 + 1] [i_1] [(unsigned short)8] [i_0] = ((/* implicit */long long int) var_13);
                }
                for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) /* same iter space */
                {
                    arr_23 [i_2] [i_2] = ((/* implicit */long long int) var_14);
                    arr_24 [i_0] [i_1] [i_2] [i_2] [2LL] = ((/* implicit */int) ((unsigned short) var_5));
                    arr_25 [i_2] = ((/* implicit */unsigned short) ((short) var_6));
                    arr_26 [i_0] [i_0] [i_0] [i_1] [(unsigned short)7] [i_4] = ((/* implicit */unsigned short) ((long long int) ((unsigned short) var_1)));
                    arr_27 [(short)8] [i_2] &= ((/* implicit */short) var_1);
                }
                arr_28 [i_2] = ((/* implicit */short) ((long long int) var_1));
                arr_29 [i_0] [i_0 - 2] [i_0] [i_0] = ((int) var_13);
            }
            for (int i_5 = 3; i_5 < 18; i_5 += 2) 
            {
                arr_32 [i_0 - 2] [i_0] = var_11;
                arr_33 [i_0 - 1] [i_1] [(unsigned short)8] |= ((/* implicit */short) ((unsigned short) var_6));
                arr_34 [i_0] [i_1] = ((/* implicit */unsigned short) ((short) ((short) var_10)));
            }
            arr_35 [i_0] = ((/* implicit */long long int) var_4);
            arr_36 [(short)0] = ((/* implicit */unsigned short) ((long long int) ((short) var_0)));
        }
        arr_37 [(short)10] [i_0] = var_10;
    }
    var_15 |= ((/* implicit */short) ((long long int) ((int) var_1)));
}
