/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131669
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((long long int) ((unsigned long long int) (~(var_11)))));
                var_19 &= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 + 1]))))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_1 - 1]))) : (((((/* implicit */_Bool) var_14)) ? (685955094) : (((/* implicit */int) arr_1 [i_1 + 1])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 2) 
    {
        var_20 = ((int) arr_4 [i_2 + 1] [i_2]);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 7; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                {
                    var_22 *= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_7 [(_Bool)1])) < (((arr_0 [i_3]) % (((/* implicit */int) (_Bool)1)))))));
                    var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_5))))))));
                    var_24 = ((((/* implicit */int) var_0)) < (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 2])) < (((/* implicit */int) var_10))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_5] [i_5]))));
        var_26 = ((/* implicit */unsigned long long int) var_1);
        var_27 = ((/* implicit */unsigned long long int) arr_14 [i_5] [i_5]);
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (+(((/* implicit */int) var_0)))))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_15 [i_6] [i_5])) - (61937)))));
            var_30 = ((/* implicit */int) min((var_30), ((+(((/* implicit */int) arr_17 [i_6] [i_6] [i_5]))))));
            var_31 = ((/* implicit */unsigned long long int) var_12);
            var_32 = ((/* implicit */unsigned char) (_Bool)1);
            var_33 = ((/* implicit */long long int) ((_Bool) ((signed char) var_1)));
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        {
                            var_34 = ((_Bool) var_8);
                            var_35 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_14 [i_5] [i_7]))));
            var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
            var_38 = ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))));
        }
    }
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */_Bool) 201326592U);
        var_40 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)35))));
    }
    for (int i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        var_41 = ((/* implicit */short) (~(((((/* implicit */int) arr_16 [i_12] [i_12])) & (((/* implicit */int) arr_24 [i_12] [i_12]))))));
        var_42 = ((/* implicit */unsigned long long int) arr_20 [i_12]);
        var_43 = ((/* implicit */unsigned long long int) ((unsigned short) ((min((arr_21 [i_12] [i_12] [(unsigned short)11] [i_12]), (((/* implicit */int) var_2)))) - ((+(var_8))))));
    }
    var_44 |= ((/* implicit */_Bool) 8694915764741264583LL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_13 = 1; i_13 < 13; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_45 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_46 [i_13] [2U] [i_13] [i_13])))));
                                var_46 = (+(((unsigned long long int) var_14)));
                                var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((arr_35 [4] [i_17]) + (((/* implicit */int) (unsigned short)37133)))))));
                            }
                        } 
                    } 
                    var_48 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_14]))));
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) > ((+(((/* implicit */int) arr_39 [4U] [i_18]))))));
                                var_50 = arr_31 [i_13];
                            }
                        } 
                    } 
                    var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) var_17))));
                    var_52 = ((/* implicit */int) min((var_52), (((int) arr_30 [i_13]))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_20 = 0; i_20 < 14; i_20 += 3) 
        {
            var_53 = ((/* implicit */unsigned short) ((arr_33 [i_13] [i_13 + 1]) ? ((~(((/* implicit */int) (unsigned short)4064)))) : (((/* implicit */int) var_7))));
            var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) var_16))));
            var_55 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_20] [i_13]))));
        }
    }
}
