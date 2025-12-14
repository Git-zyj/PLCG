/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110593
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)53030)) ? (((/* implicit */int) arr_0 [i_1 + 2])) : (((/* implicit */int) (short)32767))))), (max((arr_2 [(_Bool)1]), (arr_2 [8ULL]))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 8; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1 + 3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4] [i_2 - 2] [i_1 - 1]))) % (((((/* implicit */long long int) max((var_7), (((/* implicit */int) var_3))))) - (arr_12 [i_0] [i_1 + 1] [i_0])))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] = arr_15 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_2 - 2];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        var_18 |= (_Bool)1;
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_6 + 2])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6 - 2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(short)12] [i_6 - 2] [i_9 + 2]))) >= (var_10))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */long long int) var_7)) + (arr_23 [i_6 + 2])));
                                arr_32 [i_5] [i_6 - 1] [i_7] [i_8] [14ULL] |= ((/* implicit */int) (signed char)67);
                                var_22 = ((/* implicit */int) ((((long long int) var_14)) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)42048)) || (((/* implicit */_Bool) var_14))))))));
                                var_23 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) arr_29 [i_5] [i_5] [i_5] [i_5] [i_5])))));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */int) arr_27 [(unsigned short)8] [i_6 + 2] [i_6 + 2])) : (((/* implicit */int) (short)32764)))));
                }
            } 
        } 
    }
}
