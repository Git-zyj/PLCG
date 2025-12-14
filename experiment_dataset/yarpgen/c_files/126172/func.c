/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126172
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
    var_11 = var_8;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_0]) % (arr_2 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) : ((+(arr_2 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) -7532056454788538710LL)))));
                    var_13 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 2130706432)))) ? (min((((((/* implicit */_Bool) var_1)) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned int) var_0)))), ((~(arr_6 [i_1] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_9 [i_0] [i_1] [i_2] [i_1])))))));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((int) arr_2 [i_2 - 1])) - (((-2130706449) / (((/* implicit */int) (unsigned short)6132)))))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_4 [i_0] [i_0])) ^ (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (signed char i_3 = 3; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    {
                        arr_23 [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)64))) ? (min((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), ((~(var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_3 + 1])) ? (arr_12 [i_3 + 1]) : (((/* implicit */int) var_4)))))));
                        arr_24 [i_3] [i_5] [i_4] [i_6] [i_4] [i_4] = ((/* implicit */short) ((arr_13 [i_3 - 1] [i_3 - 2]) / (arr_13 [i_3 - 1] [i_3 - 2])));
                    }
                } 
            } 
        } 
        arr_25 [i_3] = ((((/* implicit */_Bool) (-(-7532056454788538698LL)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [6LL] [i_3] [6LL])))) < (((/* implicit */int) arr_14 [i_3 - 1]))))) : (((((/* implicit */_Bool) arr_13 [i_3 - 2] [i_3 + 1])) ? (arr_13 [i_3 + 1] [i_3 - 2]) : (arr_13 [i_3 + 1] [i_3 - 1]))));
    }
    /* LoopSeq 3 */
    for (int i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) arr_27 [4] [4]);
        arr_28 [i_7] = ((/* implicit */unsigned char) (~(0ULL)));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            for (int i_10 = 3; i_10 < 22; i_10 += 4) 
            {
                {
                    var_16 = ((/* implicit */int) var_6);
                    /* LoopNest 2 */
                    for (signed char i_11 = 2; i_11 < 22; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_10] [i_8] = ((unsigned short) min((((/* implicit */long long int) arr_32 [i_8] [i_8])), (arr_29 [i_8])));
                                var_17 = ((/* implicit */int) min((var_17), ((~(((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_10] [i_10] [i_8] [i_8]))) % (((long long int) var_8)))), (7532056454788538704LL)));
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) max((var_19), (max((((/* implicit */long long int) ((0ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), ((~(arr_29 [i_8])))))));
        arr_43 [i_8] [i_8] = (-(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (2130706432)))), (min((arr_38 [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */long long int) -2130706422)))))));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_8])) ? (var_0) : (((/* implicit */int) var_6))))), (arr_54 [i_8])));
                                var_21 = ((/* implicit */short) max((((/* implicit */int) (short)-32752)), (-2130706431)));
                                var_22 = ((/* implicit */unsigned short) min((min((arr_56 [i_15] [i_14] [i_13] [i_8]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-32729))))))), (((/* implicit */unsigned int) var_3))));
                                arr_59 [i_8] [i_8] [i_13] [i_8] [i_15] [i_16] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_40 [i_8] [i_13] [i_14] [i_13] [i_13])) << (((((/* implicit */int) arr_40 [i_8] [i_13] [i_8] [i_8] [i_16])) - (12541)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) arr_60 [i_13] [i_14]);
                                var_24 = ((/* implicit */unsigned char) max((7532056454788538709LL), (((/* implicit */long long int) var_8))));
                            }
                        } 
                    } 
                    arr_66 [i_8] [i_8] [i_14] = arr_33 [i_8] [i_14];
                    var_25 = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_48 [i_8] [i_13] [i_8] [i_8])) - (((/* implicit */int) (_Bool)0)))));
                    arr_67 [i_8] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (-(arr_64 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))) : (min((arr_51 [i_14]), (((/* implicit */unsigned int) 8191)))))))));
                }
            } 
        } 
        var_26 += ((/* implicit */signed char) ((((max((8200), (((/* implicit */int) arr_33 [i_8] [i_8])))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))) ? (min((-7532056454788538704LL), (((/* implicit */long long int) (signed char)-105)))) : (max((min((((/* implicit */long long int) var_6)), (7532056454788538734LL))), (((/* implicit */long long int) arr_40 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        arr_70 [i_19] |= ((/* implicit */unsigned char) min((min((arr_54 [i_19]), (arr_54 [i_19]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)199)))))));
        arr_71 [i_19] = (-(arr_38 [i_19] [i_19] [i_19] [i_19] [i_19]));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_48 [i_19] [i_19] [i_19] [i_19]))) % (var_9))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)48))))));
        /* LoopSeq 1 */
        for (unsigned short i_20 = 1; i_20 < 21; i_20 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (long long int i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    {
                        arr_79 [i_19] [i_19] [i_21] [i_21] [i_22] [i_19] = ((/* implicit */int) ((((/* implicit */long long int) (-(8191)))) / (4556970729723509554LL)));
                        var_28 = ((/* implicit */long long int) min((var_28), (max((((/* implicit */long long int) (signed char)56)), (9223372036854775807LL)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_23 = 3; i_23 < 22; i_23 += 2) 
            {
                for (signed char i_24 = 1; i_24 < 22; i_24 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_35 [i_20 - 1] [i_20 - 1] [i_20 + 3]))))));
                        arr_87 [i_19] [i_23] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_85 [i_24 + 2] [i_23 - 1] [i_23 + 1] [i_23 - 1] [i_20 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10))), (((/* implicit */unsigned int) arr_63 [i_23 + 1]))));
                    }
                } 
            } 
        }
    }
    var_30 = ((/* implicit */unsigned int) var_9);
    var_31 -= ((/* implicit */unsigned short) var_6);
}
