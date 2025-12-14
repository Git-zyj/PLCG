/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143093
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned short)37816)) : (((/* implicit */int) (signed char)-23))))) : (arr_1 [i_0])));
        arr_3 [(_Bool)1] [i_0] = ((/* implicit */signed char) (~(((unsigned int) var_18))));
        var_20 = ((/* implicit */signed char) var_0);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) ((4294967295U) == (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) : (3334853179U)))));
            arr_7 [i_0] = ((/* implicit */unsigned int) ((int) 985101195U));
            arr_8 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551612ULL))));
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 4; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_2] [(unsigned char)2] [5U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_1] [i_3])) ? (((/* implicit */unsigned long long int) arr_9 [i_2 - 1] [i_2] [i_3 + 4])) : (((((/* implicit */_Bool) var_14)) ? (var_18) : (var_15)))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (var_8)));
                    }
                } 
            } 
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 2) 
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(((arr_5 [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                var_23 = ((/* implicit */long long int) arr_10 [i_5] [i_5 - 3] [i_5 - 1]);
            }
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(unsigned char)5] [(unsigned char)5])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) ? (((unsigned long long int) (signed char)33)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (var_1) : (((/* implicit */int) (signed char)24))))))))));
                arr_23 [19ULL] [i_0] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) arr_10 [i_0] [i_4] [0LL]));
                var_25 = ((/* implicit */int) var_9);
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((arr_22 [i_0] [i_4] [i_6]) || (((/* implicit */_Bool) (signed char)44)))))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        {
                            arr_32 [i_0] = ((/* implicit */unsigned int) (signed char)-25);
                            var_27 = ((/* implicit */int) var_9);
                        }
                    } 
                } 
                arr_33 [i_4] [i_4] [14LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_0] [15] [i_4] [16ULL] [i_7])) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_0] [i_4] [(unsigned short)8]))) : (var_13)));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 4) 
                    {
                        {
                            arr_40 [i_0] [(unsigned char)18] [i_7] [i_10] [13ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)166))) - (((long long int) var_17))));
                            arr_41 [i_4] [i_4] [i_4] [i_4] [i_10] = ((/* implicit */unsigned int) var_16);
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((long long int) (_Bool)0)))));
                        }
                    } 
                } 
                arr_42 [i_0] = ((unsigned long long int) (unsigned short)65535);
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 2; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-23)) ? (-1628320291) : (((/* implicit */int) arr_47 [i_13 - 2] [(_Bool)1] [i_12] [(signed char)14] [i_4] [5U]))));
                            arr_48 [i_0] [(unsigned char)18] [i_7] [i_12] [i_12] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)19)) >> (((((/* implicit */int) (unsigned short)13190)) - (13166)))));
                        }
                    } 
                } 
            }
            var_30 += (-(((((/* implicit */_Bool) 0U)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_4] [i_4]))))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65526))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((unsigned long long int) 4294967295U))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) 1628320290))) / (((/* implicit */int) (signed char)-17))));
            var_34 = ((/* implicit */long long int) 4233841908U);
        }
    }
    var_35 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) : (9109722421783729523LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1628320291)) || (((/* implicit */_Bool) var_2))))))))));
}
