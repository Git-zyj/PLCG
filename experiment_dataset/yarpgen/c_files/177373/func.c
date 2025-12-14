/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177373
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (var_4)));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) ((min(((+(arr_0 [i_0]))), (((((/* implicit */_Bool) 6052723036330069890ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 6052723036330069869ULL))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((min((8504341756717762188ULL), (68719476732ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)101))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_12)))))))) & (((unsigned long long int) arr_1 [i_0]))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_4 [i_1] [8] = min((9942402316991789428ULL), (((/* implicit */unsigned long long int) min((arr_2 [i_1] [(short)4]), (var_11)))));
        var_17 = (~(((int) arr_3 [i_1])));
        var_18 *= ((int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) (short)31823))));
        var_19 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-31779)) + (((/* implicit */int) (short)7684))))), (((unsigned long long int) (short)8775)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
    {
        var_20 = ((/* implicit */short) ((unsigned long long int) var_12));
        var_21 = ((unsigned long long int) arr_7 [i_2 + 1] [i_2 - 1]);
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_3])) ? (4095) : (arr_5 [i_2 - 1])));
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        {
                            arr_17 [i_2] [i_2] [i_6] [i_2] = (-(((/* implicit */int) ((short) arr_14 [(short)11] [i_6] [i_6] [i_5]))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (9589275083652194244ULL)));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) arr_11 [(unsigned char)17] [i_2 - 1] [i_7]);
            var_24 = ((/* implicit */short) arr_9 [i_2] [i_2 - 1] [(short)7]);
            /* LoopNest 3 */
            for (short i_8 = 1; i_8 < 21; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned long long int) arr_16 [17ULL] [9ULL] [i_2] [(unsigned char)9] [i_2 - 1]);
                            arr_27 [i_2] [i_2] [i_2] [i_7] [i_2] [i_2] = ((/* implicit */short) var_7);
                        }
                    } 
                } 
            } 
        }
        for (short i_11 = 2; i_11 < 22; i_11 += 1) 
        {
            var_26 = ((unsigned long long int) -2147483641);
            /* LoopSeq 1 */
            for (short i_12 = 1; i_12 < 23; i_12 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    var_27 = ((short) arr_7 [i_11 - 2] [i_2 + 1]);
                    var_28 &= 5003386367104452448ULL;
                    /* LoopSeq 2 */
                    for (short i_14 = 1; i_14 < 23; i_14 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_14 + 1] [i_11] [i_11] [i_2 - 1])) ? (arr_32 [i_14 + 1] [i_11] [i_11] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_2 - 1])))));
                        arr_39 [i_11] [i_13] [i_14 - 1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_15 [i_12 - 1]));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_11 - 2] [(short)21] [i_11 - 2])) > (((/* implicit */int) ((short) arr_20 [i_12] [i_13] [i_11])))));
                        var_31 = ((/* implicit */unsigned long long int) ((arr_36 [i_2] [i_11 - 2] [(unsigned char)13] [i_12 - 1] [i_14] [i_12 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_2 - 1] [i_11] [i_12 - 1] [0ULL])))));
                        var_32 = ((/* implicit */short) arr_12 [4] [(short)19] [i_12] [i_12]);
                    }
                    for (short i_15 = 1; i_15 < 23; i_15 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((int) 0ULL)))));
                        var_34 |= ((/* implicit */int) ((short) arr_22 [i_2 + 1] [i_2 - 1] [i_12 + 1] [4]));
                    }
                    var_35 += ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_5 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (18446744073709551611ULL))));
                }
                for (short i_16 = 0; i_16 < 24; i_16 += 2) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2 + 1] [i_11 - 1] [i_12 + 1] [8ULL])) ? (((/* implicit */int) arr_13 [12] [i_2 - 1] [i_11 - 1] [i_12 - 1] [i_16])) : (((/* implicit */int) (short)19546))));
                    /* LoopSeq 1 */
                    for (short i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        arr_46 [i_11] [i_11] [(short)14] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_11] [(unsigned char)1] [i_11])) || (((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_2])))));
                        var_37 = ((/* implicit */short) ((17249013210650183383ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2 - 1])))));
                        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_30 [(unsigned char)20] [i_16] [i_16] [(unsigned char)8]))));
                        var_39 = ((((/* implicit */_Bool) -2111633384)) ? (((/* implicit */unsigned long long int) arr_44 [i_2 + 1] [i_12 + 1] [i_11 - 1])) : ((-(arr_8 [i_11] [i_17]))));
                        var_40 = ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) (-(1746387087)))) : (((((/* implicit */_Bool) var_1)) ? (arr_21 [i_16] [(short)23]) : (arr_20 [i_11] [i_11] [i_11]))));
                    }
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)90)) && (((((/* implicit */_Bool) -104342047)) && (((/* implicit */_Bool) (short)-15080)))))))));
                }
                for (int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    var_42 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_2] [i_11] [i_12] [5ULL] [i_11 - 2])) ? (((/* implicit */int) arr_37 [i_2] [i_11] [i_12 - 1] [i_2] [i_18])) : (((/* implicit */int) arr_37 [i_18] [i_11] [i_12 + 1] [(short)21] [i_11 + 1]))));
                    var_43 = ((((/* implicit */_Bool) 12611187969656856107ULL)) ? (((((/* implicit */_Bool) arr_47 [i_11])) ? (arr_32 [i_2] [i_11] [i_11] [(short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 + 1] [i_2 - 1] [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_11] [i_11])))));
                }
                var_44 = ((short) arr_29 [i_2 - 1]);
                arr_49 [i_2] [i_2] [i_11] = ((((/* implicit */_Bool) (short)11587)) ? (arr_23 [i_2 + 1] [15ULL] [i_11] [i_11 - 2]) : (arr_23 [21] [0ULL] [i_11] [i_11 - 1]));
            }
        }
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 24; i_19 += 1) 
        {
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 23; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    {
                        var_45 = ((/* implicit */unsigned char) arr_29 [i_2 - 1]);
                        var_46 = ((/* implicit */short) 7460528626373211704ULL);
                    }
                } 
            } 
            var_47 = ((/* implicit */int) arr_53 [i_2 + 1] [i_19] [i_2 + 1]);
            var_48 -= ((/* implicit */short) (unsigned char)249);
        }
        var_49 = ((((/* implicit */_Bool) (-(18066756131850321322ULL)))) ? (arr_32 [i_2] [i_2 + 1] [2ULL] [i_2 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -95051256)))));
    }
    for (short i_22 = 1; i_22 < 9; i_22 += 3) 
    {
        var_50 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_22 - 1] [i_22 + 1] [i_22 - 1] [i_22] [i_22]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17821))) ^ (var_1))))) : (arr_20 [20ULL] [20ULL] [(short)2])));
        var_51 = ((/* implicit */unsigned long long int) max(((short)-20001), (((/* implicit */short) (unsigned char)120))));
    }
}
