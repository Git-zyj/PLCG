/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180899
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
    var_14 = ((/* implicit */int) ((signed char) var_10));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
            {
                var_15 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [(unsigned short)13] [i_2]);
                arr_8 [i_1] [i_2] [i_2] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) (unsigned short)192)) : (((/* implicit */int) (unsigned short)65535))))));
                arr_9 [i_0] [i_1] [i_2] [i_1] = arr_5 [i_0] [i_0] [i_0] [i_0];
                arr_10 [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */int) (short)-1089)) >= (7))));
                arr_11 [i_1] [i_1] = (-(((/* implicit */int) arr_0 [i_1] [i_1 + 2])));
            }
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */short) arr_5 [i_0] [i_1 - 4] [(signed char)11] [(short)10]);
                var_17 = ((/* implicit */long long int) -11);
                arr_14 [i_1] [i_1] = ((/* implicit */long long int) var_13);
            }
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
            {
                arr_17 [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) 8258911250767757979ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [11LL] [i_0] [i_1]))) : (var_3))));
                arr_18 [i_0] [i_0] [i_1 + 2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)74)) ? (arr_7 [i_1 + 3] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 - 4]))));
            }
            arr_19 [i_1] = ((/* implicit */unsigned int) var_8);
        }
        arr_20 [i_0] = ((/* implicit */unsigned long long int) var_7);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 15; i_5 += 3) /* same iter space */
    {
        arr_23 [i_5] = ((/* implicit */short) (-((+(-7)))));
        arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) var_6);
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        arr_28 [i_6] = ((/* implicit */short) ((unsigned long long int) (-(arr_2 [(unsigned char)0] [6LL] [i_6]))));
        arr_29 [i_6] [i_6] = (!(((/* implicit */_Bool) var_2)));
    }
    var_18 = ((/* implicit */unsigned char) var_11);
}
