/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185970
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [4ULL] [i_0] &= var_5;
        arr_4 [i_0] = ((/* implicit */short) 4194240U);
    }
    /* LoopNest 2 */
    for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        for (short i_2 = 4; i_2 < 14; i_2 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1] [i_2 - 3] [i_2 - 4])) ? (-1860942668) : ((+(((/* implicit */int) (short)-32759)))))))));
                    var_11 = ((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1] [i_1]))))) > (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_12 [(signed char)11] [(signed char)12] [(signed char)11] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_18 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) - (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_3)))))));
                                arr_19 [i_4] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_13 [i_2 + 1])) < (var_7)));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((arr_15 [i_2] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1]) > (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)18700)))))))));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) arr_20 [i_1 - 1] [i_2 - 3] [i_2 + 1])), (var_7)))));
                                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -7752429290675535292LL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4194240U)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (_Bool)0))))) : (((unsigned int) 1114958991183627232LL))))) == ((~(arr_22 [i_2] [i_2 - 2] [i_2 + 2])))));
                                var_14 = ((/* implicit */int) arr_7 [i_1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((4194241U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)32763)))))) << (((((min((1114958991183627257LL), (((/* implicit */long long int) ((signed char) -1860942668))))) + (107LL))) - (3LL)))));
    /* LoopSeq 1 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_32 [i_9] [1] = ((/* implicit */short) -1860942668);
        arr_33 [i_9] = ((/* implicit */int) arr_29 [i_9]);
        arr_34 [i_9] = (short)32758;
        var_16 = ((/* implicit */unsigned char) var_4);
        arr_35 [i_9] [i_9] = arr_15 [(signed char)8] [i_9] [8LL] [i_9] [i_9] [i_9];
    }
}
