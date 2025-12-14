/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128021
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
    var_14 = ((/* implicit */_Bool) ((int) ((long long int) ((signed char) var_8))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((short) ((signed char) 0ULL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) ((unsigned char) arr_5 [i_0])));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                arr_9 [i_0] [i_2] [(unsigned short)9] = ((/* implicit */_Bool) ((short) ((long long int) (short)22692)));
                arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) ((int) ((signed char) 1ULL)));
            }
            for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
            {
                var_16 = ((/* implicit */unsigned short) ((unsigned char) ((int) 0ULL)));
                /* LoopSeq 1 */
                for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                {
                    arr_16 [(_Bool)1] [i_4] = ((/* implicit */int) ((signed char) 421961405415150525ULL));
                    var_17 = ((signed char) ((unsigned short) -3474258509541372948LL));
                    arr_17 [i_4] = ((/* implicit */long long int) ((unsigned short) ((_Bool) arr_7 [i_0] [i_0] [i_3] [i_4])));
                }
            }
            /* LoopNest 2 */
            for (long long int i_5 = 3; i_5 < 16; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((signed char) ((signed char) var_11)));
                        var_19 = ((/* implicit */signed char) ((_Bool) ((unsigned char) var_13)));
                        arr_24 [i_0] = ((/* implicit */_Bool) ((signed char) ((unsigned long long int) var_12)));
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        arr_33 [i_8] [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) ((signed char) (_Bool)1))));
                        var_20 = ((/* implicit */_Bool) ((signed char) ((signed char) ((signed char) var_9))));
                        var_21 = ((/* implicit */_Bool) ((unsigned char) ((long long int) ((signed char) (unsigned char)6))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_22 = ((/* implicit */int) ((long long int) ((signed char) ((long long int) arr_34 [i_7] [i_10]))));
                var_23 = ((/* implicit */signed char) ((unsigned short) ((_Bool) ((int) arr_5 [i_10]))));
                var_24 = ((/* implicit */signed char) ((long long int) ((unsigned short) ((unsigned short) var_13))));
                arr_37 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned long long int) ((signed char) (_Bool)0))));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) ((unsigned char) ((long long int) arr_34 [i_11] [i_11])));
        /* LoopSeq 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_26 = ((/* implicit */_Bool) ((short) ((_Bool) 1559822139)));
            var_27 = ((/* implicit */unsigned long long int) ((long long int) (-2147483647 - 1)));
            arr_44 [i_11] = ((signed char) ((int) var_6));
        }
        for (long long int i_13 = 1; i_13 < 14; i_13 += 2) 
        {
            var_28 = ((/* implicit */int) ((short) ((unsigned long long int) arr_45 [i_11] [i_13] [i_11])));
            arr_47 [i_11] [i_13] = ((/* implicit */signed char) ((unsigned char) ((unsigned short) (unsigned short)7170)));
            var_29 = ((/* implicit */unsigned char) ((unsigned short) ((int) (-9223372036854775807LL - 1LL))));
            arr_48 [i_11] [i_13] [i_13] = ((/* implicit */int) ((signed char) ((signed char) var_8)));
        }
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
            {
                for (int i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_61 [i_14] [i_15] [i_14] [i_14] [i_18] [(short)5] [i_14] = ((/* implicit */_Bool) ((short) ((_Bool) var_8)));
                            var_30 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) arr_0 [(signed char)9])));
                            var_31 = ((/* implicit */signed char) ((int) ((int) var_2)));
                            arr_62 [i_14] [i_15] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((unsigned long long int) ((int) var_13)));
                        }
                    } 
                } 
            } 
            var_32 = ((unsigned short) ((signed char) (unsigned char)84));
            var_33 = ((/* implicit */unsigned short) ((short) ((int) (unsigned short)58382)));
        }
        arr_63 [i_14] = ((/* implicit */unsigned long long int) ((unsigned short) ((short) (signed char)12)));
        var_34 = ((signed char) ((_Bool) var_0));
        var_35 = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) var_7)));
    }
    for (signed char i_19 = 4; i_19 < 20; i_19 += 4) 
    {
        var_36 = ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) ((unsigned short) arr_64 [i_19]))));
        var_37 = ((/* implicit */long long int) ((int) ((signed char) ((signed char) var_6))));
        var_38 = ((/* implicit */signed char) ((int) ((long long int) ((long long int) arr_65 [i_19]))));
    }
    /* LoopSeq 1 */
    for (short i_20 = 2; i_20 < 21; i_20 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            for (signed char i_22 = 0; i_22 < 22; i_22 += 2) 
            {
                for (signed char i_23 = 0; i_23 < 22; i_23 += 2) 
                {
                    {
                        var_39 = ((/* implicit */unsigned short) ((short) ((unsigned short) ((_Bool) -6098032963017514346LL))));
                        var_40 = ((/* implicit */short) ((unsigned short) ((_Bool) ((_Bool) var_11))));
                        var_41 = ((unsigned char) ((unsigned char) ((long long int) arr_73 [1LL] [i_20] [i_20] [i_20 + 1])));
                        arr_77 [i_20] [i_21] [i_21] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((long long int) ((_Bool) ((unsigned short) (signed char)111))));
                        arr_78 [i_20] = ((/* implicit */long long int) ((unsigned short) ((int) ((_Bool) (unsigned char)171))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            for (int i_25 = 0; i_25 < 22; i_25 += 2) 
            {
                {
                    arr_86 [(_Bool)1] [i_20] [i_25] = ((/* implicit */signed char) ((unsigned short) 0ULL));
                    var_42 = ((/* implicit */signed char) ((int) ((signed char) (signed char)15)));
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 0; i_26 < 22; i_26 += 1) 
                    {
                        for (int i_27 = 4; i_27 < 19; i_27 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) ((unsigned char) arr_71 [i_20]))));
                                arr_92 [i_20] [(unsigned char)14] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) ((signed char) arr_81 [i_20]))));
                                var_44 = ((/* implicit */int) ((long long int) ((int) ((signed char) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
