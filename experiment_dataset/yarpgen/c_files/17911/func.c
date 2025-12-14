/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17911
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
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_9))));
    var_18 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) 6741591029528497954ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_14))))) <= (((/* implicit */long long int) var_13))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 |= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [14ULL])) != (((/* implicit */int) ((short) arr_0 [(_Bool)1] [i_1])))));
                    var_20 = ((/* implicit */signed char) arr_0 [i_0] [i_2]);
                    var_21 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1785303193976252529ULL)) || (((/* implicit */_Bool) var_12)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (short i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    arr_11 [i_0] [i_0 + 2] [(unsigned short)16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
                    var_22 = arr_0 [(unsigned short)7] [(unsigned short)7];
                    arr_12 [i_3] = ((/* implicit */signed char) arr_8 [(unsigned char)17] [i_3] [i_3] [i_4]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_15 [8ULL] [8ULL] &= ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_3 [(_Bool)0] [i_0] [i_0])) / (((/* implicit */int) (unsigned short)56643)))));
            var_23 = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) var_7)))));
        }
        for (short i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
        {
            arr_20 [i_0] [(unsigned short)9] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_4 [i_6] [i_0] [i_0 + 1] [i_0 + 1])))) * (((/* implicit */int) (_Bool)1))));
            var_24 -= ((/* implicit */unsigned short) (~(((long long int) arr_18 [i_0] [i_0] [i_6]))));
            arr_21 [i_0] [(short)14] = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((signed char) arr_8 [(short)16] [(short)16] [i_0] [i_6]))));
            /* LoopNest 3 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 1; i_8 < 16; i_8 += 2) 
                {
                    for (unsigned char i_9 = 2; i_9 < 17; i_9 += 2) 
                    {
                        {
                            arr_33 [i_7] = ((/* implicit */unsigned long long int) var_4);
                            var_25 = ((/* implicit */short) (((~(((/* implicit */int) arr_6 [i_6] [i_6] [i_7])))) <= (((/* implicit */int) (short)-17840))));
                        }
                    } 
                } 
            } 
        }
        for (short i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
        {
            arr_37 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-17824)) : (((/* implicit */int) (short)17826)))) * ((-(((/* implicit */int) var_2))))));
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (_Bool)1))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_26 [i_0]))) ? ((((_Bool)1) ? (var_6) : (((/* implicit */int) (short)17839)))) : (((/* implicit */int) arr_5 [i_0] [i_0 - 4]))));
        }
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    {
                        arr_48 [i_0] [i_0] [i_12] [i_13] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (var_6)));
                        arr_49 [i_13] [(_Bool)1] [(short)11] [i_12] [(short)11] [(short)11] = ((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) ((_Bool) arr_13 [i_0 - 2] [i_11] [i_0])))));
                        var_28 = ((/* implicit */unsigned char) (~(arr_7 [4] [17] [4])));
                    }
                } 
            } 
        } 
        var_29 -= ((/* implicit */_Bool) var_16);
    }
    var_30 = ((/* implicit */unsigned short) (+(((((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (var_15))) + (2147483647))) << (((((var_14) - (((/* implicit */long long int) var_10)))) - (7153193178788072968LL)))))));
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_14) + (((/* implicit */long long int) ((3722265572U) * (((/* implicit */unsigned int) var_13)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 852023120)) ? (((var_13) >> (((var_15) + (1679805231))))) : (((/* implicit */int) ((unsigned short) var_1)))))) : (((var_9) >> (((/* implicit */int) ((short) var_7)))))));
}
