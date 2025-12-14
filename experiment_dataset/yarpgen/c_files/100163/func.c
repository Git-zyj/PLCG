/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100163
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = (~(arr_1 [(signed char)2]));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))))));
        var_17 += (unsigned char)42;
        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7967395299308822698LL)) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) arr_0 [i_1]))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) (((+(arr_11 [i_2] [i_2]))) >= (((/* implicit */int) (_Bool)0))));
                        arr_14 [i_1] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_8 [(short)3] [i_4] [(short)3] [i_4 + 1]))));
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) (unsigned short)62419)))) * ((+(((/* implicit */int) (unsigned char)58)))))))));
                        var_22 *= ((/* implicit */unsigned int) (unsigned short)62419);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 4; i_6 < 11; i_6 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) ((arr_19 [i_1] [(unsigned short)2] [i_5] [i_6 - 3] [(unsigned char)2] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62415)))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 8143244487766727223LL)) && (((/* implicit */_Bool) var_3))))) ^ (((/* implicit */int) arr_20 [i_1] [i_6 - 3] [i_5] [0U])))))));
                        arr_21 [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 535822336)))))) / (((var_8) / (var_15))));
                        arr_22 [i_1] [2LL] [i_5] [3LL] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-13921)) >= (((/* implicit */int) arr_20 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    for (unsigned char i_9 = 2; i_9 < 10; i_9 += 3) 
                    {
                        {
                            arr_29 [i_7] [i_7] [(unsigned char)11] [i_7 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 535822336)) < (0LL)));
                            arr_30 [i_1] [i_1] [i_7] [i_8] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_4)) % (((/* implicit */int) (short)-13921)))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_10 = 1; i_10 < 10; i_10 += 2) 
        {
            arr_33 [i_10] [i_10 + 2] = ((/* implicit */long long int) ((((/* implicit */int) arr_25 [0LL] [0LL] [i_10] [0LL] [i_1] [2])) + (((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [i_10 - 1] [i_1] [i_10] [i_1]))));
            arr_34 [i_1] [i_10] [i_10] = ((/* implicit */long long int) ((unsigned short) arr_23 [i_1] [i_10 + 2] [i_10 + 1] [i_10 + 2]));
        }
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 12; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7251)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5292460044796862112LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1]))))) : (((/* implicit */int) (unsigned short)62419)))))));
                            arr_48 [i_1] [i_11 + 1] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)7622)) : (((/* implicit */int) var_13)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                for (unsigned char i_16 = 3; i_16 < 9; i_16 += 1) 
                {
                    {
                        arr_54 [i_1] [i_1] [i_15] [(unsigned short)8] [i_16 - 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_49 [i_16 + 1] [i_11 + 1] [i_11 + 1])) ? (arr_49 [i_16 + 2] [i_11 + 1] [i_11 + 1]) : (arr_49 [i_16 - 1] [i_11 + 1] [i_11 + 1])));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_39 [i_15]) != (((/* implicit */unsigned long long int) -1020606744))))) & ((-(((/* implicit */int) (unsigned short)7755))))));
                        arr_55 [(unsigned short)7] [i_11 + 1] [(unsigned short)7] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62437)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (unsigned char)186))));
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((((/* implicit */_Bool) -206343337)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_1])))) < (((/* implicit */int) arr_28 [i_11 + 1] [i_11 + 1] [(_Bool)1] [(_Bool)1] [i_11 + 1] [i_11] [i_11 + 1])))))));
        }
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_10))));
    }
    var_29 = max((((/* implicit */int) var_14)), ((+(((var_11) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
}
