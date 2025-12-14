/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100481
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */short) var_12);
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (~(var_2))))) ? (((((/* implicit */_Bool) ((var_8) | (arr_0 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (arr_2 [i_0] [i_1]))) : ((~(((/* implicit */int) (unsigned short)5616))))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */short) (-(arr_0 [(unsigned short)12])));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_18 [i_2] [i_2] [i_2] [i_2] [11U] [i_4] = arr_10 [i_5] [i_5];
                            arr_19 [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(var_1)));
                            arr_20 [i_2] [i_3] [i_2] [(unsigned char)10] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) (_Bool)1)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)38322)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (unsigned short)1))))));
                    var_15 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (var_2)));
                    arr_23 [i_6] [i_2] = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_9)))));
                }
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((/* implicit */int) arr_1 [8LL])), ((+((-(((/* implicit */int) var_9)))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    var_17 = ((/* implicit */_Bool) (-((~(arr_24 [i_2] [i_3] [i_3] [i_2])))));
                    arr_27 [i_2] [(unsigned short)13] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) (unsigned short)24132))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 1; i_9 < 13; i_9 += 3) /* same iter space */
                    {
                        arr_32 [(_Bool)1] [i_2] [(unsigned short)10] [i_2] [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3] [i_8 - 2] [i_9] [i_2])) && (((/* implicit */_Bool) arr_15 [i_8] [i_8 + 1] [i_8] [i_2]))));
                        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) arr_22 [i_2])) ? (660515454U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 13; i_10 += 3) /* same iter space */
                    {
                        arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_17 [i_10] [i_2] [(signed char)9] [i_2] [i_2]);
                        var_19 ^= ((/* implicit */unsigned char) ((arr_0 [i_8 + 3]) / (((/* implicit */int) var_7))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_29 [i_3]))));
                        arr_38 [(short)12] [i_8 + 4] [i_8] [0LL] |= ((/* implicit */long long int) arr_28 [4U] [i_3] [i_3] [12LL]);
                        arr_39 [i_11 - 1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_8 + 2] [i_8 - 2])) | ((~(((/* implicit */int) arr_11 [i_11] [i_3] [i_2]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            {
                                arr_47 [i_2] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) var_4);
                                var_21 = ((/* implicit */long long int) ((unsigned short) (unsigned char)253));
                                var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) arr_30 [i_8 + 2] [i_8 + 4] [i_8 - 1] [i_8]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
