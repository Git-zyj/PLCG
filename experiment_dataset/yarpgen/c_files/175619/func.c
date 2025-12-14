/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175619
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
    var_14 = ((/* implicit */_Bool) max((var_14), (((_Bool) ((unsigned char) ((unsigned char) var_3))))));
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) ((long long int) ((unsigned char) (unsigned char)255))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [(unsigned short)3] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) ((unsigned int) var_8))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [2LL] = ((/* implicit */int) ((signed char) ((unsigned short) ((unsigned char) var_5))));
                            arr_17 [i_2] [i_4] [i_3] [(unsigned char)1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((short) ((short) (unsigned char)14))));
                            arr_18 [i_0] [0U] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) ((short) (unsigned char)216))));
                        }
                    } 
                } 
            } 
            var_16 ^= ((/* implicit */unsigned short) ((long long int) ((long long int) ((unsigned char) arr_7 [i_1] [i_0]))));
        }
        var_17 = ((/* implicit */unsigned int) ((long long int) ((short) ((int) (unsigned char)14))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((short) ((_Bool) var_0)));
            var_19 |= ((/* implicit */_Bool) ((unsigned char) ((unsigned short) (unsigned char)247)));
            arr_21 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((signed char) ((unsigned int) (unsigned char)247)));
        }
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
        {
            var_20 ^= ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) ((long long int) arr_12 [i_6] [i_0] [i_0] [11LL]))));
            arr_24 [i_6] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((_Bool) ((unsigned short) -6671089176448545889LL))));
            var_21 = ((unsigned char) ((unsigned short) ((unsigned char) arr_5 [i_0])));
        }
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((unsigned short) ((unsigned long long int) ((long long int) arr_26 [i_7] [i_0])))))));
            arr_29 [i_7] = ((/* implicit */unsigned char) ((unsigned long long int) ((signed char) ((unsigned short) 2251799796908032ULL))));
            /* LoopSeq 1 */
            for (long long int i_8 = 2; i_8 < 13; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    var_23 ^= ((/* implicit */long long int) ((_Bool) ((int) ((unsigned char) var_5))));
                    arr_35 [i_9 + 1] [i_9] [i_9] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((_Bool) ((unsigned char) arr_11 [i_8]))));
                    arr_36 [i_0] [i_7] [i_8 - 2] [i_9] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((unsigned int) (unsigned char)9))));
                    var_24 &= ((/* implicit */unsigned char) ((short) ((unsigned int) ((int) arr_14 [i_7] [i_8]))));
                }
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((long long int) ((long long int) ((unsigned short) (unsigned char)234)))))));
                    arr_39 [i_0] [i_7] [i_8] [i_10] [i_0] [i_0] = ((unsigned short) ((int) ((int) (short)-3574)));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 3; i_11 < 12; i_11 += 3) 
                    {
                        arr_42 [i_11] [i_7] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) ((unsigned int) arr_37 [(unsigned char)9] [i_8] [i_8] [i_0]))));
                        arr_43 [i_11] [i_7] [i_8 + 1] = ((unsigned char) ((_Bool) ((_Bool) arr_32 [i_8 - 2])));
                        var_26 ^= ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) ((long long int) arr_32 [i_10]))));
                        arr_44 [i_0] [i_7] [i_11] [i_10] [i_11] = ((unsigned int) ((unsigned char) (unsigned char)255));
                    }
                    var_27 -= ((/* implicit */unsigned int) ((unsigned short) ((unsigned long long int) ((unsigned char) (unsigned char)240))));
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
                {
                    arr_47 [i_12] [i_8 - 2] [i_7] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) -1117382574));
                    var_28 = ((/* implicit */int) max((var_28), (((int) ((_Bool) (unsigned char)233)))));
                }
            }
        }
        arr_48 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((unsigned char) 18446744073709551608ULL)));
        var_29 = ((/* implicit */unsigned char) ((short) ((long long int) ((signed char) var_3))));
    }
    for (unsigned int i_13 = 4; i_13 < 9; i_13 += 4) 
    {
        var_30 = ((/* implicit */long long int) ((unsigned int) ((_Bool) ((int) var_3))));
        /* LoopSeq 3 */
        for (unsigned char i_14 = 1; i_14 < 8; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_15 = 0; i_15 < 11; i_15 += 4) 
            {
                var_31 ^= ((/* implicit */signed char) ((unsigned char) ((signed char) ((unsigned char) (unsigned char)22))));
                arr_55 [i_13 - 4] [i_14] [i_14] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) ((unsigned long long int) arr_1 [(short)11] [i_14 + 1]))));
                arr_56 [i_14] [i_14 + 2] [i_14] = ((/* implicit */unsigned int) ((short) ((short) ((unsigned int) var_9))));
            }
            for (unsigned char i_16 = 1; i_16 < 7; i_16 += 2) 
            {
                var_32 = ((/* implicit */int) ((unsigned int) ((unsigned long long int) ((unsigned int) arr_3 [i_13 + 1]))));
                arr_60 [i_14] = ((unsigned int) ((int) ((unsigned long long int) var_10)));
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        var_33 &= ((/* implicit */unsigned char) ((int) ((unsigned int) ((unsigned char) var_9))));
                        var_34 = ((/* implicit */_Bool) ((unsigned char) ((unsigned int) ((unsigned int) var_6))));
                        var_35 += ((/* implicit */unsigned int) ((_Bool) ((unsigned char) ((long long int) (unsigned char)4))));
                        var_36 += ((/* implicit */unsigned char) ((_Bool) (unsigned char)128));
                    }
                    for (int i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        var_37 = ((unsigned char) ((unsigned char) ((_Bool) arr_20 [i_13])));
                        var_38 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned char) ((unsigned int) (_Bool)1))));
                    }
                    var_39 ^= ((/* implicit */_Bool) ((unsigned short) ((unsigned short) ((unsigned char) 2701354017U))));
                    var_40 = ((/* implicit */unsigned short) ((unsigned int) ((signed char) ((int) var_10))));
                    var_41 = ((/* implicit */unsigned int) ((int) ((unsigned char) ((long long int) var_9))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    arr_71 [i_14] [i_16] [i_14] [i_14] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((short) var_13))));
                    arr_72 [i_14] [i_14] = ((/* implicit */unsigned short) ((_Bool) ((unsigned int) ((short) (unsigned char)28))));
                }
                arr_73 [i_14] [i_14] = ((unsigned char) ((unsigned int) ((unsigned int) (unsigned short)64999)));
            }
            var_42 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) ((_Bool) arr_4 [i_13 - 3]))));
            var_43 = ((/* implicit */_Bool) ((unsigned char) ((unsigned short) ((_Bool) (unsigned char)7))));
        }
        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 4) 
        {
            var_44 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) ((unsigned char) (unsigned char)240))));
            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) ((long long int) ((_Bool) ((unsigned short) var_1)))))));
            var_46 = ((/* implicit */int) ((unsigned short) ((unsigned short) ((_Bool) var_7))));
        }
        /* vectorizable */
        for (unsigned char i_22 = 0; i_22 < 11; i_22 += 1) 
        {
            var_47 ^= ((/* implicit */unsigned int) ((long long int) ((unsigned short) arr_12 [i_13] [i_13] [(_Bool)1] [i_22])));
            arr_79 [i_22] = ((/* implicit */short) ((unsigned long long int) ((unsigned char) 2817649782U)));
            var_48 += ((/* implicit */_Bool) ((unsigned char) ((unsigned char) arr_11 [i_13 - 3])));
        }
    }
    var_49 &= ((/* implicit */int) ((_Bool) 15957500435631472690ULL));
    var_50 = ((/* implicit */int) ((unsigned char) ((unsigned int) ((int) var_4))));
}
