/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173020
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
    var_18 += ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) (~(2996546138094814720LL)))) ^ (var_13)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_6 [(short)8] [i_0]))));
                                var_20 = ((/* implicit */unsigned char) arr_7 [(unsigned char)0] [i_1] [i_1]);
                                arr_12 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_2 - 1] [i_3 - 1])) << (((((/* implicit */int) arr_0 [i_2 - 2] [i_3 - 1])) - (21003)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        for (int i_6 = 4; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_1])) / (((/* implicit */int) arr_8 [i_1]))));
                                arr_19 [i_0] [(unsigned short)7] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2996546138094814720LL)) ? (17924935630714199639ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_5] [i_6])))));
                            }
                        } 
                    } 
                }
                arr_20 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_17 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((2996546138094814741LL) >> (((/* implicit */int) (unsigned char)23)))) : (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 24; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (int i_11 = 2; i_11 < 23; i_11 += 3) 
                        {
                            {
                                arr_36 [i_7] [i_9] [i_8] [i_7] [i_10] [i_10] [(short)24] = ((/* implicit */signed char) arr_26 [i_7] [i_8]);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) min((-2996546138094814742LL), (((/* implicit */long long int) (unsigned char)64)))))) * (((/* implicit */int) (_Bool)0))));
                                var_23 += ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)34))));
                            }
                        } 
                    } 
                    arr_37 [i_9] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_16))));
                    var_24 = ((/* implicit */unsigned short) ((arr_33 [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 1]) ^ (((arr_33 [i_9 + 1] [19] [i_9] [i_9 - 3]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
