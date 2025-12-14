/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115436
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [(unsigned short)6] [i_0] = ((/* implicit */unsigned char) var_17);
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_6 [i_0] [(short)7] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_6)))) ? (min((var_4), (var_4))) : (((/* implicit */int) var_14)));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            arr_15 [i_3] [i_4] [(_Bool)1] [i_3] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */unsigned int) var_16))))) ? (var_17) : (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (var_16))))));
                            arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) ((var_0) ? (var_17) : (var_12)));
                            var_19 += ((/* implicit */unsigned char) ((var_0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_4)) : (var_1)))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            arr_19 [i_0] [i_0] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
            var_20 *= ((/* implicit */unsigned short) var_3);
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                        {
                            var_21 = ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
                            var_22 = ((/* implicit */_Bool) var_1);
                        }
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                        {
                            arr_30 [(unsigned char)12] [i_5] [i_9] [i_7] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_17)));
                            var_23 = ((/* implicit */short) var_5);
                            arr_31 [i_7] [i_5] [4] = ((/* implicit */unsigned char) var_14);
                            var_24 = ((/* implicit */int) var_12);
                            arr_32 [i_6] [i_5] [i_6] [i_5] [i_6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                        }
                        for (short i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                        {
                            arr_35 [i_10] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) var_16);
                            arr_36 [i_0] [i_7] [1] [i_6] [i_7] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_18) : (((/* implicit */unsigned int) var_5))));
                        }
                        for (short i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */unsigned short) var_12);
                            arr_40 [i_0] [i_7] [i_7] [i_7] [i_11] = ((/* implicit */unsigned short) var_2);
                            var_26 += ((/* implicit */short) var_18);
                            arr_41 [i_0] [i_7] [i_6] [i_7] [i_11] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                        }
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_11))));
                        arr_42 [i_7] = ((/* implicit */unsigned short) var_12);
                        arr_43 [i_7] [(_Bool)1] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_16);
                    }
                } 
            } 
            var_28 ^= ((/* implicit */signed char) var_1);
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 14; i_12 += 2) 
    {
        for (signed char i_13 = 1; i_13 < 11; i_13 += 2) 
        {
            {
                arr_50 [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (var_5)))) ? (min((((/* implicit */unsigned int) var_3)), (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                arr_51 [i_13] [i_13 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_6)))) ? (var_5) : (((/* implicit */int) var_7))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) var_12);
    var_30 = ((/* implicit */unsigned long long int) var_6);
}
