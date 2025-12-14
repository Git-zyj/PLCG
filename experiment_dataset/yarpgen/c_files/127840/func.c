/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127840
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((var_4) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) / (max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) var_4))))), (min((var_6), (((/* implicit */unsigned long long int) var_9)))))))))));
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) (_Bool)0)), (min((((/* implicit */unsigned long long int) var_4)), (var_6)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] [i_0 - 1] = (!((_Bool)1));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) (~((-(min((((/* implicit */unsigned long long int) arr_6 [i_2] [i_0] [i_1] [i_0])), (var_6)))))));
                    var_13 = ((/* implicit */unsigned short) ((584443014U) > (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3710524281U))))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)1008), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 2] [(short)9] [i_0 - 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [(short)6]))))))))));
            var_15 = (!(((/* implicit */_Bool) min(((unsigned short)25762), (((/* implicit */unsigned short) (short)-8183))))));
            var_16 ^= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_9 [2LL] [(unsigned short)8] [i_0])))));
        }
        for (int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_0)), (max((((/* implicit */unsigned short) (signed char)-122)), (arr_10 [i_0 + 1] [i_4])))))), (min((((/* implicit */unsigned int) (unsigned char)0)), (var_1)))));
            arr_17 [i_0] [(short)13] = ((/* implicit */unsigned short) ((signed char) (unsigned char)255));
            /* LoopNest 2 */
            for (unsigned short i_5 = 3; i_5 < 15; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (_Bool)1);
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            var_19 ^= ((/* implicit */unsigned int) var_8);
                            var_20 = ((/* implicit */long long int) arr_5 [i_4]);
                            arr_29 [i_0] [i_0] [i_0] [i_6] [i_5 - 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 584443005U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)25748))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((signed char) ((unsigned int) min((arr_15 [i_0] [i_4]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            arr_34 [i_0] [10LL] [i_0 - 3] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(max(((~(((/* implicit */int) (unsigned char)52)))), ((~(((/* implicit */int) (_Bool)1))))))));
                            arr_35 [i_0] [(unsigned short)15] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (_Bool)1)), (3519675791713238545ULL)));
                            var_22 *= ((/* implicit */unsigned short) arr_23 [i_0 + 1] [i_6]);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) ((unsigned long long int) min((max((var_1), (((/* implicit */unsigned int) var_2)))), (1146651945U))));
                            var_24 = ((/* implicit */unsigned char) min((min((((((/* implicit */int) var_8)) - (((/* implicit */int) var_7)))), (((/* implicit */int) var_2)))), (((/* implicit */int) ((short) arr_31 [i_5 + 2] [i_6] [(unsigned char)12] [i_0] [i_9])))));
                        }
                    }
                } 
            } 
            var_25 &= (_Bool)1;
        }
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (unsigned short)25740))));
    }
    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) var_7);
                    arr_46 [i_10] [i_10] [i_10] [i_12] = var_9;
                }
            } 
        } 
        arr_47 [(_Bool)1] [(_Bool)1] &= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (18446744073709551615ULL))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1)))))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_13] [i_10] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_42 [i_10] [i_10] [i_10]))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) min((max((var_6), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_2)))))));
            /* LoopNest 3 */
            for (signed char i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                for (short i_16 = 2; i_16 < 12; i_16 += 1) 
                {
                    for (int i_17 = 2; i_17 < 11; i_17 += 4) 
                    {
                        {
                            var_31 ^= ((/* implicit */unsigned char) var_3);
                            arr_66 [i_10] [(unsigned char)5] = ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_10] [3ULL]);
            var_33 *= ((/* implicit */short) var_5);
            var_34 = ((/* implicit */unsigned long long int) var_9);
        }
        var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39788))) == (((var_3) ? (max((((/* implicit */unsigned long long int) (signed char)24)), (arr_22 [(_Bool)1] [(_Bool)1] [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (short)32767)))))))));
    }
}
