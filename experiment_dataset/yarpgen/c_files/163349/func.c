/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163349
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
    var_11 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-21323))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned int) (short)21322);
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) (-(arr_10 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1])));
                        arr_13 [(short)15] [(short)15] [i_0] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 1])) && (((/* implicit */_Bool) arr_7 [i_3 - 1] [i_0] [i_3 + 1] [i_3 + 1]))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned short) max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((unsigned char) (short)-21300))) : (((/* implicit */int) (_Bool)1)))))));
                        var_12 = ((unsigned long long int) var_0);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */long long int) var_2);
                            arr_21 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_2] [i_4] [i_5]))) & (arr_4 [i_0] [i_1])));
                            arr_22 [(unsigned short)9] [i_0] [i_2] [(unsigned short)23] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [(unsigned char)14]))));
                            arr_23 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */long long int) var_7)) / (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-21339)))));
                            arr_24 [i_0] [i_0] [i_2] [i_0] [i_5] = (+(var_9));
                        }
                        arr_25 [i_0] [(short)6] [i_2] [i_4] = ((/* implicit */long long int) min((((/* implicit */int) ((short) ((((((/* implicit */int) (short)-21323)) + (2147483647))) >> (((((/* implicit */int) (short)21323)) - (21300))))))), (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [0LL]))))));
                    }
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_2])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_2])))))) & ((-(arr_7 [i_0] [i_0] [i_1] [i_1])))));
                    arr_26 [i_0] [i_0] [i_0] = ((((arr_3 [i_0]) << (((((/* implicit */int) arr_5 [(short)23] [(unsigned short)20] [(short)23])) - (14826))))) + (((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_0] [i_0] [i_0]) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2]))) < (arr_4 [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            {
                arr_32 [i_6] [i_6] [i_7] = ((/* implicit */long long int) var_10);
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) 1433157218U))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_7);
}
