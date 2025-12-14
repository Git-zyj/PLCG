/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145446
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
    var_15 |= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned short)16383);
            var_16 ^= ((/* implicit */short) (~(var_10)));
        }
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_17 = ((/* implicit */short) var_3);
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)16397))))) ? (((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-115)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            arr_10 [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-81))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))));
        }
        var_18 = ((/* implicit */unsigned short) (-((+(((((/* implicit */_Bool) (unsigned char)234)) ? (var_11) : (((/* implicit */int) (unsigned short)17))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_19 += ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                var_20 = -2147483632;
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    var_21 = ((/* implicit */long long int) var_13);
                    arr_20 [i_6] [i_6] [i_5] [i_3] [i_3] = (unsigned short)16384;
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_22 |= ((/* implicit */int) var_2);
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (_Bool)1))));
                        arr_25 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_14)));
                        var_24 = ((/* implicit */_Bool) ((long long int) 3987589494118034784LL));
                    }
                    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
                    {
                        arr_30 [i_3] [i_4] [i_5] [i_6] [i_6] [i_3] |= (_Bool)1;
                        arr_31 [i_3] [i_4] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) var_10);
                    }
                    arr_32 [(unsigned char)5] [i_4] [i_5] [i_3] [i_6] [(short)15] = ((/* implicit */long long int) var_11);
                }
                for (long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    var_25 -= ((/* implicit */unsigned char) var_14);
                    var_26 = ((/* implicit */unsigned short) ((short) 2453319165978050859LL));
                }
            }
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_14))));
        }
        arr_35 [i_3] [i_3] = ((/* implicit */unsigned long long int) -3987589494118034784LL);
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10))))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 1; i_10 < 17; i_10 += 4) 
    {
        var_29 += ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)));
        arr_40 [i_10] [i_10] = ((/* implicit */int) (-(3987589494118034784LL)));
        /* LoopSeq 3 */
        for (short i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_45 [i_10] [i_10] = ((/* implicit */long long int) (-(var_14)));
            /* LoopSeq 4 */
            for (unsigned int i_12 = 1; i_12 < 19; i_12 += 4) 
            {
                arr_48 [i_10] [i_12] [i_12] = ((/* implicit */int) var_2);
                var_30 = ((/* implicit */unsigned long long int) min((var_30), ((-(var_2)))));
                arr_49 [i_10] [10U] [i_12] = ((((/* implicit */_Bool) -7LL)) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) (_Bool)1)));
            }
            for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    arr_55 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)16404)) ? (-2147483639) : (((/* implicit */int) (_Bool)1))));
                    arr_56 [i_10] [i_10] [i_10] [12] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? ((-(3987589494118034793LL))) : (((/* implicit */long long int) (~(var_9))))));
                    arr_57 [i_10] = ((/* implicit */unsigned char) var_2);
                }
                arr_58 [i_10] [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) var_6);
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        {
                            var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) var_3))));
                            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (unsigned short)16398)) : (-16)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)96)))))));
                        }
                    } 
                } 
                var_33 ^= ((/* implicit */unsigned char) var_7);
                /* LoopSeq 2 */
                for (unsigned int i_18 = 1; i_18 < 19; i_18 += 2) 
                {
                    arr_71 [i_15] = ((/* implicit */unsigned long long int) var_5);
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) -3987589494118034812LL)) ? ((~(2147483631))) : (((/* implicit */int) (short)-24))));
                }
                for (int i_19 = 1; i_19 < 16; i_19 += 2) 
                {
                    arr_75 [16LL] [16LL] [16LL] [i_15] [i_15] [i_15] = ((/* implicit */signed char) (((_Bool)1) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_76 [i_15] [i_15] [i_10] [i_19] = ((/* implicit */short) -852611410);
                    arr_77 [i_10] [i_10] [i_10] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) var_13))))));
                    var_35 = ((/* implicit */signed char) var_0);
                }
                var_36 = (((_Bool)1) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) var_8)));
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)-100)))))));
            }
            for (unsigned char i_20 = 0; i_20 < 20; i_20 += 4) 
            {
                arr_81 [i_10] [i_10] [i_10] [i_10] |= ((/* implicit */unsigned short) 2147483614);
                arr_82 [i_10] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)16407))));
                var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_12))));
            }
            /* LoopSeq 2 */
            for (long long int i_21 = 2; i_21 < 19; i_21 += 1) 
            {
                var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) (unsigned short)65535)))) : ((~(((/* implicit */int) (unsigned char)100))))));
                var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (23ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                arr_87 [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)16398))))) ? (((/* implicit */int) var_7)) : ((+(((/* implicit */int) var_8))))));
                arr_88 [i_21] [i_11] [i_21] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */unsigned long long int) var_9)) : (var_4)));
            }
            for (unsigned short i_22 = 2; i_22 < 19; i_22 += 4) 
            {
                arr_92 [i_22] [i_10] [i_10] [i_10] = ((/* implicit */long long int) var_6);
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (short)-1))));
            }
            arr_93 [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) ((signed char) var_1));
            var_42 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (-800468905745347325LL) : (((/* implicit */long long int) var_6))));
        }
        for (unsigned char i_23 = 0; i_23 < 20; i_23 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_24 = 0; i_24 < 20; i_24 += 2) 
            {
                var_43 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)16396)) ? (((/* implicit */unsigned long long int) var_9)) : (18446744073709551615ULL)));
                /* LoopSeq 2 */
                for (short i_25 = 2; i_25 < 18; i_25 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_26 = 1; i_26 < 17; i_26 += 4) 
                    {
                        arr_106 [i_10] [i_23] [i_24] = ((/* implicit */signed char) -607139905117623211LL);
                        arr_107 [i_10] [i_23] [i_23] [i_23] [i_24] [i_25] [(unsigned short)8] = ((/* implicit */int) (~(((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4)))))));
                        var_44 += ((/* implicit */signed char) (-(18446744073709551593ULL)));
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_45 = ((/* implicit */long long int) -144516206);
                        arr_112 [i_24] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) var_3))));
                        arr_113 [i_27] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */int) ((unsigned int) var_2));
                        arr_114 [i_27] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 144516201)) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_115 [i_10] [i_23] [i_24] [i_25] = (unsigned short)49148;
                    arr_116 [i_25] [i_23] [i_23] [i_10] = (~(((/* implicit */int) (short)-18663)));
                    arr_117 [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (11U)))) : (18446744073709551611ULL)));
                }
                for (short i_28 = 2; i_28 < 18; i_28 += 1) 
                {
                    arr_120 [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (_Bool)1))));
                    var_46 = ((/* implicit */long long int) (-(((/* implicit */int) var_7))));
                }
                /* LoopNest 2 */
                for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */long long int) var_9);
                            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (short)-4063))));
                        }
                    } 
                } 
            }
            arr_125 [i_10] [i_10] [i_10] = ((/* implicit */short) (signed char)10);
            arr_126 [i_10] [i_23] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)8))));
            /* LoopSeq 3 */
            for (unsigned int i_31 = 0; i_31 < 20; i_31 += 2) 
            {
                var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) (+(((/* implicit */int) var_13)))))));
                var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64228))) : (var_6)));
                arr_129 [(unsigned short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (short)2720))));
            }
            for (long long int i_32 = 1; i_32 < 19; i_32 += 3) 
            {
                var_51 = ((/* implicit */unsigned int) (signed char)-108);
                arr_133 [i_10] [i_10] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))));
                arr_134 [i_23] [i_10] = ((/* implicit */unsigned char) var_8);
            }
            for (unsigned short i_33 = 1; i_33 < 17; i_33 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_34 = 0; i_34 < 20; i_34 += 4) 
                {
                    arr_141 [i_10] [i_10] [i_33] [i_33] [i_34] [i_23] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18)) ? (var_11) : (((/* implicit */int) var_3)))))));
                    arr_142 [i_33] [i_10] [i_10] [i_23] [i_33] [i_23] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551609ULL));
                    arr_143 [i_33] [i_33] = ((/* implicit */long long int) var_6);
                    var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) -144516202)) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (signed char)29)))))));
                    var_53 = ((/* implicit */int) var_1);
                }
                for (short i_35 = 3; i_35 < 19; i_35 += 4) 
                {
                    var_54 *= ((/* implicit */unsigned long long int) var_11);
                    arr_148 [i_10] [14U] [i_10] [i_23] [i_10] |= ((((/* implicit */_Bool) (short)63)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                    var_55 = ((/* implicit */unsigned char) var_8);
                }
                arr_149 [i_33] [i_23] [i_23] = ((/* implicit */unsigned int) (~(144516201)));
                arr_150 [i_33] [i_23] [i_33] [i_33] = var_9;
            }
            arr_151 [i_10] [i_23] [i_23] = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
        }
        for (signed char i_36 = 1; i_36 < 19; i_36 += 4) 
        {
            var_56 *= (unsigned char)249;
            arr_154 [i_36] = ((/* implicit */long long int) var_3);
        }
    }
}
