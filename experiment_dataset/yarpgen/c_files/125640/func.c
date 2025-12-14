/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125640
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_1] [i_1 + 2])) - (((/* implicit */int) arr_3 [i_1 + 3] [(unsigned short)12] [i_1 - 2]))))) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1 - 2])) : (((167830827) + (((/* implicit */int) (unsigned char)255)))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) arr_3 [i_1] [(_Bool)1] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_6 [i_2] [i_1 + 2] [i_2] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_10))))));
                    var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                }
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (int i_4 = 2; i_4 < 23; i_4 += 1) 
                    {
                        {
                            arr_12 [4] [4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_14);
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((arr_4 [i_4 + 1] [7ULL] [i_1]) - ((+(arr_9 [i_1 - 1] [i_0] [i_0] [i_4 + 1]))))))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_1])) && (((/* implicit */_Bool) var_16))))), (arr_5 [i_1] [i_1 - 1] [i_1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = var_3;
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 1) /* same iter space */
    {
        arr_15 [i_5] [i_5] = ((/* implicit */unsigned short) arr_9 [i_5] [(signed char)0] [(signed char)0] [(signed char)0]);
        arr_16 [i_5 - 2] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_11 [i_5 - 1] [i_5 + 1])) : (((/* implicit */int) var_18))))) : (((((/* implicit */_Bool) max(((unsigned char)22), (((/* implicit */unsigned char) var_15))))) ? (((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])) ? (arr_8 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))))) : ((-(var_17)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_5 + 1]))));
            arr_19 [i_5] [i_5] [i_5 - 1] = ((/* implicit */short) arr_2 [i_6] [i_5]);
        }
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((short) arr_0 [i_5 - 2])))));
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) arr_17 [i_7]))));
            var_29 = (-(((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_10)) : (var_13))));
            arr_22 [i_5] [i_7] = arr_9 [i_7] [i_7] [i_7] [i_7];
            var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_7] [i_5])) || (((/* implicit */_Bool) var_15))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19)))))));
        arr_25 [i_8] = ((/* implicit */unsigned long long int) (~(arr_5 [i_8 + 1] [i_8] [i_8 - 2])));
    }
}
