/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164381
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_3 [i_1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_15 += ((arr_9 [i_0] [i_0] [i_0] [i_2]) / (((/* implicit */int) (unsigned char)102)));
                        var_16 = ((/* implicit */_Bool) var_3);
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((arr_9 [(unsigned char)8] [i_1 - 2] [6] [i_1]) / (arr_9 [i_0] [i_1 + 1] [i_2] [i_2]))))));
                        var_18 = ((/* implicit */int) (((~(arr_9 [i_0] [i_0] [i_2] [i_3]))) > (((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_1 - 3] [(short)3] [i_2 + 1]))));
                    }
                    arr_11 [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1]);
                    var_19 = ((/* implicit */short) var_6);
                    var_20 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(arr_8 [i_0] [i_1 + 1] [i_2] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [6U] [i_2] [i_0] [6U] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8950))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (+(((((((/* implicit */int) arr_1 [i_5] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_4])) + (21791))))))))));
                    var_22 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) -35581503)), (arr_3 [i_5]))));
                    var_23 = ((/* implicit */long long int) 4294967295U);
                }
            } 
        } 
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (~(max((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) (short)-8951)), (3ULL))))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    arr_21 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) min((arr_1 [i_0] [i_6]), (((/* implicit */short) (signed char)(-127 - 1)))))), (min((min((arr_14 [i_6] [i_6]), (((/* implicit */int) var_0)))), (((/* implicit */int) ((arr_3 [i_0]) == (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0])))))))));
                    var_25 = arr_5 [1U];
                    var_26 = ((/* implicit */unsigned long long int) min((((short) arr_3 [i_0])), (((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_0] [1U])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
                        arr_25 [i_6] [i_7] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_8 - 1] [i_8 - 1] [i_7] [i_8] [i_8]))));
                        var_28 = ((/* implicit */unsigned char) arr_10 [(unsigned short)8] [i_0] [i_6] [1U] [i_7] [i_8]);
                    }
                    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        arr_28 [i_0] [i_7] [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) min((24), (((/* implicit */int) (short)8951))));
                        var_29 = ((/* implicit */int) max((var_29), (arr_9 [i_0] [i_6] [i_0] [i_7])));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned int) var_8);
                            arr_31 [i_0] [(short)5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [(signed char)11]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (short)-8940)) : (((/* implicit */int) arr_17 [i_10] [i_6] [i_0]))));
                            var_31 = ((/* implicit */unsigned short) (unsigned char)146);
                            var_32 = ((unsigned short) var_8);
                        }
                        arr_32 [i_9] [i_7] [i_6] [5LL] = ((/* implicit */short) arr_9 [i_0] [i_6] [i_7] [i_0]);
                    }
                }
            } 
        } 
    }
    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
    {
        var_33 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_11])) > (((/* implicit */int) arr_33 [4ULL]))))), (((4548246379528667416LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) arr_36 [i_11]))));
        var_34 = ((/* implicit */unsigned long long int) (-(min((((var_5) ? (-5984866206628340724LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))))));
    }
    var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_8)))))))) | (min((var_1), (((/* implicit */int) (short)8191))))));
}
