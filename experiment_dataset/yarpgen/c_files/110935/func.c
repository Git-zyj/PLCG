/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110935
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_6 [(short)12] [(short)12] |= ((/* implicit */unsigned short) (+(4294967295U)));
            var_15 = var_9;
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */_Bool) (unsigned short)32767);
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned char)1] [i_2] [i_2])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0]))));
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_8 [i_0 - 3] [i_2]))));
            var_18 &= ((/* implicit */_Bool) var_7);
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_15 [i_0 - 3] [i_2] [i_2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((~(arr_11 [i_2] [i_3] [i_3]))) : (((/* implicit */unsigned long long int) 1U))));
                        var_19 = ((/* implicit */long long int) (-(arr_12 [i_0 + 1] [i_2] [i_4 - 1])));
                    }
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 14; i_5 += 4) /* same iter space */
        {
            arr_19 [i_0 + 2] &= arr_5 [i_5];
            var_20 = var_9;
        }
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (short i_8 = 3; i_8 < 12; i_8 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 - 3])) ? ((~(arr_27 [i_0 - 1]))) : (arr_11 [i_7] [i_7] [i_6])));
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) -690630446080031669LL))));
                    }
                } 
            } 
        } 
        var_23 = (short)2048;
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [11U])) ? (((/* implicit */int) (unsigned short)12558)) : (((/* implicit */int) (short)2048))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_13 [i_0 - 3] [(signed char)0] [i_0 - 1] [i_0 - 3])));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            arr_32 [i_0 + 2] [i_0 + 2] [(short)0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)2055))))));
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) var_11);
                        var_26 ^= 690630446080031671LL;
                    }
                } 
            } 
            arr_38 [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                for (unsigned char i_13 = 1; i_13 < 12; i_13 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_7))));
                        var_28 = ((/* implicit */short) arr_14 [i_0 - 3] [i_9] [i_13 + 2]);
                        var_29 -= ((/* implicit */unsigned int) var_9);
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -152047125)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_9))))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_14 = 2; i_14 < 14; i_14 += 3) 
    {
        var_31 += ((/* implicit */unsigned short) var_3);
        var_32 = ((/* implicit */int) 3556127695U);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_15 = 2; i_15 < 11; i_15 += 2) 
    {
        arr_49 [(short)0] [i_15 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_15 - 2] [i_15 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_15 - 2] [i_15 - 2]))) : (738839600U)));
        var_33 &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_28 [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_15] [i_15] [i_15] [i_15 - 2] [i_15 - 1]))) : (11988727011950169495ULL)))));
        arr_50 [5] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) (short)5944)) : (((/* implicit */int) var_4))));
    }
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        var_34 = ((/* implicit */unsigned long long int) arr_52 [18U]);
        arr_54 [i_16] = ((/* implicit */unsigned short) (unsigned char)255);
        arr_55 [(unsigned short)7] [i_16] &= ((/* implicit */short) 3556127695U);
        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (+((-(1911432114))))))));
        var_36 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_5)), (11038088391753667182ULL)));
    }
    var_37 = ((/* implicit */unsigned int) var_12);
}
