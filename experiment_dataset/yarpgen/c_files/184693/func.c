/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184693
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
    for (unsigned long long int i_0 = 4; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
                    arr_10 [i_1] [i_2] = ((/* implicit */short) arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */long long int) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [(_Bool)1]), (((/* implicit */unsigned short) arr_6 [10ULL] [i_2] [(signed char)7] [10ULL]))))))))), (arr_1 [i_2] [i_3]))))));
                                var_18 = ((/* implicit */short) var_7);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */short) arr_4 [10U] [i_1] [i_0]);
                        var_20 = ((/* implicit */signed char) arr_11 [i_0] [(unsigned short)4] [i_2] [i_5 + 3]);
                        var_21 = ((/* implicit */long long int) (+(arr_0 [i_1])));
                        var_22 = ((/* implicit */short) (-((~(arr_8 [i_2] [i_5])))));
                        arr_17 [i_2] = ((/* implicit */signed char) ((arr_8 [i_2] [i_0 + 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 3])))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_6 = 3; i_6 < 11; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 3; i_7 < 8; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_28 [i_6] [i_6] [i_6] [10U] [i_6] [i_6] = arr_5 [i_7];
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [4] [i_9]))) & (arr_9 [(short)8] [(signed char)2] [i_7 + 1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_7] [i_7 + 4] [11U] [i_7])))))))))));
                    }
                    var_24 = ((/* implicit */unsigned int) ((var_2) && (((/* implicit */_Bool) max((arr_9 [12U] [i_6 - 2] [i_7]), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_6]))))))));
                    var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) ((arr_22 [i_7] [i_7]) != (arr_13 [i_8 - 1] [i_8] [(short)7] [i_6] [(short)9] [(short)11])))) < (((/* implicit */int) arr_3 [i_6] [i_6]))))), (((unsigned short) var_15))));
                }
            } 
        } 
        arr_29 [i_6] = ((/* implicit */unsigned char) ((unsigned long long int) arr_18 [i_6 + 1] [i_6]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_10 = 1; i_10 < 17; i_10 += 1) 
    {
        var_26 = ((/* implicit */int) arr_30 [i_10 - 1]);
        arr_32 [4LL] = ((/* implicit */long long int) ((((int) arr_31 [i_10])) < (((/* implicit */int) arr_31 [i_10 + 1]))));
    }
}
