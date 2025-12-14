/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152431
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(arr_2 [i_0])));
        var_16 -= ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_1 [i_0]))));
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) & (arr_2 [i_0])));
        var_18 = var_9;
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) /* same iter space */
            {
                arr_14 [i_2] [i_2] [i_1] = ((((/* implicit */int) (short)31528)) <= (((/* implicit */int) (short)31533)));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned char) min((((/* implicit */signed char) var_0)), (min((((/* implicit */signed char) arr_6 [i_1])), (var_11)))))))));
            }
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_16 [i_4] [i_2] [i_1])) < (((/* implicit */int) (short)31531)))), ((((-(var_1))) > (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)29), (arr_10 [i_1] [i_2] [i_4] [i_4])))))))));
                var_21 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)31528))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202))))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)31528)) ^ (((/* implicit */int) (unsigned short)18239))));
            }
            var_23 = ((/* implicit */short) ((int) (((((~(((/* implicit */int) (unsigned short)65535)))) + (2147483647))) << (((((/* implicit */int) (unsigned char)254)) - (254))))));
        }
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) max((((((/* implicit */long long int) -633789754)) + (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) - (arr_7 [i_1]))))), (((/* implicit */long long int) (short)-31546))));
            var_25 -= ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1]))) - (((((/* implicit */_Bool) -633789736)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_5])))))));
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
        {
            arr_23 [i_1] [i_6] = ((/* implicit */unsigned char) var_3);
            var_26 -= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_22 [i_1] [i_6])) >= (((/* implicit */int) (short)31546))))) == ((~(((/* implicit */int) var_12))))))), (((((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (((/* implicit */int) var_13)) : (arr_2 [i_1]))) << (((((/* implicit */int) arr_15 [1] [i_1] [i_6] [i_6])) - (18164)))))));
            arr_24 [i_1] [i_6] [(_Bool)1] = ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_1]))) && (((/* implicit */_Bool) arr_12 [i_1] [0LL])));
        }
        /* vectorizable */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_8] [i_7])) && (((/* implicit */_Bool) ((int) arr_27 [i_1] [i_1] [i_8] [i_8])))));
                arr_29 [i_1] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_1] [i_7])) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)-31528)))))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    var_28 = ((/* implicit */_Bool) ((signed char) ((arr_2 [i_8]) - (((/* implicit */int) (unsigned short)45963)))));
                    var_29 = ((/* implicit */int) ((short) ((((-633789736) + (2147483647))) >> (((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 3 */
                    for (unsigned char i_10 = 1; i_10 < 8; i_10 += 2) 
                    {
                        arr_34 [i_1] [i_7] [8LL] [i_9] [i_10 + 2] [(_Bool)1] = ((/* implicit */unsigned char) (unsigned short)65535);
                        var_30 = ((/* implicit */unsigned short) ((unsigned int) ((var_0) && (((/* implicit */_Bool) arr_16 [i_1] [i_9] [i_10])))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_15 [i_1] [i_7] [i_7] [i_11])))))));
                        arr_39 [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        var_32 = ((/* implicit */int) -1970506604404303681LL);
                    }
                    for (unsigned char i_12 = 1; i_12 < 7; i_12 += 2) 
                    {
                        arr_43 [i_12] [i_1] [i_12] [i_9] [i_1] [i_12] [i_1] = ((/* implicit */unsigned short) (((((_Bool)0) ? (arr_28 [i_1] [i_7] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [(unsigned char)10]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -633789736))))));
                        arr_44 [i_1] [i_1] [i_12] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(unsigned char)9] [i_8])) * (((/* implicit */int) (short)31544))));
                        arr_45 [i_1] [(unsigned char)0] [i_8] [i_9] [i_12 + 4] [i_12] = ((/* implicit */_Bool) ((unsigned short) ((signed char) (unsigned short)59299)));
                    }
                }
                for (int i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    var_33 = ((/* implicit */unsigned int) ((short) arr_33 [i_1] [i_7] [i_8] [i_13] [i_7]));
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) arr_8 [i_1] [i_7]);
                        arr_52 [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_1])) << (((/* implicit */int) ((unsigned char) (unsigned char)11)))));
                    }
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                    {
                        arr_55 [i_13] [i_8] [i_7] [2] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_13])) * (((/* implicit */int) arr_5 [i_7] [i_13]))));
                        var_35 = ((/* implicit */int) ((unsigned int) arr_31 [i_7]));
                        var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [5U] [i_7] [i_8])) ? (((/* implicit */int) (short)13635)) : (((/* implicit */int) arr_46 [i_1] [i_1])))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)233)) ^ (((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_60 [i_1] [i_1] [i_1] [i_8] [i_8] [i_13] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_47 [i_1] [i_7] [i_7] [i_13]))));
                    }
                    var_38 = ((/* implicit */unsigned short) (signed char)-43);
                }
            }
            for (int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                arr_64 [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_58 [i_1] [i_7] [i_17] [i_7] [i_17] [i_1] [i_7])) * (((/* implicit */int) arr_62 [i_1] [i_7] [i_17] [i_17]))));
                var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((-592491314) & (((/* implicit */int) arr_22 [i_1] [i_7])))))));
            }
            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) (short)10513)) ? (-268435456) : (-1623893527))))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
        {
            arr_69 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [(unsigned short)7] [(unsigned short)7] [i_18]))) / (2143289344ULL))) * (((unsigned long long int) var_12))))) ? (((/* implicit */int) ((short) arr_22 [i_18] [i_1]))) : (((/* implicit */int) ((((/* implicit */int) arr_62 [i_1] [i_1] [i_18] [i_18])) == (((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_18] [i_18] [i_1] [i_1])))))));
            arr_70 [i_1] [i_18] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (max((arr_68 [i_18] [(unsigned short)0] [i_18]), (arr_10 [i_1] [3U] [i_1] [i_18])))))) & (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) > (arr_9 [i_1] [i_1] [i_1]))) ? (((/* implicit */int) (unsigned char)173)) : (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
        }
        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) /* same iter space */
        {
            arr_73 [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) 765198826)) ? (((/* implicit */int) min((arr_12 [i_1] [i_19]), (min((var_13), (((/* implicit */unsigned char) var_11))))))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (((((/* implicit */int) (short)-10069)) % (219592001)))))));
            var_41 = ((/* implicit */int) (~(max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (6113149153127493131LL))), (((/* implicit */long long int) max((((/* implicit */short) arr_0 [i_19])), ((short)-12660))))))));
            arr_74 [i_1] [i_1] [(short)7] = ((/* implicit */unsigned short) min((((int) arr_15 [i_1] [i_1] [i_1] [i_1])), (((/* implicit */int) ((short) max((var_10), (((/* implicit */long long int) var_13))))))));
            var_42 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) max(((short)20306), ((short)22626)))))), (((/* implicit */int) var_8))));
        }
    }
    var_43 = ((/* implicit */int) max((2724248682U), (((/* implicit */unsigned int) 1623893520))));
    var_44 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) 4503599627370495LL)) ? (((/* implicit */long long int) -1)) : (var_10))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_0))))))) >> (((((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_7)))) % ((+(1119230089))))) - (118)))));
}
