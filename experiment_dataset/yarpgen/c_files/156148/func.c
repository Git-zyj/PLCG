/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156148
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
    var_12 = ((/* implicit */signed char) var_5);
    var_13 = ((/* implicit */unsigned char) var_1);
    var_14 = var_5;
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_3] [i_0 + 1] [i_3] [i_4] [i_1 - 2] |= max((718237749), (-718237722));
                                arr_17 [i_0 - 1] [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_7 [i_4] [i_3 + 3] [i_1])) ? ((-(-718237722))) : (((((/* implicit */_Bool) 39337901)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-115))))))));
                                arr_18 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (arr_7 [i_0 + 2] [i_1 - 3] [i_2]) : (arr_7 [i_0] [i_0] [i_2])))));
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_5 [i_0 - 1] [i_1]))));
                                arr_19 [13ULL] [(unsigned char)9] [i_2] [i_1 + 2] [(unsigned char)12] &= min(((-(((/* implicit */int) arr_1 [i_1 + 4] [i_0 + 3])))), ((~(var_8))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_26 [i_6] [(unsigned short)0] [i_6] [i_5] [i_6] = ((/* implicit */int) ((2219294618700126880ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)138)))));
                                var_16 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0 + 2] [i_0 + 1] [(unsigned short)9])))))));
                                var_17 ^= ((/* implicit */int) max((arr_12 [i_1 + 1] [i_0 + 3] [i_0 - 1] [i_5]), (min((arr_12 [i_1 - 3] [i_0] [i_0 + 1] [i_2]), (((/* implicit */unsigned long long int) var_10))))));
                                arr_27 [i_1] [i_6] [i_2] [i_6] [i_0 + 1] = ((((/* implicit */_Bool) 718237722)) ? (4294967291U) : (((/* implicit */unsigned int) 718237747)));
                                arr_28 [i_1] [i_6] = ((/* implicit */short) arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] [13U]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        var_18 ^= ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) (signed char)-32)))));
                        var_19 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_0))))));
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 2]))))) && (((/* implicit */_Bool) arr_14 [i_1 - 3] [i_2] [i_1 - 3] [i_1 - 3] [i_0 + 2])))))));
                        arr_32 [i_0] [i_1] [(signed char)7] [i_2] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_7] [i_7] [(unsigned char)6])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_2])) : (arr_8 [i_7] [i_2] [i_0 + 1]))));
                        arr_33 [i_0 + 2] [i_0 + 2] [i_2] [i_7] = var_2;
                    }
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_21 = (-((+(((/* implicit */int) var_5)))));
                        var_22 = ((/* implicit */_Bool) var_1);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) var_4);
}
