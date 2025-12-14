/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120473
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(var_11))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = min((max((arr_0 [i_0]), (arr_0 [i_0]))), (max((arr_0 [i_0]), (arr_0 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(255U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_16 [i_0] [i_1] [i_2] = ((/* implicit */int) (~((~(arr_13 [i_0] [i_0] [i_2])))));
                        var_17 = ((/* implicit */unsigned int) (+((-(arr_14 [i_2] [i_2 + 1] [i_2] [i_2])))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_19 [i_0] [8U] [8U] &= ((/* implicit */_Bool) (~(0U)));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 3) 
                        {
                            var_18 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */int) arr_6 [12U])), (arr_15 [i_5] [i_4] [i_2 + 1] [i_0] [i_0]))) : (arr_9 [(_Bool)1] [8LL] [i_5]))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
                            var_19 *= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_4] [i_5])) ? (1073741792U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_5])))))))));
                        }
                        arr_23 [i_0] [i_2] = ((/* implicit */long long int) arr_22 [i_2] [i_2] [i_1] [i_1] [i_2]);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (signed char)-94))) ? ((~(arr_15 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 1] [i_4]))) : (((/* implicit */int) var_15))));
                        arr_24 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)50650)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4]))) : (arr_2 [15U]))) : (((/* implicit */long long int) (-(arr_13 [i_0] [i_2] [i_2]))))))));
                    }
                    arr_25 [i_0] [i_2] [i_2 + 2] = ((/* implicit */short) ((arr_14 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 2]) != (arr_14 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2])));
                    var_21 -= ((/* implicit */short) max(((unsigned short)35519), (((/* implicit */unsigned short) (short)-690))));
                    var_22 -= ((short) min((((/* implicit */unsigned long long int) (signed char)92)), (((((/* implicit */_Bool) arr_17 [i_0] [14ULL] [i_1] [i_2])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)23321)) ? (((/* implicit */int) (short)-688)) : (((/* implicit */int) arr_22 [(short)0] [2LL] [i_0] [i_0] [(short)0]))))));
    }
}
