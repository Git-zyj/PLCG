/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11938
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
    var_14 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) : ((+(var_7))))) < (((/* implicit */unsigned int) 2147483647))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))) < (var_3)))), (var_8))));
                    var_15 *= ((/* implicit */unsigned char) arr_5 [i_0] [i_2]);
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) var_6);
                    var_16 ^= ((/* implicit */short) (((~(max((63ULL), (((/* implicit */unsigned long long int) -2147483647)))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1 - 1])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    arr_12 [i_0] [(short)12] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_11 [i_0] [i_0]))))));
                    arr_13 [i_0] [i_3] [i_4] = ((/* implicit */long long int) var_3);
                }
            } 
        } 
        arr_14 [i_0] [i_0] &= ((/* implicit */int) ((18446744073709551609ULL) >> (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)164)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
    }
    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) var_13))))) ? (max((18446744073709551584ULL), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (short)-27388)) % (((/* implicit */int) (short)32763)))) >= (((((/* implicit */int) (unsigned char)91)) << (1ULL)))))))));
        var_17 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) max(((unsigned char)151), (var_2)))) < (((/* implicit */int) (_Bool)1))))) / (((/* implicit */int) max((((short) var_6)), (min((((/* implicit */short) arr_11 [i_5] [i_5])), ((short)28523))))))));
        var_18 *= ((/* implicit */short) 11130830740496660203ULL);
        arr_20 [i_5] [i_5] = ((/* implicit */signed char) 14294259891834634723ULL);
        var_19 -= ((/* implicit */unsigned int) arr_17 [i_5]);
    }
    /* vectorizable */
    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            arr_26 [i_6] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (short)-32763))) ? (((/* implicit */int) (short)-14750)) : (((((/* implicit */int) (short)32752)) << (((14294259891834634723ULL) - (14294259891834634721ULL)))))));
            arr_27 [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)105)) << (((((/* implicit */int) (short)32759)) - (32738)))));
        }
        /* LoopSeq 1 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            arr_31 [i_8] = ((/* implicit */unsigned char) var_7);
            arr_32 [i_8] [i_8] [i_8] = ((short) arr_4 [i_8]);
            var_20 = ((((/* implicit */int) (short)28518)) > (((((/* implicit */_Bool) 421536669)) ? (((/* implicit */int) var_10)) : (arr_3 [i_6] [i_8] [i_8]))));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6])) && (((/* implicit */_Bool) var_5))));
        var_22 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_23 [i_6]))));
    }
    for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        arr_35 [i_9] [i_9] = ((/* implicit */int) max((((long long int) max((var_13), (var_13)))), (((/* implicit */long long int) (unsigned char)108))));
        var_23 ^= ((/* implicit */signed char) max((((/* implicit */int) ((63ULL) <= (((/* implicit */unsigned long long int) -12LL))))), ((+(((/* implicit */int) arr_33 [i_9] [i_9]))))));
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            arr_39 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) >> (((/* implicit */int) min(((unsigned char)0), ((unsigned char)138))))));
            arr_40 [i_10] = ((/* implicit */unsigned short) var_4);
            arr_41 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) var_3);
        }
        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            arr_44 [i_9] [i_11] [i_11] = ((/* implicit */unsigned short) var_7);
            arr_45 [i_9] [i_11] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) && ((!(((/* implicit */_Bool) arr_42 [i_9] [i_11] [i_9]))))));
        }
        arr_46 [i_9] = ((/* implicit */unsigned short) ((max((((unsigned int) (unsigned char)108)), (((/* implicit */unsigned int) (-(836775927)))))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)3141)))))));
    }
}
