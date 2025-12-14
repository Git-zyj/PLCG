/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117502
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-18033)) : (((/* implicit */int) var_9))))));
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) -714268566785269934LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26038))) : (2636301139U))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) ((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((70366596694016ULL) <= (((/* implicit */unsigned long long int) var_6))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1])));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (+(arr_2 [i_2]))))));
            var_15 = ((/* implicit */short) arr_9 [i_1]);
            arr_10 [i_1] [i_1] = (_Bool)1;
            arr_11 [(short)4] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_9 [(_Bool)1])))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_16 = ((/* implicit */short) var_2);
                    var_17 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_14 [i_3 + 2]))));
                    var_18 = ((/* implicit */unsigned int) arr_9 [i_3 + 2]);
                    arr_17 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) var_7);
                }
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))) > (9223372032559808512ULL))))) | (-712112178098573340LL)));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (short i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1910536978U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)9470)))))) ? (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (arr_2 [i_1]) : (((/* implicit */long long int) 1658666157U)))) : (((/* implicit */long long int) arr_20 [(signed char)5] [i_6 - 1] [i_5] [i_5] [i_3]))));
                            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_6 - 1])) ? (((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 3] [1ULL] [i_6 - 1])) : (((/* implicit */int) arr_12 [i_3 + 2] [i_3 - 1] [i_5] [i_6 - 1]))));
                        }
                    } 
                } 
                var_22 ^= ((((/* implicit */_Bool) arr_22 [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3] [i_3] [i_3])) ? ((+(arr_8 [i_3] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            for (long long int i_9 = 4; i_9 < 10; i_9 += 3) 
            {
                {
                    arr_30 [i_7] [(unsigned char)7] [(signed char)6] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)4))));
                    var_23 ^= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_20 [15LL] [12ULL] [12ULL] [15LL] [i_7]) : (1201099288U))));
                }
            } 
        } 
        arr_31 [i_7] [0U] = ((/* implicit */_Bool) 1040336246U);
    }
}
