/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150865
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
    var_15 = ((/* implicit */unsigned int) var_14);
    var_16 = ((/* implicit */unsigned long long int) var_14);
    var_17 = ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (3914854216U)))))), (var_9)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_1] = var_5;
            arr_6 [i_0] = ((/* implicit */unsigned int) (((-(var_4))) ^ (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_12)))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_2 [(short)9] [i_1] [i_1])) : (var_9))) : ((-9223372036854775807LL - 1LL)))))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_4 [i_4] [i_0 - 1]))));
                            arr_15 [7ULL] [3ULL] [i_0] [7ULL] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                            arr_16 [i_0] [i_0] [i_2 - 1] [2U] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((+(var_9))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_2 [i_3] [(unsigned char)10] [i_0]) : (arr_3 [i_0 - 1])));
                            arr_17 [i_4] [(short)4] [i_0] [i_1] [i_0] [i_1] [0ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned int) 8407833758429733487ULL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
        {
            arr_20 [i_0 - 1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
            var_21 = ((/* implicit */unsigned short) var_2);
            arr_21 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_6) == (2310530993U))))));
        }
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
            {
                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_7] [11U] [i_0 - 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_13 [i_0] [i_0] [i_7] [1U] [i_0 - 1] [4U])));
                var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) 9223372036854775807LL)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 513158006U)) ? (((/* implicit */int) (short)17092)) : (((/* implicit */int) (unsigned char)212)))))));
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((unsigned short) ((unsigned short) var_7))))));
                    var_26 -= ((/* implicit */_Bool) (-(36474133U)));
                    var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_6] [i_8])) ? (((/* implicit */long long int) var_6)) : (((long long int) arr_13 [i_0] [i_0 - 1] [i_7] [13ULL] [i_0 - 1] [i_6]))));
                }
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    var_28 = ((/* implicit */long long int) var_10);
                    var_29 ^= ((/* implicit */short) ((unsigned long long int) arr_29 [i_0] [(unsigned short)8] [i_0 - 1] [(unsigned short)8]));
                }
            }
            var_30 += ((/* implicit */short) 4629667490119430780ULL);
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_26 [i_0] [12U] [i_6]))) > (((/* implicit */int) arr_27 [i_0 - 1] [i_0 - 1] [i_10] [i_10])))))));
                arr_35 [i_0 - 1] [(unsigned short)8] [i_0 - 1] [i_0] = ((((/* implicit */_Bool) (short)17092)) ? (((/* implicit */unsigned long long int) 3088834736U)) : (((3554280490658664996ULL) * (((/* implicit */unsigned long long int) 0U)))));
                arr_36 [i_0] [0U] [i_0] [(signed char)6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (arr_24 [i_0 - 1] [(unsigned short)0] [i_0])))) + ((-(10441549055080719226ULL)))));
            }
        }
        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) var_5))));
    }
    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
    {
        var_33 |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_38 [(unsigned char)14]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (2016642156U))) : (((unsigned int) var_4))))));
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    {
                        var_34 = ((/* implicit */long long int) var_1);
                        arr_49 [(unsigned short)0] [i_11] [i_13] [i_13] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
    }
}
