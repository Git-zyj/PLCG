/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160636
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
    var_10 = min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), ((+(8516951386978712635LL))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_11 &= ((/* implicit */signed char) (+((~(var_4)))));
        var_12 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) != (min((var_8), (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) var_0)))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) var_5))))) - ((-(var_2)))));
                            arr_10 [i_0] [i_1] [i_3] [(unsigned short)8] [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(var_8))))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_13 [i_3] = ((/* implicit */short) (~(var_4)));
                            var_15 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) 3598278959U))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3 + 1] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                            var_16 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_0)))))))));
                            var_17 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_3))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-43)), (-4611258114453312729LL)))) || (((/* implicit */_Bool) var_8)))), ((((!(((/* implicit */_Bool) var_3)))) || (((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_5))))))));
                            var_19 = max(((+(((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_9))))), (((var_2) / ((+(var_4))))));
                            var_20 = (!(((/* implicit */_Bool) max(((-(var_2))), (max((var_4), (var_2)))))));
                        }
                        arr_17 [5LL] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_6))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_20 [i_0] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) var_8)) != ((+(var_2)))));
                            var_21 = ((var_9) / (var_4));
                            var_22 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                            var_23 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_0))))));
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */int) (+((-((-(var_4)))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        arr_23 [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        /* LoopSeq 3 */
        for (signed char i_9 = 1; i_9 < 13; i_9 += 3) 
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(((/* implicit */int) var_3)))))));
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) + (var_1))))));
        }
        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            var_27 = (((~(((/* implicit */int) var_3)))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */int) var_5)) | (var_8)));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_5))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 2; i_13 < 11; i_13 += 2) 
                        {
                            arr_38 [i_10] [i_11] [i_13] = ((/* implicit */unsigned int) (((-(var_8))) >> (((var_2) - (4590556755055430521LL)))));
                            var_30 *= ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)48))))) != (var_9)));
                            var_31 = ((/* implicit */signed char) var_9);
                        }
                    }
                } 
            } 
        }
        for (long long int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            var_32 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
            arr_41 [i_8] [i_14] [i_14] = ((/* implicit */short) var_5);
            /* LoopSeq 2 */
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                arr_45 [i_8] [i_14] [i_15] [i_15] = (~(((/* implicit */int) (signed char)-49)));
                var_33 ^= ((/* implicit */long long int) var_1);
            }
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                var_34 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    var_35 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / ((-(var_9)))));
                    var_36 = ((var_2) << (((((((/* implicit */int) var_5)) + (125))) - (31))));
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (!((!((_Bool)1))))))));
                }
                var_38 ^= ((/* implicit */_Bool) (((-(var_1))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
            }
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (~(((((/* implicit */int) var_5)) ^ (var_8))))))));
        }
        var_40 = ((/* implicit */short) (+((-(var_9)))));
        var_41 = ((/* implicit */unsigned char) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
    }
    for (int i_18 = 0; i_18 < 10; i_18 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_19 = 2; i_19 < 7; i_19 += 3) 
        {
            for (unsigned int i_20 = 0; i_20 < 10; i_20 += 3) 
            {
                {
                    arr_60 [i_20] [(short)2] [i_20] = ((/* implicit */short) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) >> (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_0))))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((var_0), (var_0))))) != (max((var_2), (((/* implicit */long long int) var_6)))))))));
                    /* LoopSeq 2 */
                    for (int i_21 = 0; i_21 < 10; i_21 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_22 = 0; i_22 < 10; i_22 += 3) 
                        {
                            var_42 = ((/* implicit */short) var_4);
                            var_43 -= ((/* implicit */long long int) var_3);
                        }
                        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 4) 
                        {
                            arr_71 [i_18] [i_19] [i_19] [i_21] [i_21] [i_21] [i_20] = ((/* implicit */long long int) var_8);
                            var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (+(855264101U))))));
                        }
                        var_45 = ((/* implicit */long long int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
                        var_46 = ((/* implicit */unsigned long long int) var_0);
                    }
                    for (int i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
                    {
                        arr_75 [i_18] [i_19] [i_20] [i_24] = ((/* implicit */unsigned int) (+((+(((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_3))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_25 = 0; i_25 < 10; i_25 += 1) 
                        {
                            var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) (-((+(var_8))))))));
                            var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (var_2)))) != (((/* implicit */int) var_7)))))));
                            var_49 *= ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                        }
                    }
                }
            } 
        } 
        var_50 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_8)))))))));
    }
    var_51 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
}
