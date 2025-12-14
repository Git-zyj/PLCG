/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143739
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
    var_18 = ((/* implicit */_Bool) var_13);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_19 += ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) -2603692382437790302LL)), (var_11)))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((1048576U), (((/* implicit */unsigned int) var_3)))))));
    }
    var_20 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 11; i_2 += 1) 
        {
            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 471266949998929741ULL)))))));
            var_22 = ((/* implicit */_Bool) var_7);
            var_23 -= ((/* implicit */short) 2603692382437790301LL);
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_24 &= ((/* implicit */_Bool) ((short) (_Bool)1));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                arr_13 [i_1] = ((/* implicit */int) var_16);
                /* LoopSeq 3 */
                for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_25 |= ((/* implicit */unsigned char) -779141295);
                    var_26 = ((/* implicit */unsigned char) (_Bool)1);
                    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
                }
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    arr_18 [i_1] [i_3] [i_4] [i_6] = ((/* implicit */_Bool) var_0);
                    arr_19 [i_3] [(unsigned char)9] [i_3] [i_3] [(unsigned short)1] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))), (var_5)));
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    var_28 = ((/* implicit */unsigned int) ((unsigned short) var_15));
                    arr_22 [i_7] [i_3] [i_3] [0ULL] [(short)1] [(_Bool)1] = (+(((/* implicit */int) (unsigned short)25656)));
                    arr_23 [i_1] [i_3] [i_3] [i_7] &= ((/* implicit */signed char) (+(var_16)));
                    var_29 ^= ((/* implicit */short) (unsigned short)11864);
                    arr_24 [i_1] [(short)1] [i_4] [i_4] [i_4] [i_7] = ((/* implicit */unsigned short) ((short) (unsigned short)25657));
                }
            }
            /* LoopSeq 3 */
            for (int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                arr_27 [i_8] [i_8] [i_8] [i_1] = ((/* implicit */unsigned long long int) var_2);
                arr_28 [i_3] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) + (((/* implicit */int) (unsigned short)65535))));
            }
            for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) var_15))));
                var_31 = ((/* implicit */int) ((((long long int) var_16)) * (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
            }
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                arr_33 [i_1] [i_3] [i_10] = ((/* implicit */int) var_17);
                var_32 = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) (unsigned short)65535)))));
                var_33 = ((/* implicit */unsigned short) var_0);
            }
            var_34 |= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -2147483642)), (var_1))))));
        }
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_35 ^= ((/* implicit */unsigned int) var_10);
                        arr_40 [i_1] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2119670013708972644ULL))));
                        arr_41 [i_1] [i_11] [i_13] [i_13] = ((/* implicit */signed char) var_10);
                    }
                } 
            } 
            var_36 -= ((/* implicit */_Bool) 2603692382437790301LL);
            arr_42 [i_1] [i_1] |= var_5;
        }
        arr_43 [i_1] [i_1] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) + (2119670013708972644ULL));
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_8))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */short) ((((/* implicit */int) var_6)) * (((/* implicit */int) (!((_Bool)1))))));
                        var_39 = ((/* implicit */long long int) max((var_39), (var_8)));
                        arr_53 [i_1] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 2119670013708972644ULL))))) >> (((((var_2) << (((/* implicit */int) (unsigned short)0)))) - (3553928670U)))));
                    }
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
                    {
                        var_40 ^= ((/* implicit */short) min(((!(((/* implicit */_Bool) var_8)))), ((!((_Bool)1)))));
                        var_41 = (!((!(((/* implicit */_Bool) var_0)))));
                        var_42 = ((/* implicit */unsigned char) ((var_12) >> ((+(((/* implicit */int) var_9))))));
                        var_43 ^= (!(((/* implicit */_Bool) -1768969227)));
                    }
                    for (long long int i_18 = 0; i_18 < 12; i_18 += 4) /* same iter space */
                    {
                        arr_59 [i_18] [i_15] [i_15] [i_14] [i_1] = min((var_12), (min((var_12), (((/* implicit */int) var_9)))));
                        var_44 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (unsigned short)65520)) == (((/* implicit */int) var_3)))));
                        var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
                    }
                    /* LoopSeq 1 */
                    for (int i_19 = 0; i_19 < 12; i_19 += 1) 
                    {
                        arr_63 [i_1] [i_1] [i_14] [i_1] [i_14] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_14)))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65316)))))));
                        arr_64 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8)))))));
                        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (unsigned short)22))));
                    }
                    var_47 = ((/* implicit */long long int) var_6);
                    arr_65 [i_1] [i_1] [i_15] = (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_17))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_68 [(_Bool)1] [(_Bool)1] |= ((/* implicit */long long int) (+(((/* implicit */int) min((var_17), ((short)-17426))))));
                        arr_69 [2] [i_1] [i_14] [(unsigned short)10] [i_20] = ((/* implicit */unsigned char) var_6);
                        var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) min((((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned char) (_Bool)1))))), (max(((unsigned short)55553), ((unsigned short)39877))))))));
                        var_49 |= ((/* implicit */long long int) var_12);
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_21 = 0; i_21 < 12; i_21 += 4) 
        {
            for (short i_22 = 1; i_22 < 9; i_22 += 3) 
            {
                for (unsigned short i_23 = 0; i_23 < 12; i_23 += 3) 
                {
                    {
                        var_50 &= ((/* implicit */unsigned int) var_12);
                        var_51 = ((/* implicit */int) var_9);
                    }
                } 
            } 
        } 
    }
}
