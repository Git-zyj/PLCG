/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176212
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) (unsigned char)109)));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
        var_13 = ((/* implicit */signed char) (-(((long long int) var_2))));
    }
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1 + 2] [i_1] = ((/* implicit */unsigned short) var_7);
        arr_8 [(short)2] = ((/* implicit */int) arr_6 [(signed char)15]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
        {
            var_14 *= ((/* implicit */unsigned long long int) ((3907034483U) >> (((((/* implicit */int) (unsigned short)32809)) - (32807)))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_4 [(unsigned char)14])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned short)32832))));
        }
        for (int i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) var_6);
            arr_16 [i_2] [i_2] [i_4] = ((/* implicit */short) ((arr_15 [i_2] [i_4 + 2] [i_4]) ^ (((/* implicit */long long int) var_4))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 11; i_6 += 2) 
                {
                    for (signed char i_7 = 3; i_7 < 10; i_7 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) arr_5 [i_2]);
                            arr_23 [i_2] [i_4] [(short)6] [(_Bool)0] [i_6] [i_5] [i_7] |= arr_22 [(_Bool)1] [i_4 + 1] [i_4] [(signed char)7] [i_4] [(_Bool)1] [i_4];
                            var_18 -= ((/* implicit */unsigned char) ((1561929433) % (((/* implicit */int) (unsigned char)86))));
                            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) arr_9 [i_2] [i_4 + 2])) ^ (((/* implicit */int) arr_9 [i_2] [i_4 + 3])))))));
                            arr_24 [i_6] [i_6 + 1] [i_5] [i_4] [i_6] = ((/* implicit */long long int) ((unsigned short) arr_10 [i_4 - 1]));
                        }
                    } 
                } 
            } 
        }
        for (int i_8 = 1; i_8 < 9; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
            {
                var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) var_5)) : (arr_15 [i_9] [i_8] [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_0 [i_9]))))) : (((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) arr_29 [(unsigned short)6] [i_8] [0U] [(unsigned char)1]))))));
                var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (387932812U)))));
            }
            for (signed char i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
            {
                var_22 |= ((/* implicit */unsigned short) arr_25 [i_2] [i_10]);
                arr_32 [(unsigned short)5] [i_10] [(unsigned char)4] [(unsigned short)5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13)) ? ((-(1098693974839601528LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8 + 3] [i_8 + 2] [i_8 - 1] [i_8 + 3] [i_10])))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) -4647585622017576953LL)) ? (var_5) : (((/* implicit */int) var_8)))) / (-1561929412))))));
            }
            for (signed char i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
            {
                var_24 = var_6;
                var_25 = ((/* implicit */long long int) (short)27803);
                arr_35 [i_11] [i_11] [i_8] [i_2] = ((/* implicit */int) (~(3754011896U)));
                arr_36 [i_11] [(unsigned short)5] [i_8 + 2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_2]))));
            }
            arr_37 [i_2] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_9))))) | (((/* implicit */int) ((((/* implicit */_Bool) -1098693974839601525LL)) && (((/* implicit */_Bool) arr_33 [i_8] [i_8 - 1] [i_2])))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_12 = 3; i_12 < 11; i_12 += 3) 
        {
            for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                for (short i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    {
                        var_26 += ((/* implicit */_Bool) (unsigned short)42750);
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))));
                        arr_45 [i_2] [i_12 - 1] [i_12 - 2] [5LL] [i_13] |= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (unsigned char)248))));
}
