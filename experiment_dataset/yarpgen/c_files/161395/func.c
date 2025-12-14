/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161395
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
    var_20 = ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)36))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(-8286513119103123497LL)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_0])))));
            arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 - 1]))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_9 [i_0] [i_3] [i_2]) | (((/* implicit */unsigned long long int) -1651695458))))) ? (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) arr_7 [i_2] [i_2])))) : (((/* implicit */int) (signed char)-42))));
                        arr_12 [i_0] [i_0] |= ((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 + 2])) ? ((((_Bool)1) ? (-1205678734) : (((/* implicit */int) (short)20642)))) : (((((/* implicit */int) (unsigned char)193)) * (((/* implicit */int) (signed char)-42)))));
                    }
                } 
            } 
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)58500)) <= (((/* implicit */int) var_6)))))))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            arr_16 [i_4] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) > (arr_0 [i_4 + 1])));
            var_25 += ((/* implicit */_Bool) (short)32767);
        }
        for (int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (~(var_19))))));
            var_27 = ((/* implicit */short) ((_Bool) arr_2 [3ULL] [(unsigned short)3] [4]));
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                var_28 ^= ((/* implicit */unsigned char) (unsigned short)7055);
                var_29 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_6])) >> (((((((/* implicit */_Bool) (unsigned short)5820)) ? (3401002865422651811LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))))) - (3401002865422651780LL)))));
                var_30 += ((/* implicit */signed char) ((int) (unsigned short)62));
                var_31 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_0]))))) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) arr_18 [i_0]))));
                /* LoopSeq 1 */
                for (int i_7 = 1; i_7 < 10; i_7 += 3) 
                {
                    var_32 = ((/* implicit */unsigned short) (-(arr_17 [i_7 - 1] [i_7 + 1])));
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((unsigned char) (unsigned short)7055)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_27 [i_6] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_9 [i_7] [(unsigned short)3] [i_7])) ? (((/* implicit */int) (signed char)-70)) : (((/* implicit */int) (signed char)-70))))));
                        var_34 -= ((/* implicit */signed char) var_10);
                    }
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 284519030)) ? (-1027114462) : (arr_14 [i_6])))) ? (((/* implicit */int) arr_1 [i_7 - 1])) : (((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                }
            }
            for (int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65266))));
                            arr_38 [i_0] [i_0] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0]))));
                            var_37 = (+(((/* implicit */int) arr_7 [i_9] [i_9])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 1) 
                {
                    var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0])) >= (((/* implicit */int) arr_23 [i_0] [i_5] [i_9] [i_12])))))));
                    var_39 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_18))));
                    var_40 = ((/* implicit */short) ((arr_15 [i_12 + 3] [i_12 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                    arr_41 [i_0] [i_5] [i_9] [i_12] [i_12] = ((/* implicit */unsigned char) arr_32 [i_12] [i_12] [i_9] [i_12 + 3]);
                }
            }
            for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                arr_44 [i_13] [i_13] [i_13] [i_13] = (signed char)109;
                arr_45 [i_0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0] [i_5] [i_13] [i_5])) ? (var_19) : (((/* implicit */int) arr_42 [i_13]))));
            }
        }
    }
    for (short i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        var_41 ^= ((/* implicit */_Bool) arr_46 [i_14]);
        arr_49 [(unsigned char)10] [i_14] = ((/* implicit */short) ((((arr_46 [i_14]) == (((/* implicit */unsigned long long int) arr_48 [i_14])))) ? (((/* implicit */unsigned long long int) (+(284519030)))) : ((~(arr_46 [i_14])))));
        arr_50 [(unsigned char)6] = var_18;
    }
}
