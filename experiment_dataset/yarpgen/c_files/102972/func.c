/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102972
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] |= ((unsigned short) ((unsigned long long int) (_Bool)0));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) ((long long int) arr_11 [i_0] [3U] [8U] [i_3] [i_1]));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [(_Bool)1] [i_2 - 1] [i_2] [i_2] [(signed char)0])) ? (arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]) : (((/* implicit */unsigned long long int) arr_9 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_2]))));
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526))) ^ (8388600U)))));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [(short)2] &= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_1))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1] [i_1] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5)));
                            arr_18 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) arr_8 [i_1 + 1] [i_1 + 1] [i_1] [i_1]));
                            arr_19 [5ULL] [i_1] [i_1] [(unsigned short)16] [i_1] = ((/* implicit */unsigned char) arr_8 [i_2 + 1] [(unsigned short)10] [i_2] [(_Bool)1]);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 3; i_6 < 16; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    arr_26 [i_7] &= ((/* implicit */_Bool) var_10);
                    arr_27 [i_0] [i_0] [(_Bool)0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7]))) - (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6 - 2]))) : (((((/* implicit */_Bool) 5)) ? (((/* implicit */unsigned long long int) 2860555926U)) : (var_4))));
                }
            } 
        } 
        arr_28 [i_0] = var_10;
    }
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        for (unsigned int i_9 = 2; i_9 < 22; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_42 [i_9] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_4))) % (((/* implicit */unsigned long long int) ((long long int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1)))));
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) arr_30 [i_8]))))) ? (((/* implicit */unsigned long long int) 1073741824)) : (max((((/* implicit */unsigned long long int) arr_38 [i_8] [i_12] [i_10] [i_11] [i_12])), (var_6))))) & (((unsigned long long int) ((signed char) 0ULL))))))));
                                arr_43 [i_9] [i_10] [i_10] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_32 [i_9] [i_9]) : (var_10)))) ? (((((/* implicit */_Bool) arr_36 [i_8] [i_12 - 1] [(signed char)8] [(signed char)8])) ? (var_4) : (((/* implicit */unsigned long long int) 8388600U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_5) : (((/* implicit */unsigned int) 1073741824))))))) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_8] [i_9] [(unsigned char)16] [(_Bool)1])) == (((/* implicit */int) arr_37 [i_8] [i_8] [i_8] [i_8] [(unsigned char)11] [i_8]))))), (max((((/* implicit */long long int) var_9)), (757978653902099309LL)))))));
                                arr_44 [i_11] [i_11] [i_11] [i_9] [i_11] [i_11] = ((/* implicit */_Bool) arr_41 [i_11] [16U] [i_11] [i_11] [16U]);
                            }
                        } 
                    } 
                    arr_45 [i_8] [i_10] [i_9] = ((_Bool) 757978653902099305LL);
                    arr_46 [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_30 [9LL])), ((~(((long long int) arr_36 [i_10] [i_9] [i_10] [i_10]))))));
                    arr_47 [i_8] [i_9] = ((/* implicit */_Bool) ((unsigned short) arr_39 [i_8] [i_8] [i_9] [i_8] [i_8] [(_Bool)1]));
                }
            } 
        } 
    } 
}
