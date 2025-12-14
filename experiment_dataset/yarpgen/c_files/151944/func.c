/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151944
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
    var_15 ^= ((/* implicit */unsigned char) ((long long int) var_1));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1] [i_1])) & (((/* implicit */int) arr_4 [i_1]))));
        /* LoopSeq 2 */
        for (long long int i_2 = 4; i_2 < 20; i_2 += 3) 
        {
            arr_11 [i_1] = ((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_1]));
            arr_12 [i_2] [i_1] = (~(arr_0 [6]));
        }
        for (short i_3 = 4; i_3 < 17; i_3 += 2) 
        {
            arr_15 [i_1] [i_3] [i_3] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_5 [i_1] [i_1])))) >= (((/* implicit */int) arr_8 [i_1] [i_3 - 3] [i_3 - 1]))));
            /* LoopSeq 1 */
            for (int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                arr_19 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) / (-2147483639)));
                var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65517))));
            }
        }
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) ((short) arr_20 [i_5]));
        /* LoopSeq 2 */
        for (long long int i_6 = 2; i_6 < 20; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5]))) & (arr_0 [i_7]))))))));
                    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_29 [i_5] [i_6] [i_7] [i_8 + 1] [i_8 + 1])) : (((((/* implicit */int) arr_25 [i_5] [i_6] [i_8])) + (((/* implicit */int) arr_28 [i_5] [i_5] [19]))))));
                    var_22 *= ((/* implicit */short) arr_4 [i_5]);
                }
                var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_6 - 2])) ? (((/* implicit */int) ((signed char) arr_23 [i_5] [i_7]))) : (((/* implicit */int) arr_8 [i_6 - 2] [i_6 + 1] [i_6 - 1]))));
                arr_31 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_29 [(short)12] [i_6 + 1] [i_6] [i_7] [(_Bool)1])))));
                arr_32 [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7] [i_7] [(unsigned short)13] [i_5]))) >= (((((/* implicit */_Bool) arr_18 [i_6])) ? (arr_6 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7])))))));
                arr_33 [i_6] [i_6] = ((/* implicit */signed char) ((unsigned char) ((arr_24 [i_5] [i_6] [i_7]) << (((((/* implicit */int) arr_5 [i_5] [i_6])) - (136))))));
            }
            for (short i_9 = 4; i_9 < 18; i_9 += 4) 
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) arr_26 [(signed char)10] [(signed char)10] [i_9] [(signed char)10]))) / ((~(arr_10 [i_9 + 2])))));
                var_25 = ((/* implicit */short) ((unsigned char) ((signed char) arr_6 [i_9 - 1])));
                arr_36 [i_6] [i_9] [i_6 - 1] [i_6] = ((/* implicit */int) arr_26 [19] [i_6] [i_6 - 1] [i_6 - 1]);
            }
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_39 [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_2 [i_10] [i_6 + 1])) ? (arr_6 [i_10]) : (arr_6 [i_5]))));
                var_26 = ((/* implicit */signed char) arr_6 [i_5]);
                arr_40 [i_6] [i_6] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */long long int) arr_37 [i_10] [i_6] [i_10] [i_10])) >= (arr_26 [i_10] [i_10] [i_6] [i_5]))));
                arr_41 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (-(arr_35 [i_6] [i_5] [i_6 + 1] [i_6 - 2])));
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [i_6 + 1] [i_10] [i_6 - 2] [i_6 - 2])) ? (((/* implicit */int) arr_25 [i_6 - 1] [i_6 - 1] [i_6 - 2])) : (((/* implicit */int) arr_25 [i_6 - 1] [i_6 + 1] [i_6 - 2])))))));
            }
            arr_42 [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5]))) ^ (arr_17 [i_6 - 2] [i_6] [i_6] [i_5])));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_5]))));
            arr_45 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_29 [i_11] [i_5] [i_11] [i_5] [9]))) & (((arr_14 [i_5] [i_11]) / (((/* implicit */int) arr_23 [i_11] [(signed char)8]))))));
        }
    }
    var_29 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((int) var_3))))));
    var_30 -= ((/* implicit */unsigned short) var_13);
    var_31 = ((/* implicit */unsigned char) var_4);
}
