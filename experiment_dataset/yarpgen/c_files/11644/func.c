/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11644
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
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((min((((/* implicit */unsigned long long int) 1372724153U)), (min((((/* implicit */unsigned long long int) var_8)), (arr_2 [i_3] [i_3]))))) - (1372724131ULL)))));
                                arr_17 [i_0] [i_4] = ((/* implicit */_Bool) min((var_4), (min((((/* implicit */signed char) var_9)), (min((((/* implicit */signed char) var_15)), (var_11)))))));
                                arr_18 [i_4] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_14 [i_0 - 4] [i_0 - 4] [i_1 - 1] [i_0 - 4] [i_0 - 4])) / (((/* implicit */int) (_Bool)1))))));
                                var_16 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4 - 1] [i_0])))), (((/* implicit */int) (((-(arr_4 [i_0]))) < (((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((var_3) - (2031359525U)))))))))));
                                var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_1 - 1])) || (((/* implicit */_Bool) arr_12 [i_1 + 1])))) ? ((-(((/* implicit */int) arr_12 [i_1 - 1])))) : ((~(((/* implicit */int) arr_12 [i_1 + 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) arr_14 [i_0] [i_6 - 1] [i_6 - 1] [i_0] [i_5 + 1])))));
                                arr_24 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) min((((short) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_5 + 2])), (((/* implicit */short) (_Bool)1))));
                                arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)35))));
                                arr_26 [i_0] [i_5] [i_5] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (5139494936969317537ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((var_13) / (arr_4 [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_6))))))) - (((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 + 2] [i_5])) * (((/* implicit */int) var_15)))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (short)-28305);
                    var_18 = ((/* implicit */unsigned short) ((long long int) min((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
        arr_28 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-93))))) ^ (((unsigned int) ((4294967295U) & (131071U))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
    {
        arr_31 [i_7] [i_7] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)36966))));
        arr_32 [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_7])) < (((/* implicit */int) ((unsigned short) var_4)))));
        arr_33 [i_7] = ((/* implicit */unsigned char) ((int) arr_6 [i_7] [i_7]));
    }
}
