/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158668
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) arr_9 [i_0] [(unsigned short)4]);
                            var_15 = ((/* implicit */unsigned short) 4694182532386509037ULL);
                            var_16 += ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_7 [i_0] [i_0 - 2] [i_1] [i_3 + 3])), (-1070447658236116320LL))) == (((/* implicit */long long int) ((/* implicit */int) ((var_8) >= (((((/* implicit */_Bool) 650189932)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_1]))))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) ((max((var_2), (((/* implicit */unsigned int) var_12)))) != (((/* implicit */unsigned int) arr_6 [i_1]))));
                arr_11 [i_0] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0]))) & (var_6)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_18 += ((/* implicit */signed char) (_Bool)0);
                    arr_20 [i_4] = ((/* implicit */long long int) ((var_5) << (((((((/* implicit */_Bool) -1070447658236116320LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (1070447658236116320LL))) - (112LL)))));
                }
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)16)) + (((/* implicit */int) var_11))));
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_1)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) arr_13 [i_4] [i_4]);
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) ^ (var_6))))));
                        arr_27 [i_4] [i_5] [i_5] [i_8] [i_8] [i_5] = ((/* implicit */unsigned short) ((9025798630459555580LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48198)))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_10 = 1; i_10 < 11; i_10 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_5] [i_7] [3LL])) ? (((/* implicit */int) (unsigned short)34123)) : (((/* implicit */int) var_12))));
                            arr_34 [i_4] [i_4] [i_7] [i_7] = (unsigned short)25002;
                            arr_35 [i_4] = ((/* implicit */unsigned short) arr_21 [i_4] [i_5]);
                            arr_36 [i_4] [11ULL] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) << (((var_9) - (1494895047369356936ULL)))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
                            arr_39 [i_4] [i_4] [i_7] [i_7] [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) var_10);
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((var_7) >= (((/* implicit */long long int) 1526879974)))))));
                            var_26 = 8737800525623208252LL;
                        }
                        var_27 = ((long long int) var_6);
                    }
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_43 [i_4] [i_5] [4ULL] [i_4] = 9025798630459555580LL;
                        arr_44 [i_5] [i_4] = ((/* implicit */long long int) (unsigned char)150);
                    }
                }
                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) ((0LL) == (((/* implicit */long long int) ((/* implicit */int) var_12))))))) : ((-(var_10)))))) : (arr_2 [i_4])));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        var_29 = ((/* implicit */unsigned short) var_6);
        var_30 = ((/* implicit */unsigned short) var_6);
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((unsigned short) -1LL)))));
        var_32 = ((/* implicit */long long int) ((_Bool) arr_10 [i_13] [i_13] [12] [i_13] [(_Bool)1]));
        var_33 = ((/* implicit */unsigned long long int) ((var_9) == ((-(var_6)))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_49 [6ULL] &= ((/* implicit */int) var_12);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_14] [i_14])) - (((/* implicit */int) (unsigned short)62244))))) ? (((/* implicit */int) arr_8 [i_14] [i_15] [i_15] [i_14])) : (1028305547)));
            arr_53 [i_14] = ((/* implicit */unsigned short) (+(((var_12) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))));
            arr_54 [i_14] [i_14] = ((/* implicit */unsigned long long int) (_Bool)0);
        }
        for (int i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
        {
            arr_58 [i_14] = ((long long int) ((unsigned short) ((((/* implicit */_Bool) 926004521720754497LL)) ? (var_9) : (((/* implicit */unsigned long long int) -1LL)))));
            var_35 = ((/* implicit */_Bool) var_1);
            var_36 += ((/* implicit */unsigned long long int) -1070447658236116320LL);
        }
    }
    /* vectorizable */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
    {
        var_37 *= ((/* implicit */unsigned char) var_6);
        var_38 = ((/* implicit */unsigned short) var_12);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) 
        {
            arr_67 [i_18] = ((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)45096))))));
            var_39 -= ((/* implicit */long long int) var_13);
        }
        var_40 = ((/* implicit */int) ((((/* implicit */int) (!((_Bool)0)))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) >= (var_5))))));
    }
}
