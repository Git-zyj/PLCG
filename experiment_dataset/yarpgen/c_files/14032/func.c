/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14032
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
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) max(((unsigned short)0), ((unsigned short)65535))))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29193))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)58651))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [(unsigned char)19] [i_0] = ((/* implicit */short) (-(6U)));
        var_13 = ((/* implicit */short) arr_0 [i_0]);
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        arr_11 [i_3] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (((/* implicit */int) min(((unsigned short)22), (((/* implicit */unsigned short) (short)16256))))) : (((int) (_Bool)1))))));
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1] [i_1 + 2])) : (((/* implicit */int) arr_7 [20LL] [i_1] [i_2])))), (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), (arr_6 [i_1 - 1] [i_1 + 2])))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_19 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_0] [(unsigned short)1] [i_5])) && (((/* implicit */_Bool) arr_15 [i_5] [i_0] [i_0]))));
                var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)233)) == (((/* implicit */int) arr_6 [i_0] [(unsigned char)14])))))));
                var_17 = ((/* implicit */short) 3648187129U);
                /* LoopNest 2 */
                for (unsigned short i_6 = 2; i_6 < 21; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65534)) & (((/* implicit */int) (unsigned short)19))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65516)) << (((244399422) - (244399414)))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_7] [17LL]))) / (9223372036854775807LL)))));
                            var_19 = ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */long long int) 4294967295U)) : (-748776826030499586LL))) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65534)) ^ (((/* implicit */int) (unsigned short)2)))))));
                            arr_25 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 2554648235U))) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)-29651)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65535)) - (65509))))))));
                        }
                    } 
                } 
            }
            for (int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 21; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        {
                            arr_33 [(signed char)0] [i_10] [i_0] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_9 [(unsigned char)8] [i_4] [i_8] [i_4] [i_0])))) ? (((/* implicit */int) arr_0 [i_4])) : (((((/* implicit */_Bool) arr_17 [i_0] [15U] [i_0] [i_0])) ? (244399445) : (((/* implicit */int) (unsigned short)65521))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967281U)) ? (-1) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -244399431)))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_4] [i_0] [i_9 + 1] [16U])) ? (arr_9 [i_0] [(unsigned short)0] [i_8] [i_9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_13 [i_0] [i_4] [17ULL])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_29 [(unsigned char)2])) % (arr_30 [i_0] [i_4] [21] [21])))) : (((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0]))) : (15245467335271184615ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) ((signed char) 3763642653U))) > (((((/* implicit */_Bool) arr_31 [i_0] [i_4] [i_8] [i_8] [i_11] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)240)) : (-244399446))))))));
                            var_23 = ((/* implicit */unsigned short) arr_14 [i_0]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) arr_28 [i_0] [0U] [(unsigned short)19] [i_4] [i_4] [(_Bool)1]);
                var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -244399423)) ? (0) : (((/* implicit */int) (unsigned short)65535))));
            }
            arr_39 [i_0] [i_4] = ((/* implicit */unsigned char) (unsigned short)54144);
            var_26 &= ((/* implicit */unsigned int) arr_4 [i_4] [i_0] [i_0]);
            var_27 = ((/* implicit */short) (_Bool)1);
        }
    }
}
