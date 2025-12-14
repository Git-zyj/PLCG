/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174939
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_9)) && (arr_8 [i_3] [i_2] [i_1] [i_0]))) || (((/* implicit */_Bool) ((int) arr_6 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_4 - 3] [i_2]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_4])) && (((/* implicit */_Bool) arr_4 [i_0])))) || ((!(((/* implicit */_Bool) var_4)))))))));
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */short) var_8)))))) + (max((arr_5 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_14)))))), (((/* implicit */unsigned long long int) max((arr_13 [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 2] [i_4]), (arr_13 [i_4 - 3] [i_4] [i_4] [i_4] [i_4 + 1] [i_4])))))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (arr_11 [i_3] [i_3] [i_3] [i_3])))) ? (var_9) : ((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))))))) ? ((~(((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_12)))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_4] [i_1])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_8)))), (((((/* implicit */int) var_15)) + (((/* implicit */int) arr_4 [i_0])))))), (((((/* implicit */int) arr_16 [i_6 + 3] [i_6] [i_6] [i_6] [i_6] [i_6])) - (((((/* implicit */int) var_14)) - (((/* implicit */int) arr_10 [i_0]))))))));
                                var_24 = ((/* implicit */_Bool) ((max((var_10), (((/* implicit */unsigned int) arr_2 [i_5 - 1] [i_0])))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_5 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                                arr_20 [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) ((unsigned char) 4294967295U));
                                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_1 [i_0] [i_2]))))) ? (var_16) : ((+(((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_11))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))), (var_16)));
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (((+(((/* implicit */int) var_3)))) | (((((/* implicit */_Bool) max((var_18), (var_13)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_18)))))))));
    /* LoopSeq 1 */
    for (signed char i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        var_28 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (arr_0 [i_7 + 2])))) >> (((((((/* implicit */_Bool) arr_18 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 + 2])) ? (((/* implicit */int) arr_18 [i_7] [i_7 - 1] [i_7 + 2] [i_7 - 1] [i_7 + 2])) : (((/* implicit */int) arr_18 [i_7] [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 1])))) + (8574)))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 1; i_9 < 18; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) min((21U), (14U)));
                        var_30 = ((/* implicit */short) (((~(((/* implicit */int) ((var_15) && (((/* implicit */_Bool) arr_24 [i_7] [i_8]))))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
                        var_31 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) -2586918210535058200LL)) && (((/* implicit */_Bool) 1U)))) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) (!((_Bool)1)))))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */short) arr_21 [i_7 + 2]);
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (var_2)))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) ((_Bool) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64425))) < (0ULL))))) : (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) && (((/* implicit */_Bool) -2147483631)))))) : (4294967254U)))));
            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_7] [i_8]))))) ? ((+(((arr_17 [i_7] [i_7] [i_7] [i_8] [i_8]) + (arr_5 [i_7] [i_8] [i_8]))))) : (((((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7] [i_8] [i_8])) ? (arr_30 [i_8] [i_8] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
        }
    }
}
