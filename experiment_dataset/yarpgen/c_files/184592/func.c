/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184592
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] [1LL] [i_0] = ((/* implicit */long long int) min(((+(((/* implicit */int) (signed char)-106)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) <= (12002684514530426898ULL))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [(short)4] [i_0] [i_3] &= ((/* implicit */short) ((((((((/* implicit */_Bool) -1574222713)) && (((/* implicit */_Bool) arr_11 [i_0] [(signed char)0] [i_2] [i_3] [(unsigned short)10])))) ? (max((((/* implicit */long long int) (signed char)-106)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1485498073U))))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (min((((long long int) (unsigned char)132)), (((/* implicit */long long int) arr_6 [i_3] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) (_Bool)1)) / ((+(arr_11 [(short)10] [(short)10] [(short)10] [i_0] [9U])))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1052185357)) ? (((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) >= (((int) arr_17 [(unsigned char)3]))))) : (((/* implicit */int) arr_18 [i_4 + 2]))));
        var_16 = ((((/* implicit */_Bool) (signed char)-106)) ? (2766563026U) : (1528404287U));
        arr_20 [6LL] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_16 [i_4 + 3])))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4 + 1]))) >= (arr_15 [i_4 + 2]))))));
        arr_21 [i_4] [i_4 - 1] = ((((/* implicit */_Bool) arr_18 [i_4 + 3])) ? (((((/* implicit */int) arr_18 [i_4 + 2])) % (((/* implicit */int) arr_18 [i_4 + 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4 + 3])) && (((/* implicit */_Bool) 1751466861))))));
        arr_22 [(unsigned char)10] = ((/* implicit */short) (!(((/* implicit */_Bool) 1052185357))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_24 [(signed char)12]))));
        var_18 *= ((/* implicit */signed char) ((arr_24 [i_5]) / (((/* implicit */long long int) arr_23 [i_5] [i_5]))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) arr_25 [11U]);
        var_20 = 1052185357;
        var_21 = ((/* implicit */long long int) ((unsigned int) min((1894158057754728689LL), (((/* implicit */long long int) arr_27 [i_6] [i_6])))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (arr_26 [i_6])));
        arr_29 [8] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (((/* implicit */int) var_5)) : (arr_23 [i_6] [i_6])))));
    }
}
