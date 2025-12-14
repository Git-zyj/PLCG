/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183344
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_10 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1] [i_1])) : (var_5)));
                    arr_8 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)163)) || (((/* implicit */_Bool) -7381915378553360263LL))));
                    var_11 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)25293)))) ? (arr_5 [i_0]) : (((/* implicit */int) var_2))));
                    arr_9 [i_1] = ((/* implicit */_Bool) (~((~(var_0)))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3012539023U)) ? (((/* implicit */long long int) arr_11 [i_1] [i_1 + 1] [i_1 - 1])) : (var_9)))) ? (((((/* implicit */_Bool) var_7)) ? (1792122608U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_2 [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        arr_16 [(_Bool)1] [i_1] [i_1] [i_4] [i_1] [i_4] = ((/* implicit */signed char) arr_12 [i_3] [i_3] [i_3] [i_1]);
                        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (((!(((/* implicit */_Bool) 460861023U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_0))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_14 *= ((/* implicit */unsigned short) (-(var_5)));
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            arr_22 [i_0] [12ULL] [i_0] [i_0] [i_0] [12ULL] [i_3] |= ((/* implicit */short) ((_Bool) arr_14 [i_0] [i_1] [i_1] [i_6 + 1] [i_6] [i_6 - 1]));
                            var_15 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) 540007884)) - (((unsigned int) arr_12 [i_1] [i_1 - 1] [i_1 - 1] [i_0]))));
                            var_16 = ((/* implicit */long long int) var_2);
                        }
                        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) arr_23 [i_7 - 1] [i_1] [i_1] [i_5] [1LL]);
                            arr_25 [6U] [i_5] [i_5] [i_5] [i_5] [i_5] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_14 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1])) & (var_5)));
                        }
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 3) 
                {
                    arr_29 [i_1] [i_1] [i_8 + 2] [i_8] = ((((/* implicit */_Bool) ((short) var_1))) ? (((((/* implicit */long long int) var_6)) | (var_9))) : (arr_15 [i_0] [i_1] [i_0] [i_1 - 1]));
                    var_18 = ((/* implicit */signed char) arr_7 [i_1]);
                    arr_30 [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -540007884))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 16; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                        {
                            {
                                arr_36 [i_8] [i_1] [i_8] [i_1] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_0] [i_0] [15U] [i_0]))));
                                arr_37 [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] [9ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_10] [i_9] [i_10] [i_1 + 1] [i_8 + 2] [i_0]))));
                            }
                        } 
                    } 
                }
                arr_38 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [14LL] [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */long long int) arr_1 [i_0] [i_1 - 1])), (arr_4 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) & (1974532250U)));
    var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_1)) ? (-3734197741733467406LL) : (var_0)))));
    var_21 = min((((/* implicit */long long int) max((((var_6) - (-540007884))), (var_4)))), (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9))), (max((((/* implicit */long long int) var_2)), (7134603961951166489LL))))));
}
