/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176096
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
    var_16 -= ((long long int) (+(((/* implicit */int) (unsigned short)51718))));
    var_17 = ((/* implicit */signed char) var_13);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (unsigned char)209);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)51718)) && (((/* implicit */_Bool) arr_5 [i_0] [i_1])))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                var_20 &= ((/* implicit */_Bool) var_8);
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_1))));
                var_22 = ((/* implicit */short) ((unsigned short) (unsigned short)51746));
            }
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 3; i_4 < 11; i_4 += 3) 
                {
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_19 [i_1] [i_3] [i_4 + 1] [i_4] = arr_13 [i_5] [i_3] [(_Bool)0] [(_Bool)0];
                            var_23 = ((/* implicit */unsigned short) var_6);
                            arr_20 [i_4] [(unsigned short)4] [(unsigned short)4] [i_4 + 1] [i_5] [i_3] [i_4] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_2 [i_1 - 2] [i_4 + 1])) / (((/* implicit */int) arr_2 [i_1 - 2] [i_4 + 1])))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 5305399786688629233LL)) ? (((/* implicit */int) (short)16383)) : (((/* implicit */int) (signed char)127))))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (-(((long long int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (arr_8 [i_7] [i_7] [i_7]))))));
                            var_26 = arr_6 [i_6] [i_6] [i_6];
                            arr_26 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3930538323U))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) ((((unsigned int) var_4)) != (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (signed char)-116)) > (((/* implicit */int) var_8)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_24 [i_0] [7LL] [i_0] [i_0] [i_0])), (var_2))))))))));
            }
        }
        for (unsigned short i_8 = 1; i_8 < 11; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) (unsigned short)8826);
            arr_30 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_8] [i_8] [(_Bool)1] [i_8 + 1])), (arr_3 [i_8] [i_8])))) >> (((((long long int) arr_25 [i_8] [i_8] [i_8] [i_8 - 1] [i_8 + 1])) - (32336LL)))));
        }
        arr_31 [i_0] = ((/* implicit */unsigned char) (+(((long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (long long int i_11 = 2; i_11 < 9; i_11 += 4) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) var_14);
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45488)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3054369237U))))) : ((((!(((/* implicit */_Bool) arr_17 [i_12] [i_11] [i_10] [i_9] [i_9] [i_12])))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) arr_28 [i_12] [i_11 + 1]))))));
                            arr_43 [i_9] [i_9] [i_12] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_9])) ? (arr_35 [i_9] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9] [i_10] [i_11 + 3]))))));
                            var_31 |= ((/* implicit */unsigned short) var_4);
                        }
                    } 
                } 
            } 
            var_32 = var_8;
        }
    }
    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)7)))) % (((((/* implicit */_Bool) (unsigned short)65472)) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_13] [i_13] [i_13]))) : (var_5)))))))))));
        var_34 |= ((/* implicit */unsigned short) max((((/* implicit */int) var_14)), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)14336))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */short) var_11)), ((short)-16383))))))));
        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [(unsigned short)4] [i_13])) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) / (((/* implicit */int) var_11)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)89)))))))));
        arr_46 [i_13] = ((/* implicit */unsigned long long int) var_11);
    }
    for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
    {
        var_36 = ((/* implicit */unsigned int) arr_48 [i_14] [i_14]);
        arr_49 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17527))) * (1774325530U)));
    }
    /* LoopNest 2 */
    for (short i_15 = 1; i_15 < 19; i_15 += 3) 
    {
        for (unsigned char i_16 = 2; i_16 < 19; i_16 += 3) 
        {
            {
                arr_56 [i_15 + 1] [4LL] &= ((/* implicit */unsigned short) arr_54 [i_16]);
                arr_57 [i_15] [i_16] [i_15] = ((/* implicit */unsigned short) arr_51 [i_16]);
                arr_58 [i_15] [(signed char)8] [i_15 + 1] |= ((/* implicit */long long int) ((unsigned short) (unsigned short)14972));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) 
    {
        for (signed char i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            for (long long int i_19 = 2; i_19 < 17; i_19 += 3) 
            {
                {
                    arr_66 [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
                    var_37 = ((/* implicit */long long int) var_1);
                    /* LoopNest 2 */
                    for (signed char i_20 = 1; i_20 < 16; i_20 += 2) 
                    {
                        for (signed char i_21 = 3; i_21 < 16; i_21 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_21 - 1] [i_21] [i_21] [i_21 - 1] [i_21 - 1] [12LL])) && (((/* implicit */_Bool) var_13))))))))));
                                var_39 = ((/* implicit */unsigned char) ((unsigned int) ((long long int) 4294967295U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
