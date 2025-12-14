/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159240
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) || (((/* implicit */_Bool) ((var_6) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_2 [i_0]))))))))));
        var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [(short)1]) ^ (((/* implicit */long long int) (~(arr_2 [i_0]))))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0 + 1]) >= (arr_0 [i_0 + 1])))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        arr_10 [i_3] [i_2] [9ULL] = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0] [0]);
                        /* LoopSeq 2 */
                        for (int i_4 = 1; i_4 < 12; i_4 += 2) 
                        {
                            arr_14 [i_4] [i_4] [i_4] [i_4 - 1] &= ((/* implicit */unsigned short) (~(min((1LL), (((/* implicit */long long int) arr_11 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4] [i_4] [i_4 - 1]))))));
                            arr_15 [i_0 + 1] [(short)3] [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) arr_9 [i_1] [i_1 - 1] [(_Bool)1] [i_1] [i_1] [i_1 - 2]))))));
                        }
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_19 *= ((/* implicit */unsigned long long int) (~(((arr_6 [i_1 - 1] [11ULL] [i_0 + 1] [(unsigned char)12]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_0 + 1])))))));
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) ? ((+(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */long long int) var_7)) : (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 - 1] [i_0 + 1]))))))));
                            var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (arr_6 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])))) ? (min(((-9223372036854775807LL - 1LL)), (1LL))) : (((/* implicit */long long int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
                            arr_18 [i_0 + 1] [(_Bool)0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */short) arr_5 [(signed char)0]);
                            var_22 &= ((/* implicit */int) arr_12 [i_2] [i_1 - 2]);
                        }
                        arr_19 [(signed char)12] [i_2] [i_1] [i_0] = ((/* implicit */signed char) (-(min(((+(arr_6 [(short)2] [i_2] [(signed char)11] [(signed char)11]))), (((/* implicit */unsigned int) arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_2]))))));
                        var_23 &= ((/* implicit */unsigned int) ((signed char) min((max((((/* implicit */int) var_2)), (var_5))), (((/* implicit */int) var_6)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_24 = ((/* implicit */int) var_1);
            var_25 *= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (signed char)127))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_13 [i_0] [i_7] [i_0] [i_0] [i_0]))));
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_7 [12] [i_7] [i_7]))));
        }
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            arr_28 [i_0] [i_0 + 1] [2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-127))));
            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_0]))));
            var_29 = ((/* implicit */short) arr_5 [i_8]);
        }
    }
    /* LoopNest 2 */
    for (short i_9 = 2; i_9 < 20; i_9 += 3) 
    {
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            {
                var_30 = ((/* implicit */signed char) max((var_30), (arr_31 [i_9 + 4] [i_10])));
                arr_34 [i_10] [i_10 - 1] = ((/* implicit */int) arr_30 [i_10]);
            }
        } 
    } 
}
