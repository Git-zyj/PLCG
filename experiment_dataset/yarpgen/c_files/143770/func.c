/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143770
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
    var_10 -= ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_0] [i_2 - 3] [i_2 - 3] [i_2 + 1] [i_2 - 3] [i_4] [i_4])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2 - 3] [i_4] [i_4] [i_4])))));
                                var_12 = ((arr_12 [5U]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((unsigned short) var_2)))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_4 [i_0] [i_0] [3U]) << (((arr_3 [i_0] [i_2 - 2]) - (2132661618421387979LL)))))) == (arr_3 [i_0] [i_1])));
                    var_14 = ((/* implicit */long long int) var_3);
                    var_15 = ((/* implicit */unsigned int) var_3);
                }
            } 
        } 
    }
    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) != (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) : (((arr_6 [i_5] [i_5]) | (arr_4 [i_5] [i_5] [i_5])))))) : (((((/* implicit */_Bool) max((arr_14 [i_5]), (arr_7 [i_5] [(_Bool)1] [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_5]))) : (((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_6)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_17 = arr_19 [i_7];
                var_18 = ((/* implicit */signed char) max((var_18), (arr_8 [12U] [i_7])));
            }
            var_19 -= ((/* implicit */int) arr_14 [i_6]);
            /* LoopSeq 3 */
            for (int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                var_20 = var_2;
                var_21 = ((/* implicit */long long int) var_2);
            }
            for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                arr_25 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) arr_13 [i_5]);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_5] [i_6] [i_5] [i_5] [i_5] [i_6] [i_6]))))) == (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (min((((/* implicit */long long int) var_1)), (arr_10 [i_5]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (arr_4 [i_5] [i_5] [(unsigned short)10]))))))));
            }
            for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                arr_30 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_27 [i_5] [i_6] [i_6] [i_10]))))));
                arr_31 [i_5] = ((/* implicit */unsigned char) (short)32256);
                var_23 = ((/* implicit */long long int) arr_24 [i_10] [i_10]);
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_7 [i_5] [i_5] [i_5] [i_6] [i_6] [i_10]), (((unsigned short) var_9))))) ? (((/* implicit */unsigned long long int) ((arr_28 [i_5] [i_6] [i_6] [i_10]) * (((unsigned int) arr_23 [i_5] [i_6] [i_5] [i_6]))))) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) arr_22 [i_6] [i_6] [4U]))))));
            }
        }
        arr_32 [i_5] [i_5] = ((/* implicit */long long int) var_1);
        arr_33 [i_5] = ((/* implicit */unsigned short) var_4);
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_10 [i_5])))) ? (arr_28 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_1), (arr_4 [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5]))) : (arr_6 [i_5] [i_5])))))) : (((((/* implicit */unsigned long long int) min((arr_18 [i_5] [i_5]), (arr_22 [i_5] [i_5] [i_5])))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5]))) : (arr_24 [i_5] [i_5])))))));
    }
}
