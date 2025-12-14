/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161006
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_2] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [10LL] [i_0]))))) : (var_9)))) ? (((((/* implicit */_Bool) -4743712485889793570LL)) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1 + 2] [i_1] [i_1])) <= (((/* implicit */int) arr_5 [i_2] [i_1 + 1] [9] [i_0 - 1]))))))) : (((/* implicit */int) ((short) (+(-4743712485889793563LL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) var_0);
                                arr_11 [i_1] [i_1] [i_2] [(unsigned short)0] [i_1 - 1] [i_3] &= ((/* implicit */unsigned short) max((-4743712485889793558LL), (((/* implicit */long long int) (_Bool)1))));
                                var_16 = ((/* implicit */long long int) (short)-10921);
                            }
                        } 
                    } 
                    var_17 &= ((/* implicit */int) arr_2 [i_0] [i_1 - 2] [(short)5]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            var_18 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_5] [i_6]))));
            arr_17 [i_5] [i_5] = ((/* implicit */short) ((int) (-(((/* implicit */int) (short)-32756)))));
            /* LoopNest 3 */
            for (long long int i_7 = 1; i_7 < 7; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        {
                            arr_26 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) arr_10 [i_5] [i_5] [i_5] [i_8] [i_8]);
                            arr_27 [i_5] = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                for (signed char i_12 = 2; i_12 < 9; i_12 += 3) 
                {
                    {
                        var_19 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_19 [i_12] [i_10]))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)39343)) ? (4743712485889793553LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)32755)) : (((/* implicit */int) (unsigned char)120)))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_10] [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12])) ? (((/* implicit */int) arr_33 [i_12 - 2] [i_12 - 2] [i_12 - 1] [i_12 + 2] [i_12 + 2])) : (((/* implicit */int) (signed char)127))));
                    }
                } 
            } 
            arr_35 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_30 [i_5] [i_5] [i_10] [i_10])));
        }
        for (long long int i_13 = 2; i_13 < 9; i_13 += 1) 
        {
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 11; i_14 += 1) 
            {
                for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                {
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) (~(arr_36 [i_5])));
                            var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_15])) || ((!(((/* implicit */_Bool) arr_0 [i_15]))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((/* implicit */int) arr_5 [i_5] [i_13 + 2] [i_14] [i_16]))))) ? (((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_16 [i_13 - 2])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_17 = 2; i_17 < 9; i_17 += 2) 
            {
                for (unsigned short i_18 = 2; i_18 < 9; i_18 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) (~(var_9)));
                        var_26 = ((/* implicit */_Bool) arr_48 [i_5] [(unsigned short)5] [i_18]);
                        arr_52 [i_5] = ((/* implicit */short) (~((~(4743712485889793570LL)))));
                    }
                } 
            } 
        }
        var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) -4743712485889793563LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-10923)))) <= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4524)) || (((/* implicit */_Bool) (short)32761)))))));
    }
    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min(((unsigned short)64512), (((/* implicit */unsigned short) arr_1 [(_Bool)1]))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_0 [(short)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_51 [0LL] [i_19] [0LL]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_19])))))));
        var_29 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_33 [i_19] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_33 [i_19] [i_19] [i_19] [i_19] [i_19])) : (((/* implicit */int) arr_33 [i_19] [i_19] [i_19] [i_19] [i_19]))))));
    }
    /* LoopNest 2 */
    for (long long int i_20 = 0; i_20 < 16; i_20 += 1) 
    {
        for (signed char i_21 = 3; i_21 < 14; i_21 += 4) 
        {
            {
                var_30 = ((/* implicit */unsigned char) -4446634676954676739LL);
                var_31 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (short)21631)))) ^ (((((/* implicit */_Bool) arr_58 [(short)1] [i_21])) ? (((/* implicit */int) arr_61 [i_20] [i_20])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_21])))))))));
                var_32 = ((/* implicit */signed char) var_12);
            }
        } 
    } 
}
