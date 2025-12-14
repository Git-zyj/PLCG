/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114483
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
    var_11 = ((/* implicit */unsigned short) 18446744073709551615ULL);
    var_12 = ((/* implicit */short) (unsigned char)87);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)169))) > (1665533842730304086ULL))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2]))));
                            var_14 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46420))))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) ((unsigned char) (unsigned char)117))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) (short)10693)) : (((/* implicit */int) var_9))))));
            var_16 += ((/* implicit */int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */int) arr_0 [i_0 + 1]))));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)13)) : (arr_8 [i_0 - 1] [i_1] [i_1] [i_0 - 2])));
        }
        var_18 |= ((/* implicit */int) ((unsigned short) var_3));
    }
    for (int i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
    {
        var_19 = var_8;
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((arr_2 [i_5]) + (((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) var_3)))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) < (arr_11 [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])));
        }
        /* vectorizable */
        for (unsigned short i_7 = 3; i_7 < 19; i_7 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1340645025999406096ULL)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_3 [i_5] [i_7])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_20 [i_5]))))));
            arr_21 [i_5] [i_5] = arr_19 [i_5] [i_5];
            var_23 = ((/* implicit */unsigned char) arr_2 [i_5 + 2]);
        }
        /* vectorizable */
        for (unsigned short i_8 = 3; i_8 < 19; i_8 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_24 = (short)-27889;
                            var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_24 [i_5] [i_8 + 1] [i_5 + 1]) : (arr_24 [i_5] [i_8 + 1] [i_5 + 1])));
                            arr_31 [i_5] [i_8 + 1] [i_8 + 1] [i_10] [i_8 + 1] = ((/* implicit */unsigned short) ((unsigned char) 16600346189689129993ULL));
                            arr_32 [i_5] [i_5] [i_10] = (short)-16532;
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (int i_12 = 3; i_12 < 18; i_12 += 4) 
            {
                var_26 = ((/* implicit */unsigned short) (+(arr_23 [i_8 + 1])));
                var_27 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5])) ? (arr_24 [i_5] [i_5] [i_12 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_22 [i_8] [i_8 - 2] [i_8 - 2])) : ((-(((/* implicit */int) arr_16 [i_12] [i_8] [i_5])))));
                var_28 = ((/* implicit */unsigned char) (+(2147483641)));
            }
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 1; i_15 < 16; i_15 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) (~((-(-773269415)))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_36 [i_5] [i_5] [i_13] [i_13]))))) ? (((/* implicit */int) arr_36 [i_8] [i_8] [i_13] [i_8 - 3])) : (((((/* implicit */int) var_4)) * (((/* implicit */int) var_0))))));
                    }
                    for (int i_16 = 1; i_16 < 18; i_16 += 3) 
                    {
                        var_31 = ((/* implicit */int) (+((~(arr_25 [i_13] [i_5] [i_5])))));
                        var_32 = ((/* implicit */unsigned long long int) var_1);
                        var_33 = ((/* implicit */short) arr_43 [i_13]);
                    }
                    var_34 = ((/* implicit */unsigned long long int) var_9);
                    var_35 = ((/* implicit */short) ((int) arr_25 [i_5 + 2] [i_5 + 2] [i_13]));
                }
                var_36 = ((/* implicit */short) ((2147483641) < (((/* implicit */int) var_9))));
            }
            /* LoopSeq 4 */
            for (short i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-2147483642)))) ? (arr_43 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37)))));
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 - 1] [i_8] [i_17] [i_5 - 1] [i_8 - 1]))) : ((-(arr_25 [i_5] [i_8] [i_5])))));
                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_5] [i_5] [i_5] [i_5])) ? (16781210230979247529ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_5]))))))));
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_5 + 1] [i_5] [i_5] [i_5 + 1])) && (((/* implicit */_Bool) arr_0 [i_5 - 1]))));
                var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16781210230979247553ULL)) ? (((/* implicit */int) arr_37 [i_5] [i_5] [i_8 - 3] [i_8 - 3])) : (((/* implicit */int) (unsigned short)7240)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_17] [i_8 + 1] [i_8] [i_5]))))))))));
            }
            for (unsigned short i_18 = 2; i_18 < 19; i_18 += 2) 
            {
                var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_8] [i_8 - 3] [i_8]))));
                var_43 = ((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) (unsigned short)22335))));
                arr_51 [i_5 + 1] [i_5 + 1] [i_8] [i_18 - 2] = ((/* implicit */int) arr_35 [i_8] [i_8]);
            }
            for (unsigned short i_19 = 2; i_19 < 19; i_19 += 2) 
            {
                var_44 = ((/* implicit */int) min((var_44), (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) arr_18 [i_5 + 2])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)35948)) >= (((/* implicit */int) var_7)))))))));
                var_45 = ((/* implicit */short) 773269400);
                var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) arr_18 [i_5 - 2]))));
            }
            for (int i_20 = 0; i_20 < 20; i_20 += 3) 
            {
                var_47 = var_0;
                var_48 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51526))));
                /* LoopNest 2 */
                for (unsigned char i_21 = 3; i_21 < 18; i_21 += 3) 
                {
                    for (unsigned short i_22 = 0; i_22 < 20; i_22 += 3) 
                    {
                        {
                            var_49 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_57 [i_20] [i_8 - 3] [i_8 - 3])) : (((/* implicit */int) arr_57 [i_20] [i_8 - 2] [i_20])));
                            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_43 [i_20]) : (arr_58 [i_5] [i_5] [i_5] [i_5 + 2] [i_5 + 2])));
                        }
                    } 
                } 
            }
        }
        var_51 = ((/* implicit */unsigned long long int) -1807749884);
    }
}
