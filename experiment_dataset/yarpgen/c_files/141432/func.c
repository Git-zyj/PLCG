/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141432
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [6ULL] [3ULL] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((arr_4 [i_1] [i_1] [i_2 - 2]) ? (arr_9 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1518409467769636015LL)))))))));
                    }
                } 
            } 
            var_12 = ((/* implicit */short) ((arr_8 [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0] [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0]))) : (18446744073709551615ULL)));
            arr_13 [i_0] [i_1] &= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)16838)) : (((/* implicit */int) (short)32767)))) >= (((/* implicit */int) (unsigned short)48698))));
            var_13 = ((/* implicit */short) ((arr_8 [i_0] [(_Bool)1] [i_0 - 3] [i_0 - 3] [i_0 - 1] [i_1]) ? (524287LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48698)))));
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                arr_16 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */_Bool) ((arr_4 [(unsigned short)4] [i_0 - 2] [i_0 - 3]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [9U] [i_0 - 2] [i_0 - 3]))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) var_8);
                            arr_21 [i_0] [i_0 + 2] [i_1] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (-((((_Bool)1) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (short)-15308))))));
                            var_15 = ((/* implicit */_Bool) ((signed char) var_7));
                        }
                    } 
                } 
                arr_22 [i_0 - 2] [i_0] [i_4] [i_4] = ((_Bool) ((((/* implicit */_Bool) 311789789U)) ? (((/* implicit */int) arr_19 [i_1] [i_4] [(short)14] [i_1])) : (((/* implicit */int) arr_14 [i_4]))));
            }
            for (int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                arr_25 [i_7] [i_1] [i_7] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) 3010393855U))));
                arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) ((short) ((arr_4 [i_0] [i_1] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65535)))));
            }
            for (unsigned short i_8 = 3; i_8 < 13; i_8 += 2) 
            {
                var_16 = ((/* implicit */short) (+(var_3)));
                arr_31 [i_1] [i_1] &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [(_Bool)1] [i_8 - 1] [i_1] [i_1] [i_1] [(_Bool)1]))));
            }
        }
        for (short i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            arr_34 [i_0] [i_9] [i_9] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
            var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0 - 3] [i_9]))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) * (((/* implicit */int) (unsigned short)65535)))) & (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))));
            /* LoopSeq 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) || (((/* implicit */_Bool) arr_18 [i_10]))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_4))));
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((_Bool) ((long long int) arr_36 [i_0 + 2] [i_12 - 1]))))));
                arr_43 [i_0] [i_12] = ((/* implicit */short) var_3);
            }
            arr_44 [i_0] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_0 - 1] [i_0] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_0 - 2] [(_Bool)1] [i_0] [i_10])) ? (arr_33 [i_0] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44298)))))) : (((7015023743822805254ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1])))))));
            arr_45 [i_10] [i_10] [i_0 - 1] = ((/* implicit */unsigned long long int) ((arr_38 [(signed char)4] [i_10] [i_0]) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_10])) || (var_8)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-15308)) : (((/* implicit */int) (_Bool)1))))));
            var_22 = (-(((/* implicit */int) ((signed char) 1133658676U))));
        }
        arr_46 [i_0] = var_9;
        arr_47 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_27 [i_0] [i_0])) : (((/* implicit */int) arr_32 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 3; i_13 < 8; i_13 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_13 - 3] [i_13])) ? (arr_37 [i_13] [i_13] [i_13 - 1]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_32 [12U] [i_13])))))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 32512LL)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) (unsigned char)0))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_10))))))))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 3; i_14 < 8; i_14 += 4) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_14 - 3] [i_14]))) == (arr_39 [i_14 + 2] [i_14 + 2] [i_14 + 2]))))));
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned long long int) arr_54 [i_14 + 2]);
                    var_27 *= ((/* implicit */short) (~(11035267597005704248ULL)));
                }
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) (-(1133658676U)));
}
