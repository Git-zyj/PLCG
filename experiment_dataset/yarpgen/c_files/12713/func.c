/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12713
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) (signed char)50);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)210))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 1398123045))));
                        arr_11 [(short)6] [(short)6] [11] [i_2] [i_2] [i_2] = ((/* implicit */int) (_Bool)1);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
            arr_16 [i_4] = ((/* implicit */unsigned short) (signed char)78);
            var_20 |= ((/* implicit */unsigned long long int) -1726034255678648782LL);
        }
    }
    for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 3) 
    {
        var_21 *= ((/* implicit */short) (unsigned short)40433);
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            arr_23 [i_5] [i_5] = ((/* implicit */short) (_Bool)1);
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) (unsigned short)0);
                    arr_28 [i_5] [i_6] [i_6] [i_6] [i_7] [i_5] = ((/* implicit */int) (_Bool)1);
                }
                for (long long int i_9 = 1; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    arr_32 [i_7] [i_5] [i_5] [10ULL] = ((/* implicit */unsigned short) -531153983);
                    arr_33 [i_5] = ((/* implicit */unsigned short) 5276554880978382744LL);
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_36 [i_6] |= ((/* implicit */signed char) -7382923611642059070LL);
                        arr_37 [i_10] [i_5] [i_7] [i_5] [i_5] = -7382923611642059070LL;
                        var_23 -= ((/* implicit */unsigned short) (unsigned char)3);
                    }
                }
                arr_38 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) -7382923611642059069LL);
            }
            for (unsigned short i_11 = 3; i_11 < 14; i_11 += 4) 
            {
                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (signed char)-125))));
                /* LoopNest 2 */
                for (long long int i_12 = 2; i_12 < 14; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        {
                            arr_48 [i_5 + 2] [i_13] [(short)6] [i_11 - 3] [i_13] |= ((/* implicit */_Bool) (unsigned char)41);
                            var_25 = ((/* implicit */short) (unsigned char)97);
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) -7382923611642059070LL))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) -7026827907751875873LL);
            /* LoopNest 3 */
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned short i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        {
                            arr_59 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] = 7026827907751875856LL;
                            var_28 = 2741096294102560150ULL;
                            arr_60 [7ULL] [i_16] [i_5] [(_Bool)1] [i_5 - 2] = ((/* implicit */long long int) (short)19955);
                            arr_61 [i_5 + 1] [i_5] [i_14] [i_5 + 1] [i_16] = ((/* implicit */int) 15744748727297195651ULL);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (unsigned short)9923))));
            arr_62 [i_5] = ((/* implicit */int) 4294967295U);
        }
        /* vectorizable */
        for (unsigned int i_18 = 3; i_18 < 14; i_18 += 4) 
        {
            var_30 = ((/* implicit */unsigned long long int) 531153973);
            arr_67 [(short)0] &= 10788378671732284060ULL;
        }
        for (signed char i_19 = 4; i_19 < 12; i_19 += 3) 
        {
            arr_71 [i_5] = ((/* implicit */unsigned long long int) 7382923611642059070LL);
            var_31 = ((/* implicit */short) (_Bool)0);
        }
        var_32 *= ((/* implicit */_Bool) (signed char)48);
        arr_72 [i_5] [i_5] = ((/* implicit */short) -1);
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 15; i_20 += 4) 
        {
            for (signed char i_21 = 2; i_21 < 11; i_21 += 3) 
            {
                {
                    var_33 = ((/* implicit */unsigned char) (_Bool)1);
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) 7382923611642059074LL))));
                    var_35 *= ((/* implicit */unsigned short) (_Bool)0);
                }
            } 
        } 
    }
    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
    {
        var_36 = ((/* implicit */unsigned char) 9183763241992332348ULL);
        arr_80 [i_22] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_37 = ((/* implicit */_Bool) (short)-10568);
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        var_38 = ((/* implicit */unsigned long long int) max((var_38), (4051623230092730227ULL)));
        arr_83 [i_23] = ((/* implicit */int) 2027948082166096083LL);
        arr_84 [12ULL] |= ((/* implicit */int) (unsigned char)114);
    }
    var_39 = ((/* implicit */int) var_9);
}
