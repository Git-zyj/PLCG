/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18945
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] [8] = ((/* implicit */int) arr_7 [i_0 + 2] [(short)2] [i_2] [i_2]);
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((608078634) >> (((var_12) - (2112085588U))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) min((((/* implicit */unsigned long long int) var_11)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 288230376151711743LL)) ? (((/* implicit */long long int) var_12)) : (562941363486720LL)))), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 7; i_3 += 2) 
    {
        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) ((arr_15 [(unsigned short)3] [i_4]) % (((/* implicit */unsigned int) var_2))))), (var_9))), (((/* implicit */unsigned long long int) arr_8 [i_3]))));
                var_18 = ((/* implicit */unsigned int) (short)0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                arr_24 [i_5] = ((/* implicit */unsigned char) var_1);
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_6] [i_6]))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    var_20 ^= ((/* implicit */unsigned int) (_Bool)1);
                    arr_29 [i_5] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(11030681107815641158ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7 - 1])))))) ? (((((((/* implicit */int) arr_23 [i_5] [i_6] [i_5])) <= (((/* implicit */int) (unsigned char)22)))) ? (((/* implicit */int) max((arr_21 [i_7 - 1] [i_5] [i_5]), (arr_0 [i_5])))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) arr_19 [14]))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))) > (15U))) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_6] [i_7])) : (((/* implicit */int) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)20]))))))))));
                }
                arr_30 [i_6] = ((/* implicit */_Bool) arr_27 [i_5] [0LL] [i_5] [i_5]);
                var_21 = ((/* implicit */long long int) 18446744073709551615ULL);
            }
        } 
    } 
}
