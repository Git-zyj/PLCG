/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108338
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) 1416850002088115862ULL);
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) var_3);
                            var_12 *= ((((/* implicit */_Bool) 28ULL)) ? (408940092985205847ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))));
                            var_13 = ((/* implicit */short) 28ULL);
                        }
                        var_14 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18037803980724345748ULL))));
                    }
                } 
            } 
            var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_5 = 3; i_5 < 10; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned char i_8 = 3; i_8 < 10; i_8 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) 18446744073709551615ULL);
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(0))))));
                        }
                    } 
                } 
            } 
            arr_22 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)18801)) ? ((-(873327158068049372ULL))) : (1416850002088115861ULL)));
            /* LoopNest 2 */
            for (unsigned int i_9 = 1; i_9 < 9; i_9 += 2) 
            {
                for (unsigned short i_10 = 1; i_10 < 9; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (0ULL) : (((/* implicit */unsigned long long int) var_1))));
                            arr_31 [3ULL] [i_5] [i_9] [2ULL] [(unsigned char)0] [i_9] [i_11] = ((/* implicit */unsigned int) (-(var_10)));
                            var_19 = ((/* implicit */unsigned char) var_10);
                        }
                        for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 4) 
                        {
                            arr_34 [i_12] [(unsigned short)2] [i_9] [i_9] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 23U))));
                            arr_35 [i_0] [i_5] [i_9] [i_10] [i_9] = ((/* implicit */int) var_3);
                        }
                        var_20 = ((/* implicit */unsigned short) 4057008657U);
                        var_21 -= ((/* implicit */unsigned long long int) 4240251083U);
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) : (408940092985205834ULL))))));
                    }
                } 
            } 
            arr_36 [i_0] [i_5 - 2] = ((/* implicit */unsigned int) (unsigned short)0);
        }
        var_23 = ((/* implicit */short) 1156828367U);
    }
    for (short i_13 = 3; i_13 < 20; i_13 += 2) /* same iter space */
    {
        arr_40 [i_13] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)32767))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            var_24 = (unsigned short)46735;
            arr_45 [i_13 + 3] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17029894071621435740ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))));
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
        {
            var_25 = ((((/* implicit */_Bool) 4294967272U)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (unsigned char)1)));
            arr_50 [i_15] &= var_2;
            arr_51 [i_13 - 3] [i_13] [i_13] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)1))));
            var_26 -= (short)-21014;
        }
        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
        {
            arr_54 [i_13] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
            /* LoopNest 3 */
            for (int i_17 = 3; i_17 < 21; i_17 += 3) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 2) 
                {
                    for (unsigned short i_19 = 1; i_19 < 21; i_19 += 2) 
                    {
                        {
                            var_27 = (unsigned short)58144;
                            var_28 = var_0;
                            var_29 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned short)18801))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(6477696859199902200ULL)))) ? ((+(((/* implicit */int) (unsigned char)159)))) : (((/* implicit */int) (unsigned char)38))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 3) 
        {
            arr_66 [i_13] [(short)6] = ((/* implicit */unsigned char) (~((-(2875208046U)))));
            arr_67 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned short)55249))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 15839002093693718379ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (4611686018410610688ULL)))) ? (18446744073709551615ULL) : ((+(3102019805232751718ULL))))) : (((/* implicit */unsigned long long int) (-(24U))))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3957392407U)) ? (((/* implicit */unsigned long long int) 3001904492U)) : (0ULL)))) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
            var_32 = (unsigned short)7;
            arr_68 [i_13] = 1579278312U;
        }
    }
    for (short i_21 = 3; i_21 < 20; i_21 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 23; i_22 += 1) 
        {
            for (unsigned int i_23 = 0; i_23 < 23; i_23 += 1) 
            {
                {
                    arr_76 [i_21] [i_22] [8ULL] [i_21] = ((/* implicit */unsigned short) (+(9223371487098961920ULL)));
                    /* LoopSeq 2 */
                    for (unsigned int i_24 = 2; i_24 < 22; i_24 += 1) 
                    {
                        arr_81 [i_21] [i_22] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2715688983U)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (unsigned char)212))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56)))))));
                        var_33 -= ((((/* implicit */_Bool) (-(1579278324U)))) ? (9555458821995737905ULL) : (((/* implicit */unsigned long long int) (+(-460028138)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_25 = 3; i_25 < 22; i_25 += 2) 
                        {
                            var_34 += ((/* implicit */short) (!(((/* implicit */_Bool) (+(1565600743336964345ULL))))));
                            arr_85 [i_21] [i_22] [i_23] [2U] [i_21] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)63))));
                            var_35 = ((/* implicit */unsigned char) (+((+(-460028130)))));
                        }
                    }
                    for (unsigned long long int i_26 = 1; i_26 < 22; i_26 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) (~(var_10)));
                        var_37 &= (~(((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (unsigned char)58)) : (-460028138))));
                        var_38 = (+(((((/* implicit */_Bool) 1746421710U)) ? (var_7) : (((/* implicit */unsigned long long int) 4294967290U)))));
                        var_39 ^= 536870880;
                        var_40 = ((/* implicit */unsigned long long int) var_8);
                    }
                }
            } 
        } 
        var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(3143972760299280044ULL))))));
        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (-((+(((/* implicit */int) var_5)))))))));
    }
    for (short i_27 = 3; i_27 < 20; i_27 += 2) /* same iter space */
    {
        arr_90 [i_27] [10] = ((/* implicit */unsigned short) var_7);
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? ((-(15955984574428282435ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12347420791579760577ULL)) ? (((/* implicit */int) (unsigned short)40701)) : (((/* implicit */int) var_6)))))));
    }
    var_44 -= ((/* implicit */unsigned int) var_8);
}
