/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116452
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
    for (short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] [(signed char)14] = ((short) (+(((/* implicit */int) (short)-29115))));
        var_20 = arr_0 [i_0] [i_0];
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 24; i_2 += 4) /* same iter space */
        {
            arr_9 [i_1] [i_1 - 1] = ((/* implicit */int) (+(arr_4 [i_2 - 1])));
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65520))) : (arr_5 [i_2 - 1])));
            var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_1] [i_1])) ? (arr_4 [i_2]) : (-6926012297731849797LL))) >> (((var_14) - (11563419897044207620ULL)))));
            var_23 -= ((/* implicit */unsigned char) arr_3 [i_1]);
            arr_10 [i_2] = ((/* implicit */short) (-(arr_5 [i_1 - 1])));
        }
        for (int i_3 = 3; i_3 < 24; i_3 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        arr_21 [i_1 - 1] [i_3] [i_4 - 1] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) (short)0))));
                        arr_22 [i_5] [i_3] [i_3] [i_1 - 1] = ((/* implicit */signed char) var_15);
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_10))));
                        /* LoopSeq 4 */
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            arr_26 [i_1] [i_3 + 1] [i_3] [i_4 + 3] [i_4 + 1] [i_5] [i_6] = ((/* implicit */signed char) var_15);
                            var_25 = ((/* implicit */unsigned short) (-(arr_18 [i_1 - 1] [i_3 - 3] [i_1 - 1] [i_4 - 1])));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */short) (unsigned char)0);
                            var_27 = ((/* implicit */short) (-(arr_4 [i_1])));
                            arr_30 [i_5] [i_3 + 1] [i_5] [i_3] [i_7] [i_7] = ((/* implicit */unsigned short) arr_14 [i_3] [i_3 - 3]);
                            arr_31 [i_7] [i_5] [i_4] [i_3] [i_7] = arr_12 [i_3];
                        }
                        for (short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) arr_24 [i_1] [i_3] [i_3] [i_3 + 1]);
                            arr_36 [i_1] [i_3] [i_4 + 3] [i_3] [i_1] = ((/* implicit */unsigned char) var_15);
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 24; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_4 + 3] [i_1 - 1])) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4 - 1] [i_1 - 1])))));
                            arr_39 [14] [14] [14] [i_3] [i_9 - 1] = ((/* implicit */unsigned long long int) arr_7 [i_3]);
                            arr_40 [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_3] [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3 - 1])) ? (arr_25 [(short)14] [i_3 - 2] [i_3 - 3] [i_3 + 1] [i_3 - 2]) : (arr_25 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 3])));
                            var_30 ^= ((/* implicit */unsigned long long int) ((-2) >= (((/* implicit */int) (unsigned char)255))));
                        }
                        var_31 = ((/* implicit */int) var_4);
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_12 [i_3]))))));
            var_33 = 0LL;
        }
        arr_41 [i_1] = ((/* implicit */_Bool) arr_15 [(short)0] [(short)0] [i_1 - 1] [i_1]);
        var_34 = ((/* implicit */long long int) (unsigned char)255);
        var_35 *= ((/* implicit */unsigned char) var_4);
        var_36 = arr_37 [i_1] [i_1] [8] [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1];
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */short) arr_37 [i_10] [i_10] [16ULL] [i_10] [i_10] [i_10 - 1] [i_10 - 1]);
        arr_44 [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_10] [i_10])) ? (((/* implicit */int) arr_24 [i_10 - 1] [(short)16] [i_10] [i_10])) : (((/* implicit */int) var_17)))))));
        var_38 = ((/* implicit */short) ((min((arr_34 [i_10] [i_10 - 1] [(short)10] [i_10] [i_10 - 1]), (arr_34 [(unsigned short)4] [i_10 - 1] [16ULL] [6ULL] [i_10]))) == (((((/* implicit */int) arr_24 [i_10 - 1] [(short)0] [(short)0] [i_10 - 1])) + (((/* implicit */int) arr_24 [i_10 - 1] [(signed char)18] [(signed char)18] [i_10 - 1]))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_33 [(unsigned char)12] [i_11] [i_11] [i_11] [i_11] [i_11])))) ? ((-(((((/* implicit */_Bool) arr_7 [i_11])) ? (((/* implicit */int) arr_45 [i_11] [i_11])) : (((/* implicit */int) arr_3 [i_11])))))) : (((((/* implicit */_Bool) arr_11 [i_11] [i_11] [i_11])) ? (((/* implicit */int) (signed char)1)) : (min((((/* implicit */int) (_Bool)0)), (var_15)))))));
        arr_47 [i_11] [i_11] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (short)20076)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_11] [i_11] [i_11])) || (((/* implicit */_Bool) arr_8 [i_11] [i_11] [i_11])))))));
        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (-(arr_0 [i_11] [i_11]))))) ? (var_15) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_11])) <= (((/* implicit */int) var_12)))))));
        var_41 = (~(((/* implicit */int) ((arr_5 [i_11]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) arr_16 [i_11] [i_11]))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned short)24])))))) >> (((((/* implicit */int) arr_48 [i_12])) - (9086)))));
        var_44 |= ((/* implicit */signed char) ((((/* implicit */int) arr_16 [i_12] [i_12])) >> ((((+(arr_51 [i_12] [i_12]))) + (149386465)))));
        var_45 = ((/* implicit */short) max((var_45), (arr_48 [i_12])));
        arr_52 [i_12] = ((/* implicit */unsigned int) arr_43 [i_12]);
    }
    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
    {
        var_46 = ((/* implicit */short) max((max((1452699814U), (1452699814U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_6 [i_13])))))));
        arr_57 [i_13] [i_13] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)11))));
    }
    var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) var_0))));
}
