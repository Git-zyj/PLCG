/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120299
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)253);
        arr_4 [i_0] = ((/* implicit */_Bool) var_2);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-8497))) | (var_2)));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (-(var_7)));
                    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))))) ? (((/* implicit */int) arr_13 [i_3] [i_2])) : ((-(((/* implicit */int) arr_10 [i_1]))))));
                }
            } 
        } 
    }
    for (long long int i_4 = 2; i_4 < 20; i_4 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)36143))));
        arr_16 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8487)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8496)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21)))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : ((-2147483647 - 1))))))) : (max((var_9), (((/* implicit */unsigned int) (short)29317))))));
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            arr_19 [11] [6U] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((int) arr_7 [i_4 - 1] [9U]))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) % (arr_7 [i_4 - 2] [i_5])))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                var_16 = ((/* implicit */short) ((((((/* implicit */int) arr_17 [i_4])) > (var_5))) ? (var_0) : (var_0)));
                var_17 = ((/* implicit */long long int) var_1);
            }
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_5])) ? (var_2) : (var_10)))))))));
                arr_27 [i_7] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_5] [i_5]) : ((-(var_4)))));
            }
            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_32 [(unsigned char)16] [(unsigned short)4] [i_8] [(_Bool)1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))));
                    arr_33 [4] [i_5] [i_9] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 511U))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) max((arr_18 [i_8] [i_5]), (((/* implicit */unsigned char) (_Bool)0))))) / (((/* implicit */int) var_8))))), (var_11)));
                    arr_38 [i_4] = max((arr_9 [i_4 + 1] [i_4] [i_4 - 2]), ((-(((/* implicit */int) (_Bool)1)))));
                    arr_39 [i_4] [(unsigned char)9] [i_4] [(signed char)6] [(short)14] [i_10] = ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned short)7)));
                }
                var_20 = ((int) (-(arr_20 [i_4 + 2] [i_8] [i_4 + 2] [i_8])));
            }
            /* vectorizable */
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-29302)) ^ (((/* implicit */int) arr_13 [i_4] [i_4]))));
                            arr_49 [i_13] [i_13] [(unsigned short)16] [i_5] [i_11] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_5 [1LL] [i_13]) : (535U)));
                            arr_50 [i_4] [i_5] [i_11] [i_11] [i_5] = ((/* implicit */unsigned short) var_9);
                            arr_51 [i_5] [i_5] [i_5] [(unsigned short)2] [3U] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_4 - 2]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4 - 2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11]))) : (var_10)));
                arr_52 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) var_0);
                arr_53 [i_4] [i_4] [i_4] [i_11] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (unsigned short)36153)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_4] [i_5] [i_11] [i_11]))))))));
            }
            arr_54 [i_4] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) != (max((((/* implicit */long long int) var_10)), (var_11))))));
        }
    }
    var_23 = ((/* implicit */int) (((+(var_3))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 1886000240078615218LL)))))));
}
