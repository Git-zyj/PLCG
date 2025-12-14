/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115142
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
    var_15 = ((/* implicit */signed char) min(((+(max((((/* implicit */unsigned int) (short)-2024)), (2159369254U))))), (max((var_0), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)60972)) : (2143289344))))))));
    var_16 = ((/* implicit */signed char) var_5);
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) var_11)) | (((((/* implicit */_Bool) -270094041181682458LL)) ? (var_14) : (((/* implicit */unsigned int) 1230928121)))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_1)))))) != (var_2)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [11] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) -2054468852)) ? (2135598042U) : (511U))) : (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)9]))) + (arr_1 [7LL] [i_0]))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_1] [0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1 - 1] [i_1] [(signed char)9])))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            var_18 += ((/* implicit */unsigned int) (unsigned short)41885);
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) arr_3 [i_4]);
                            arr_16 [8U] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_14))) >= (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_0] [1U] [10LL] [i_0]))))))))));
                            var_19 &= ((/* implicit */int) var_9);
                            var_20 *= ((/* implicit */signed char) (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (short)2023))))));
                        }
                    }
                } 
            } 
            var_21 = (+(max((4294966784U), (863516256U))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)37207)) >= (((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)7] [i_0] [11] [1U]))));
        }
        for (short i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 4; i_6 < 10; i_6 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) var_11);
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    var_24 -= ((/* implicit */signed char) max(((-(var_2))), (0U)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_5 + 1] [i_5 + 1] [i_5 - 2] [(signed char)5] [i_6 + 1] [i_6 - 4]))));
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                        arr_27 [i_5] [i_5] [i_5] [1U] [i_8] = ((/* implicit */long long int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_5] [i_5] [i_7] [i_8])))));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_3 [i_6 - 3]))));
                        arr_28 [i_5] [i_8] = ((/* implicit */unsigned int) ((arr_1 [i_5 - 2] [i_5 - 2]) < (((/* implicit */unsigned int) ((/* implicit */int) ((260046848U) >= (2135598042U)))))));
                    }
                    arr_29 [i_0] [i_7] [i_5] [i_7] = ((/* implicit */unsigned short) (short)18364);
                }
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_26 [i_5 + 2] [4U] [i_5 - 2] [1LL] [i_5 - 2]), (((/* implicit */unsigned int) (signed char)0))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_22 [i_5 - 1] [i_5])), (var_12)))) : (min((((/* implicit */unsigned int) arr_22 [i_5 - 1] [2LL])), (arr_26 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 + 2])))));
                arr_30 [i_5] [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_5] [i_5] [i_6]), (arr_9 [i_0] [i_0] [i_6] [i_5] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-68)) ? (arr_1 [i_0] [8LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34583)))))))))));
                var_29 = ((/* implicit */int) ((((unsigned int) (~(2135598041U)))) * (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_22 [i_0] [i_0])))))))));
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        {
                            arr_39 [i_0] [i_5] [i_0] [i_5] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-68))) / (var_10))))) ? (min((var_5), (((/* implicit */unsigned int) (unsigned short)0)))) : (((unsigned int) ((((/* implicit */_Bool) var_12)) ? (8149867278851340865LL) : (var_10))))));
                            var_30 -= ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                var_31 += ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 31)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (unsigned short)38001))))) * (arr_4 [i_12] [i_12] [i_12])));
                var_32 = ((/* implicit */signed char) ((2135598042U) ^ (max((((/* implicit */unsigned int) var_4)), (2159369254U)))));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 1; i_13 < 11; i_13 += 4) 
                {
                    arr_45 [i_5] [i_5] [i_12] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_5 + 1] [i_5] [i_12] [i_13 - 1] [i_5] [i_13 - 1]))));
                    var_33 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) * ((+(arr_6 [i_5 + 1] [i_13 + 1] [i_13 + 1] [i_13])))));
                }
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            arr_50 [i_15] [i_5] [i_12] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -7322568214124994723LL)) ? (((/* implicit */int) (signed char)-118)) : (arr_13 [i_0] [i_5] [i_12] [i_14] [i_14])))) & (3431451039U)));
                            var_34 = ((/* implicit */short) var_14);
                            var_35 = 154384394U;
                        }
                    } 
                } 
            }
            arr_51 [i_5] [i_0] [i_5] = ((/* implicit */long long int) 511U);
        }
        var_36 = max((((((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */int) var_9)) == (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0])))));
    }
}
