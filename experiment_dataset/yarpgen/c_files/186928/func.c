/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186928
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
    var_10 = ((/* implicit */unsigned int) var_7);
    var_11 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((-1444430443) + (2147483647))) >> (((4294967289U) - (4294967274U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)28120))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)8262))))))));
    var_12 = ((/* implicit */unsigned char) ((unsigned int) var_0));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))))) || (((/* implicit */_Bool) (((-(arr_0 [i_0] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
        {
            var_13 -= ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (1309089047)))) * (((((/* implicit */int) (short)-26917)) * (((/* implicit */int) var_5))))))));
            var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-28121))))) ? (((((/* implicit */_Bool) (short)26917)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((-1309089073) | (((/* implicit */int) var_1)))))) != ((~(((/* implicit */int) (unsigned short)1920))))));
        }
        for (int i_2 = 0; i_2 < 14; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_15 ^= ((/* implicit */unsigned int) var_9);
                        var_16 ^= var_7;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_7 = 3; i_7 < 13; i_7 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) (short)8262)) | (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (short)26917)) : (-1309089073))))))));
                            arr_20 [i_5] [i_6] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) var_7);
                        }
                        /* vectorizable */
                        for (short i_8 = 2; i_8 < 13; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(-1309089039))))));
                            arr_23 [i_2] [i_2] [i_5] [i_6] = var_3;
                            arr_24 [i_0] [i_2] [i_5] [i_2] [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(449400315U))))));
                            arr_25 [i_2] [i_8 - 1] = ((/* implicit */unsigned char) 35046933135360ULL);
                        }
                        var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)63616)))) ? ((~(((/* implicit */int) (short)-28120)))) : (((/* implicit */int) ((unsigned short) arr_4 [i_0])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) >> (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0])) - (132))))))));
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    arr_33 [i_0] [i_2] = ((/* implicit */int) var_4);
                    var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)32)) : (((/* implicit */int) var_9))))) ? (arr_21 [i_9 + 1] [(unsigned short)11] [i_9] [i_9 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28105)) ^ (((/* implicit */int) var_5)))))))) ? (((((((/* implicit */int) (short)16401)) | (((/* implicit */int) (unsigned char)132)))) * (((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
            }
        }
        for (int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
        {
            var_22 |= ((/* implicit */unsigned char) 402653184U);
            arr_37 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -937241155)), ((+(arr_21 [(unsigned char)2] [(unsigned char)2] [i_0] [i_0])))));
            var_23 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : ((~(min((1290538580U), (((/* implicit */unsigned int) -429447207))))))));
        }
        for (int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
        {
            var_24 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) ? (15900058402054333159ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (var_0)))))));
            var_25 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)20))))));
        }
        var_26 = ((/* implicit */short) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) (short)-16402))))));
    }
    for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
    {
        var_27 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (((12584866530885469007ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
        /* LoopNest 2 */
        for (signed char i_14 = 1; i_14 < 9; i_14 += 1) 
        {
            for (long long int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (+(min((((((/* implicit */_Bool) 3394161180U)) ? (arr_3 [i_15] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) arr_22 [i_15])))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        var_29 |= ((((/* implicit */int) var_4)) * (((((/* implicit */int) arr_18 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1])) | (((/* implicit */int) arr_18 [i_14 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1])))));
                        var_30 = min(((+(arr_22 [i_14 - 1]))), (arr_22 [i_14 + 1]));
                        var_31 *= ((/* implicit */unsigned int) var_2);
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)119)), ((unsigned short)65535))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 1; i_17 < 6; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */_Bool) (short)28105);
                                var_34 = ((/* implicit */signed char) ((unsigned int) arr_39 [i_14]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_13] [i_13])) & (0))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) 1309089039)) >= (arr_41 [i_13]))))));
        var_36 *= ((/* implicit */_Bool) (~(max((arr_5 [i_13] [i_13]), (((/* implicit */int) var_6))))));
    }
}
