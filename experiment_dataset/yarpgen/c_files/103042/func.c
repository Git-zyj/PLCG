/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103042
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))));
        var_14 += (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        var_15 -= (+(((/* implicit */int) var_1)));
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    var_16 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))));
                    var_18 = ((/* implicit */int) min((var_18), ((+((-(((/* implicit */int) var_10))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        arr_17 [i_1] [i_5] = ((/* implicit */unsigned short) var_6);
                        arr_18 [i_1] [(signed char)8] [i_2] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) var_4);
                        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
                        var_20 = ((/* implicit */short) (+(((/* implicit */int) var_3))));
                        arr_19 [i_1] [i_2] [(short)9] [(unsigned short)3] = ((/* implicit */long long int) var_2);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        var_21 = (-((-(((/* implicit */int) (unsigned char)235)))));
                        var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
                    }
                }
                arr_23 [i_3] [0LL] [(unsigned short)2] = ((/* implicit */signed char) var_2);
            }
            for (unsigned long long int i_7 = 2; i_7 < 7; i_7 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */int) var_6);
                var_24 = var_0;
            }
            for (short i_8 = 2; i_8 < 7; i_8 += 3) 
            {
                var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) var_3)))))));
                var_27 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
            }
            var_29 = ((/* implicit */long long int) (-(var_4)));
            arr_31 [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_9 = 2; i_9 < 9; i_9 += 4) 
        {
            var_30 += ((/* implicit */unsigned char) var_11);
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_38 [i_1] [i_9 - 2] [i_1] = ((/* implicit */unsigned long long int) var_9);
                var_31 = ((/* implicit */unsigned int) var_10);
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (-(((/* implicit */int) var_9)))))));
                var_33 = ((/* implicit */unsigned char) var_5);
                var_34 = ((/* implicit */long long int) var_8);
            }
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                var_35 = ((/* implicit */int) var_7);
                /* LoopSeq 3 */
                for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    var_36 = var_6;
                    var_37 = ((/* implicit */unsigned char) var_7);
                }
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    arr_49 [i_1] [i_9] [i_9 + 2] [i_11] [2ULL] = ((/* implicit */long long int) var_5);
                    arr_50 [i_9] [i_11] [i_13] = ((/* implicit */unsigned short) var_6);
                    var_38 = ((/* implicit */long long int) (+(((/* implicit */int) var_9))));
                    var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_7))))));
                }
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    arr_54 [(signed char)4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-20863))));
                    arr_55 [i_14] [i_9] [1ULL] = ((/* implicit */unsigned int) (-((~((~(2116523674)))))));
                }
                arr_56 [i_1] [9ULL] [i_11] [9ULL] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)177))));
                var_40 = ((/* implicit */unsigned char) max((var_40), (var_2)));
            }
            /* vectorizable */
            for (unsigned char i_15 = 1; i_15 < 9; i_15 += 4) 
            {
                arr_59 [i_15 + 2] [i_15] [i_1] = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_5))))));
                arr_60 [i_1] [i_9] [i_15] = ((/* implicit */unsigned char) var_6);
            }
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            var_41 = ((/* implicit */int) var_0);
            arr_63 [7LL] [i_16] [i_16] = ((/* implicit */unsigned char) var_11);
            var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11))))));
        }
    }
    for (short i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
    {
        var_43 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
        arr_66 [i_17] = ((/* implicit */unsigned long long int) var_8);
        var_44 &= ((/* implicit */unsigned int) var_1);
    }
    var_45 = ((/* implicit */signed char) var_0);
    var_46 += ((/* implicit */short) var_12);
}
