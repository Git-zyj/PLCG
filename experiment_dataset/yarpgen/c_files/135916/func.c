/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135916
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
    var_15 = ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (arr_3 [i_0])))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (arr_3 [i_0]))))));
                arr_6 [(_Bool)1] [16LL] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1]))) | (min((1666087941449352261ULL), (((/* implicit */unsigned long long int) (unsigned short)34232))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3116493335U)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) arr_2 [(unsigned short)2] [i_1] [i_1]))))), (4294967295U))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(var_5))), (((/* implicit */int) ((((/* implicit */int) var_14)) <= (var_3))))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    /* LoopSeq 4 */
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */long long int) arr_3 [i_2])) : (((arr_2 [i_2] [i_2] [i_2]) ? (var_8) : ((~(var_8)))))));
        arr_10 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (var_11))))))), (((((/* implicit */_Bool) (unsigned short)12493)) ? (((/* implicit */int) arr_1 [i_2])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned short)46108))))))));
        arr_11 [i_2] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (arr_3 [i_2])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (1178473945U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55365)))))) : (((((/* implicit */_Bool) var_4)) ? (max((arr_8 [i_2]), (arr_8 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_2] [i_2] [i_2])), (var_0)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (arr_3 [i_3]) : (var_3)));
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_4])) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */int) var_13)), (arr_3 [i_4]))) : (((/* implicit */int) arr_16 [i_4]))))));
        arr_17 [i_4] = ((/* implicit */_Bool) max((((arr_3 [i_4]) + (arr_3 [i_4]))), (max((((/* implicit */int) var_0)), (var_5)))));
        arr_18 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (arr_3 [i_4]) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4])))) : ((~(((/* implicit */int) arr_1 [i_4]))))));
    }
    /* vectorizable */
    for (signed char i_5 = 3; i_5 < 20; i_5 += 4) 
    {
        arr_21 [i_5] = arr_16 [i_5 + 2];
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_9) == (((/* implicit */long long int) var_3))))) & (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-125)) : (var_5)))));
            arr_24 [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_5 - 2]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_29 [i_5] [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_5 + 2] [i_5] [i_5 + 2])) ? (1666087941449352261ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5 + 1] [i_5] [i_5 - 3])))));
            arr_30 [i_5] = ((/* implicit */unsigned long long int) (!(arr_22 [i_5 - 2] [i_5 - 1])));
            arr_31 [i_5] [i_7] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_5] [i_7])))) & (((/* implicit */int) arr_4 [i_5] [i_5 + 1]))));
            /* LoopSeq 4 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            arr_38 [i_5] [i_7] [i_8] [i_7] [i_9] [i_5] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_5] [i_5 - 2] [i_5] [i_5 - 2] [i_5] [i_10]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (arr_33 [i_5 - 2] [i_10])))));
                            arr_39 [i_10] [i_5] [i_8] [i_5] [i_5] = ((/* implicit */int) arr_26 [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                            arr_40 [i_10] [i_5] [i_9] [(unsigned short)21] [i_8] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_5 - 1] [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_32 [i_5 - 1] [i_5 - 3] [i_5])) : (((/* implicit */int) arr_32 [i_5 - 2] [i_5 - 1] [i_5]))));
                            arr_41 [i_5] [i_7] [i_8] [i_8] [i_9] [i_5] [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_5 + 2]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) arr_16 [i_5 - 2]);
            }
            for (signed char i_11 = 0; i_11 < 22; i_11 += 4) /* same iter space */
            {
                arr_44 [i_5] [i_7] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) arr_15 [i_7] [19]))))));
                arr_45 [i_11] [i_7] [i_11] [i_11] &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_7] [i_11]))));
            }
            for (signed char i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) 1178473970U);
                var_24 = ((/* implicit */signed char) var_9);
                var_25 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_5 - 1]))));
            }
            for (signed char i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_14 = 1; i_14 < 19; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        {
                            arr_57 [i_5] [i_14] [i_5] = var_0;
                            arr_58 [i_5] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((16780656132260199355ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))) : (var_5)));
                        }
                    } 
                } 
                arr_59 [i_5] [i_5] [i_5 - 3] [i_5] = ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) var_14)))));
            }
            var_26 = ((/* implicit */_Bool) max((var_26), (((var_8) > (((/* implicit */long long int) var_5))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            arr_62 [i_5] = ((_Bool) var_3);
            var_27 ^= ((/* implicit */signed char) arr_34 [i_5] [i_5 + 1] [i_5 - 3] [i_5] [i_5 + 1] [i_5 - 3]);
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) -19902719))))));
        }
    }
}
