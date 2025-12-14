/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114460
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
    var_10 = ((/* implicit */unsigned long long int) (short)-20);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16812)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_3] [i_4])) : (arr_10 [i_0] [i_1] [i_1] [5ULL] [(short)15] [i_3])))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2] [i_2] [i_3] [i_4])) ? (((/* implicit */int) (short)16812)) : (((/* implicit */int) arr_3 [i_2])))) : (((((/* implicit */_Bool) (short)20131)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [i_2] [i_2] [i_4]))))));
                                arr_14 [i_4] [i_4] [i_3] [i_2] [i_2] [(_Bool)1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_1 [i_1])) - (20)))))) ? (((/* implicit */int) (short)-16812)) : (((/* implicit */int) arr_2 [i_3 - 1] [i_2])));
                                arr_15 [i_0] [i_1] [(short)0] [i_2] [i_3] [i_4] = ((((/* implicit */int) arr_11 [i_2] [i_3 - 1] [i_2] [i_3] [i_3])) < (((/* implicit */int) arr_11 [i_0] [i_3 - 1] [i_2] [i_3 - 1] [7])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_5] [i_2] [i_5] [i_6 - 1] [i_6])) <= ((+(((/* implicit */int) (short)-21))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_5] = ((/* implicit */signed char) (short)-20);
                                arr_24 [i_0] [i_0] [i_0] [i_5] [(signed char)4] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)0);
                                arr_25 [i_0] [i_1] [i_5] [i_5] [i_6] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (21ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (short i_7 = 2; i_7 < 21; i_7 += 2) 
    {
        arr_29 [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_7] [i_7]))));
        arr_30 [i_7] = ((/* implicit */unsigned long long int) ((((arr_28 [i_7] [i_7]) + (2147483647))) << ((((((+(arr_28 [i_7] [i_7 + 2]))) + (990357048))) - (7)))));
        arr_31 [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) min((var_2), ((short)23634)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)125)), ((unsigned char)241)))))) == (((/* implicit */int) (short)-16812))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((((((/* implicit */_Bool) 301761940239157510ULL)) ? (983366794846632154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */int) (unsigned char)232)))))))));
}
