/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179816
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_0 + 1]))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) 
                {
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0 + 1]))))) ? (14878545313246877378ULL) : ((((~(arr_4 [i_0 + 1]))) << ((((~(((/* implicit */int) (_Bool)1)))) + (49)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((int) ((unsigned int) ((((/* implicit */int) arr_5 [i_1 + 1] [i_3 + 1] [i_4])) | (-383965754))));
                                var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */int) (_Bool)1)), (1396310632))) + (((/* implicit */int) ((short) arr_14 [i_2])))))) ? (min((((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1] [i_2] [i_3])) ? (arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] [i_1 + 2]) : (arr_13 [i_0] [12] [i_0] [12ULL] [i_3]))), (arr_12 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_2 + 3] [i_3] [i_3 - 2]))) : (((/* implicit */int) ((unsigned char) -1060298458)))));
                            }
                        } 
                    } 
                }
                var_15 ^= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */int) ((_Bool) -1396310633))) == (((-1396310654) / (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_1]))))))), ((~((-(((/* implicit */int) (signed char)88))))))));
                var_16 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) ((unsigned char) arr_8 [i_0] [i_0] [13ULL]))) * (((/* implicit */int) ((((/* implicit */_Bool) 2323938431482997909ULL)) && (((/* implicit */_Bool) arr_4 [i_0]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 4) 
    {
        for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 2) 
        {
            {
                var_17 -= ((/* implicit */unsigned long long int) arr_19 [i_5]);
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        arr_28 [i_5] [i_5] [12ULL] [i_7] [i_8] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(12ULL)))) ? ((~(((/* implicit */int) (signed char)105)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5] [15U] [i_5] [i_5] [i_5 - 1] [i_5])) && (((/* implicit */_Bool) arr_20 [i_5] [i_6] [13])))))));
                        var_18 &= (+((-(arr_6 [i_5]))));
                        var_19 = ((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7])))))) : (((((/* implicit */_Bool) 17591270416673225918ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */short) ((((unsigned long long int) arr_17 [6ULL] [10])) >= (((/* implicit */unsigned long long int) arr_21 [i_5 - 1] [i_5 - 1]))));
                        var_21 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_6 + 2] [i_6 - 2] [i_6 - 2]))));
                        arr_31 [i_9] [i_5] [i_7] [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_6 - 2] [i_6 + 1] [i_6 - 1]));
                    }
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 15; i_11 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) 2323938431482997909ULL);
                                arr_36 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned long long int) (unsigned short)36764))))) ? (((((/* implicit */_Bool) arr_15 [i_5 + 1])) ? (1060298458) : (((/* implicit */int) arr_1 [i_5 - 1])))) : ((~(((/* implicit */int) arr_8 [i_6 - 3] [i_6 + 2] [i_11 - 1]))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 1060298458)) && (((/* implicit */_Bool) arr_24 [i_5] [i_5] [i_7]))))) >= (((int) arr_12 [i_5] [i_5] [i_6 + 3] [i_6] [(_Bool)1] [i_7])))))));
                }
            }
        } 
    } 
}
