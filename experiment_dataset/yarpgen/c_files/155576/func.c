/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155576
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
    var_20 = ((/* implicit */unsigned char) (~((~(((long long int) var_1))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned char)0] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned short) ((int) var_17))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((unsigned char) ((long long int) ((unsigned char) var_11))));
                        arr_10 [i_1] [(_Bool)1] = ((unsigned char) ((int) (-(var_2))));
                        var_22 = ((/* implicit */unsigned char) ((signed char) ((short) ((_Bool) 18014398509481984ULL))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) (+(((unsigned long long int) ((unsigned char) arr_3 [i_0] [i_0] [i_0])))));
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            arr_15 [i_4] = ((int) (+(((/* implicit */int) ((signed char) arr_6 [i_0] [i_4])))));
            arr_16 [2U] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((int) arr_1 [i_0])))))));
            arr_17 [i_0] [i_4] [(unsigned char)5] = ((/* implicit */int) ((unsigned long long int) (-(((int) (unsigned short)65535)))));
            var_23 += ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [i_0] [5] [i_4] [i_4])))))));
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            var_24 -= ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) (unsigned short)12)))));
            arr_21 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) 11ULL)))));
        }
        for (int i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            var_25 = ((/* implicit */int) ((unsigned short) ((short) ((unsigned int) arr_12 [15U] [i_6] [15U]))));
            arr_26 [i_6] = ((/* implicit */signed char) ((unsigned char) (unsigned short)12));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_31 [i_7] [i_8] = ((/* implicit */unsigned char) ((int) ((unsigned int) (short)32767)));
            var_26 &= ((/* implicit */unsigned int) ((long long int) ((signed char) var_5)));
            arr_32 [(_Bool)1] |= ((/* implicit */unsigned long long int) (~(((int) var_19))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            var_27 = ((/* implicit */int) ((unsigned long long int) (~(((/* implicit */int) (short)-6014)))));
            var_28 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned long long int) arr_25 [i_9] [i_7] [i_7])));
            /* LoopSeq 2 */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((unsigned char) ((unsigned long long int) 9223372036854775807LL))))));
                /* LoopSeq 4 */
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    arr_40 [i_9] = (~(((/* implicit */int) ((unsigned char) arr_35 [i_7] [i_7]))));
                    var_30 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) (unsigned short)3072)))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        var_31 -= ((_Bool) (-(((/* implicit */int) (short)-6014))));
                        var_32 = ((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned short)62464)));
                        var_33 = ((/* implicit */short) (~(((long long int) arr_4 [i_9]))));
                    }
                    var_34 = ((/* implicit */int) ((signed char) ((long long int) var_5)));
                    var_35 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) (unsigned char)245)));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
                    {
                        var_36 = ((/* implicit */short) ((unsigned long long int) ((int) 255)));
                        arr_49 [i_7] [(unsigned char)2] [i_14] [i_12] [(_Bool)1] |= ((/* implicit */signed char) (~((-(-4771504868632887735LL)))));
                        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        var_38 = ((/* implicit */unsigned short) ((unsigned long long int) ((int) var_17)));
                    }
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((unsigned int) ((unsigned long long int) var_3))))));
                }
                for (short i_15 = 1; i_15 < 10; i_15 += 1) 
                {
                    var_40 = ((/* implicit */unsigned char) ((unsigned int) ((long long int) arr_28 [i_7])));
                    arr_52 [i_7] [i_9] [11U] [i_10] [i_9] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_55 [i_7] [i_7] [i_9] [i_16] [(unsigned char)4] [i_9] = ((/* implicit */unsigned int) ((int) ((signed char) var_2)));
                    arr_56 [i_9] [4] [i_10] [i_10] = ((/* implicit */signed char) ((int) ((int) 9223372036854775807LL)));
                    var_41 = ((int) (~(arr_42 [i_7] [8] [10] [i_16] [8] [i_7])));
                    var_42 = ((/* implicit */int) (-(((long long int) 9416861251486801608ULL))));
                }
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned char i_18 = 0; i_18 < 12; i_18 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */int) ((short) (~(((/* implicit */int) arr_60 [i_9] [9] [i_10] [10] [i_9])))));
                            var_44 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) var_14)))));
                            var_45 = ((/* implicit */int) ((short) ((short) arr_28 [i_7])));
                            var_46 = ((/* implicit */unsigned char) ((_Bool) (-(arr_9 [i_7] [i_9] [i_10] [6ULL]))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) var_15))))))));
            }
            for (unsigned char i_19 = 0; i_19 < 12; i_19 += 1) /* same iter space */
            {
                var_48 = ((/* implicit */unsigned int) ((signed char) ((long long int) arr_0 [(signed char)14])));
                arr_65 [i_9] [i_7] [i_9] [i_19] = (+(((/* implicit */int) ((signed char) arr_13 [i_19] [i_9]))));
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            for (signed char i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 3; i_22 < 11; i_22 += 1) 
                    {
                        for (signed char i_23 = 0; i_23 < 12; i_23 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */_Bool) ((unsigned int) ((signed char) var_2)));
                                var_50 = ((unsigned int) ((_Bool) arr_43 [i_7] [i_21] [i_21] [i_22]));
                            }
                        } 
                    } 
                    arr_76 [i_7] [i_20] [i_21] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) var_19)))));
                    /* LoopNest 2 */
                    for (int i_24 = 1; i_24 < 9; i_24 += 1) 
                    {
                        for (signed char i_25 = 0; i_25 < 12; i_25 += 1) 
                        {
                            {
                                var_51 = ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (unsigned short)1024)))));
                                arr_81 [i_25] [i_20] [i_25] [i_24] [i_25] = ((/* implicit */int) ((signed char) ((unsigned char) 1938143871167731983LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_52 = ((/* implicit */unsigned long long int) ((int) ((unsigned int) ((_Bool) var_8))));
}
