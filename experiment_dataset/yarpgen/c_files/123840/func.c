/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123840
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
    var_17 = min((-1046547324), (((/* implicit */int) var_5)));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0 + 2])), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (max((var_4), (((/* implicit */unsigned long long int) var_12))))));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (~(((unsigned int) ((((/* implicit */int) arr_2 [i_2])) & (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_2]))))))))));
                var_19 = ((/* implicit */unsigned long long int) min(((+(var_1))), (((/* implicit */long long int) ((arr_0 [i_0] [i_0 - 1]) % (1483218083))))));
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        {
                            arr_16 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)116)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) (unsigned char)140)) - (129)))))) : (((long long int) 1124375134568725779ULL))));
                            arr_17 [i_0] [i_1] [i_0] [i_3 + 3] [i_3] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)5359)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5369))) : (17322368939140825820ULL))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)126)))))));
                        }
                    } 
                } 
            }
            arr_18 [i_0 - 2] [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_1 + 1] [i_0] [i_1] [i_1 - 3])) : (arr_4 [3] [i_0 + 2])))));
            var_20 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? ((-(arr_4 [i_0] [i_1 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), (var_15)))))))));
        }
        /* LoopSeq 2 */
        for (signed char i_5 = 4; i_5 < 14; i_5 += 2) /* same iter space */
        {
            var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_10 [i_5 - 4] [i_5] [i_0 - 1] [i_5] [i_0 - 2]))))))) ? (926735721) : (((int) arr_12 [i_5 - 3] [i_5 - 3] [(unsigned short)2] [i_5 + 3] [i_5]))));
            var_22 *= ((unsigned short) (short)17461);
        }
        /* vectorizable */
        for (signed char i_6 = 4; i_6 < 14; i_6 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned long long int) (~(var_11)));
                        /* LoopSeq 1 */
                        for (short i_9 = 4; i_9 < 16; i_9 += 4) 
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (!(arr_30 [i_9 - 3] [7ULL] [i_9] [i_8 - 1] [i_0 + 2]))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_0] [i_6 - 4] [i_7])) + (((/* implicit */int) arr_2 [i_0]))));
                            var_26 *= ((/* implicit */_Bool) ((unsigned short) arr_14 [i_9 - 2] [i_9 - 1] [i_9 - 4] [i_9 - 2] [i_9 - 4] [i_9] [i_9 - 1]));
                            var_27 &= ((/* implicit */_Bool) (~(arr_5 [i_6 - 2])));
                        }
                    }
                } 
            } 
            var_28 = (!(((/* implicit */_Bool) var_14)));
        }
        arr_32 [(unsigned short)16] &= ((unsigned long long int) (+(((unsigned long long int) arr_22 [i_0 + 3] [(unsigned char)11]))));
    }
    for (short i_10 = 3; i_10 < 14; i_10 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                {
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_10 + 3] [i_10 + 1] [i_10] [i_11])))))));
                    arr_41 [i_12] = ((/* implicit */_Bool) 53828942285392707ULL);
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        var_30 = ((/* implicit */int) arr_24 [i_12] [i_12]);
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 18; i_14 += 1) 
                        {
                            arr_47 [i_10] [i_10] [i_12] [i_13] [i_12] = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) (short)13102)) : (2147483645))) << (((((var_1) + (5946674189493339347LL))) - (11LL)))));
                            var_31 = ((/* implicit */unsigned char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) + (((/* implicit */int) var_5))))));
                        }
                        arr_48 [i_10 - 1] [i_12] [10ULL] [i_13] [i_12] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_10)) : (7390453070064938794LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_7) != (var_3))))))) + (((/* implicit */long long int) (~(((/* implicit */int) (signed char)15)))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_15])) ? (var_0) : (((/* implicit */int) arr_8 [i_15] [i_15] [i_10 + 4] [i_15]))))) ? (((((/* implicit */_Bool) arr_45 [1] [i_10 - 1] [i_10 - 3] [i_10 + 2])) ? (((/* implicit */int) (unsigned short)48814)) : (((/* implicit */int) (unsigned short)14974)))) : (((/* implicit */int) var_6))));
            var_33 *= (((+(arr_42 [i_10] [i_15] [i_15] [2ULL] [i_15] [(unsigned short)16]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_10 + 3])) || (((/* implicit */_Bool) arr_10 [i_10 - 2] [i_10 + 2] [i_10 - 2] [i_15] [i_10 - 2])))))));
            var_34 = ((/* implicit */unsigned char) arr_44 [7ULL] [i_15] [3LL]);
            var_35 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)139)) < (((((/* implicit */int) (unsigned char)6)) | (((/* implicit */int) (unsigned short)19474))))));
        }
        /* LoopSeq 2 */
        for (short i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
        {
            var_36 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) arr_38 [i_16])), (8090089806966787969ULL))));
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8336123860197667520ULL)) ? (((((/* implicit */int) (unsigned short)127)) - (105989671))) : (((/* implicit */int) var_6))));
                            var_38 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_17] [i_10 + 3]))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34965))) > (9015628831292063453LL)))) : (((((((/* implicit */_Bool) arr_42 [i_10] [i_16] [i_16] [i_18] [i_19] [i_18])) ? (((/* implicit */int) (unsigned short)30570)) : (((/* implicit */int) (short)761)))) << ((((((-(((/* implicit */int) var_6)))) + (159))) - (23)))))));
                            var_39 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -685157865)), ((+(11409065559499149467ULL)))));
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_33 [i_10 - 3]))) - (min((arr_33 [i_10 - 3]), (arr_33 [i_10 + 1])))));
                arr_65 [i_10] [i_10] [i_10 + 1] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) (+(((/* implicit */int) var_16))))))), ((!(((/* implicit */_Bool) var_12))))));
            }
            var_41 = ((/* implicit */short) arr_58 [i_16] [i_10] [i_16] [i_16] [i_16]);
        }
        for (short i_20 = 0; i_20 < 18; i_20 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) (short)25080))));
            /* LoopNest 2 */
            for (unsigned int i_21 = 2; i_21 < 17; i_21 += 2) 
            {
                for (unsigned short i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    {
                        arr_72 [i_22] [i_22] = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) arr_33 [i_10 + 2])))));
                        var_43 &= ((/* implicit */int) max((var_4), (((/* implicit */unsigned long long int) ((int) arr_68 [i_10 + 3] [i_10 - 1] [i_10 + 2])))));
                        arr_73 [i_21] &= ((/* implicit */_Bool) var_8);
                    }
                } 
            } 
        }
        arr_74 [i_10 - 1] [i_10] = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))))), (((unsigned long long int) var_12)))));
    }
    /* LoopSeq 1 */
    for (short i_23 = 1; i_23 < 24; i_23 += 2) 
    {
        var_44 = 1124375134568725791ULL;
        var_45 = ((/* implicit */_Bool) var_6);
        var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_77 [i_23 + 1])))))));
    }
}
