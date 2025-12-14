/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159901
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
    var_11 = ((/* implicit */unsigned long long int) 1080869642142689584LL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) (+(0U)));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))) : (5U)))) % ((((_Bool)0) ? (2422461333921724570LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 11; i_2 += 1) 
        {
            for (long long int i_3 = 4; i_3 < 9; i_3 += 1) 
            {
                for (unsigned int i_4 = 2; i_4 < 8; i_4 += 1) 
                {
                    {
                        var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9))) ^ (((/* implicit */unsigned long long int) ((30U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [(_Bool)1]))))))));
                        var_14 ^= ((/* implicit */int) var_5);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_15 = ((/* implicit */short) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_16 += ((/* implicit */signed char) ((unsigned char) (signed char)63));
                arr_21 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_1])) != (arr_4 [i_1] [i_5])));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned short i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)1888)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_18 = ((/* implicit */unsigned int) (~(arr_6 [i_8 + 4])));
                        }
                    } 
                } 
            }
            for (int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)39))))) ? (arr_6 [i_1]) : (((/* implicit */int) ((short) arr_30 [i_11] [i_1] [i_1] [i_5] [i_1] [i_1])))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1406681632)) ? (((/* implicit */int) arr_19 [i_1] [i_5] [(unsigned short)10] [i_10])) : (((arr_33 [(short)10] [i_10] [i_5] [i_5] [(short)10]) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) arr_19 [i_1] [i_1] [(short)4] [i_10])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        {
                            arr_38 [i_1] [i_1] = ((((/* implicit */_Bool) (~(var_7)))) ? (250387916) : ((+(((/* implicit */int) (unsigned char)232)))));
                            var_21 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_13] [i_13] [i_12] [i_9] [i_5] [i_1]))));
                        }
                    } 
                } 
            }
            for (long long int i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_13 [4U] [i_1] [i_14] [i_14] [i_14])) * (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                var_23 = ((/* implicit */signed char) (+((+(-2089052670)))));
            }
            /* LoopNest 2 */
            for (long long int i_15 = 3; i_15 < 10; i_15 += 1) 
            {
                for (unsigned char i_16 = 3; i_16 < 10; i_16 += 1) 
                {
                    {
                        arr_46 [i_1] [i_1] [i_1] [i_15] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_1])) ? (((/* implicit */unsigned long long int) -1416396697)) : (arr_44 [i_1])));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_1] [i_15] [i_15 + 2])) ? (((/* implicit */int) ((arr_13 [i_15] [6] [i_15 + 1] [(unsigned short)2] [6]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (arr_17 [i_16 - 3] [i_5]))))));
                        arr_47 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((_Bool)0) && (((/* implicit */_Bool) arr_25 [i_1] [i_5] [i_15] [i_16] [i_16]))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)64825)) ? (arr_11 [i_16] [i_15] [i_5] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        var_26 = (~(var_8));
                    }
                } 
            } 
            var_27 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) > (var_1))) ? (1596130422) : (((/* implicit */int) var_6))));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_1] [i_1])) ? (((/* implicit */unsigned int) -1)) : (var_10)))) ^ (((long long int) (short)1554))));
        }
        for (long long int i_17 = 2; i_17 < 8; i_17 += 1) 
        {
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                for (short i_19 = 4; i_19 < 9; i_19 += 1) 
                {
                    {
                        arr_55 [i_17] [i_1] [i_17] = ((/* implicit */long long int) (+(arr_54 [i_17 - 1] [i_19 - 4])));
                        /* LoopSeq 1 */
                        for (unsigned char i_20 = 3; i_20 < 11; i_20 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_1] [i_17] [i_18])) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_14 [i_1] [i_18] [i_17] [i_1]))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_18] [i_18] [i_1]))) : (arr_32 [i_1] [i_17] [i_1] [i_19 - 4] [i_20 - 2])))));
                            var_30 *= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_18])) ? (645746391) : (-1993984292))));
                            arr_59 [i_1] = var_4;
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (-9223372036854775807LL - 1LL)))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                var_32 = ((/* implicit */int) arr_20 [i_21] [i_17] [i_1]);
                var_33 = ((/* implicit */unsigned char) (short)-23351);
                /* LoopNest 2 */
                for (short i_22 = 0; i_22 < 12; i_22 += 1) 
                {
                    for (int i_23 = 0; i_23 < 12; i_23 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */int) var_0)) : (var_7)))));
                            var_35 += ((/* implicit */int) (unsigned char)0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_20 [i_17] [i_17 - 1] [i_17 - 1])) : (((/* implicit */int) arr_20 [i_25] [i_24] [i_17 + 2]))));
                            var_37 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_8))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) == (5967794742931638239LL))))));
                            var_38 = ((/* implicit */short) var_8);
                            arr_72 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((1993984292) >= (((((/* implicit */int) (short)3968)) ^ (((/* implicit */int) (unsigned char)116))))));
                            arr_73 [i_1] [i_21] [i_17] [i_1] = ((/* implicit */short) ((var_8) ^ (((/* implicit */int) var_2))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_26 = 0; i_26 < 12; i_26 += 1) 
                {
                    for (unsigned int i_27 = 0; i_27 < 12; i_27 += 1) 
                    {
                        {
                            var_39 = ((((/* implicit */_Bool) ((int) var_1))) ? ((+(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (1406681632))));
                            var_40 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) -1993984306)))))) > (-4425047083805113823LL));
                            arr_78 [10] [i_17 + 4] [(unsigned short)2] [i_17] [i_1] [i_17 - 1] [i_17] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1993984320)) ^ (arr_77 [i_17 - 1] [i_17 - 1])));
                        }
                    } 
                } 
            }
        }
        /* LoopNest 3 */
        for (short i_28 = 2; i_28 < 9; i_28 += 1) 
        {
            for (int i_29 = 0; i_29 < 12; i_29 += 1) 
            {
                for (signed char i_30 = 0; i_30 < 12; i_30 += 1) 
                {
                    {
                        arr_90 [i_1] [i_1] [i_29] [i_30] = ((short) (~(arr_60 [i_28] [i_1])));
                        var_41 = arr_22 [i_29] [i_29];
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) arr_53 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32754))) : (var_1)));
        arr_91 [i_1] [i_1] = ((/* implicit */short) (((~(((/* implicit */int) arr_42 [i_1] [i_1] [i_1])))) >= (((/* implicit */int) var_0))));
    }
    var_43 = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */_Bool) (short)19439)) ? (-1993984292) : (((/* implicit */int) (unsigned short)32589)))) ^ (max((var_7), (((/* implicit */int) (unsigned short)9596)))))));
}
