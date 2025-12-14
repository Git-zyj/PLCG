/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106493
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)96);
            var_13 = ((/* implicit */unsigned short) var_10);
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 20; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                {
                    arr_17 [i_0] [i_2] [i_2] [i_4] = ((/* implicit */unsigned char) var_10);
                    var_14 = ((/* implicit */unsigned int) var_9);
                    var_15 = ((/* implicit */int) var_1);
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((unsigned char) ((_Bool) var_0)));
                        arr_20 [i_5] [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) var_5);
                        arr_21 [i_0] [i_2] [i_3] [i_4] [i_5] [i_5] [16] &= ((/* implicit */signed char) var_7);
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) -1488258100);
                        var_18 = ((/* implicit */unsigned short) var_6);
                        arr_25 [i_0] [i_2] [i_2] [i_3] [i_4] [i_4] [i_6] = ((signed char) var_2);
                    }
                    var_19 = ((/* implicit */_Bool) ((int) (unsigned short)42050));
                }
                for (signed char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((short) (short)-16576)))));
                    var_21 = ((/* implicit */unsigned short) -8746120867567434334LL);
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((long long int) ((signed char) var_5)));
                        var_23 = ((/* implicit */unsigned char) ((_Bool) 8504603979399494402ULL));
                    }
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                    {
                        arr_36 [i_2] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((short) var_0)));
                        var_24 = ((/* implicit */int) var_9);
                        var_25 += ((/* implicit */_Bool) (short)-21765);
                        var_26 = ((/* implicit */unsigned int) ((unsigned short) (signed char)(-127 - 1)));
                    }
                }
                for (signed char i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    arr_39 [i_0] [i_2] [i_3] [i_10] [i_2] [i_0] = ((/* implicit */long long int) var_7);
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 22; i_11 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) var_10))));
                        var_28 = ((/* implicit */_Bool) (signed char)34);
                    }
                    for (int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_2] [i_0] = (unsigned short)63;
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) var_9))));
                    }
                    arr_45 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
                }
                var_30 = ((/* implicit */_Bool) ((unsigned short) var_0));
                /* LoopSeq 2 */
                for (short i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    arr_48 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */int) ((_Bool) 9942140094310057239ULL));
                    /* LoopSeq 4 */
                    for (long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */int) max((var_31), (-1386321301)));
                        var_32 = ((/* implicit */unsigned short) ((long long int) (unsigned short)18936));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((_Bool) var_7)))));
                    }
                    for (short i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_34 += ((/* implicit */signed char) (unsigned char)4);
                        var_35 += ((/* implicit */signed char) var_3);
                        var_36 = ((/* implicit */unsigned int) (unsigned char)224);
                    }
                    for (signed char i_16 = 0; i_16 < 22; i_16 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned short) var_1);
                        var_38 = ((signed char) ((unsigned long long int) var_3));
                    }
                    for (short i_17 = 1; i_17 < 19; i_17 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((_Bool) var_11)))));
                        var_40 = ((short) (unsigned char)199);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 2; i_18 < 18; i_18 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned short) var_8);
                        var_42 = ((/* implicit */long long int) ((short) 2087541334U));
                        var_43 = ((/* implicit */_Bool) ((unsigned short) (short)-21765));
                    }
                }
                for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    arr_66 [i_2] [i_2] = ((/* implicit */short) 2207425961U);
                    var_44 = ((/* implicit */_Bool) ((long long int) ((short) var_9)));
                }
                /* LoopSeq 3 */
                for (unsigned char i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    var_45 |= ((/* implicit */signed char) ((long long int) var_8));
                    var_46 = ((/* implicit */_Bool) var_9);
                }
                for (signed char i_21 = 1; i_21 < 20; i_21 += 1) 
                {
                    arr_71 [i_2] [i_2] [i_3] [i_21] = ((/* implicit */signed char) var_0);
                    /* LoopSeq 2 */
                    for (signed char i_22 = 0; i_22 < 22; i_22 += 3) 
                    {
                        arr_74 [i_2] [i_2] = ((/* implicit */unsigned long long int) 2087541336U);
                        arr_75 [i_2] = ((/* implicit */unsigned short) var_6);
                        arr_76 [i_2] [i_21] [i_3] [i_2] [i_2] = ((/* implicit */short) var_7);
                    }
                    for (signed char i_23 = 0; i_23 < 22; i_23 += 2) 
                    {
                        var_47 = ((/* implicit */_Bool) ((unsigned char) 36028797018963964ULL));
                        var_48 = ((/* implicit */long long int) var_3);
                    }
                    /* LoopSeq 2 */
                    for (signed char i_24 = 0; i_24 < 22; i_24 += 4) 
                    {
                        arr_81 [i_0] [i_2] [i_3] [i_24] = ((signed char) ((signed char) var_3));
                        var_49 -= ((/* implicit */unsigned char) ((unsigned short) ((_Bool) var_7)));
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((unsigned char) (unsigned short)24856))));
                        var_51 = ((/* implicit */int) var_6);
                        var_52 = ((/* implicit */unsigned short) ((unsigned char) var_9));
                    }
                }
                for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                {
                    var_53 = ((/* implicit */unsigned long long int) (signed char)-41);
                    arr_88 [i_0] [i_3] [i_3] [i_2] = var_4;
                    var_54 = var_8;
                    arr_89 [i_0] [i_2] [i_0] [i_26] = ((/* implicit */int) var_7);
                }
                arr_90 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_7);
            }
            for (unsigned char i_27 = 2; i_27 < 20; i_27 += 1) /* same iter space */
            {
                arr_93 [i_2] = ((/* implicit */signed char) 2147483628);
                arr_94 [i_0] [i_0] [i_2] [i_27] = ((/* implicit */_Bool) var_2);
                /* LoopSeq 1 */
                for (short i_28 = 0; i_28 < 22; i_28 += 4) 
                {
                    var_55 = (short)-32750;
                    var_56 &= ((/* implicit */unsigned long long int) ((unsigned int) (signed char)-39));
                    /* LoopSeq 2 */
                    for (signed char i_29 = 1; i_29 < 21; i_29 += 1) 
                    {
                        var_57 = ((/* implicit */int) ((_Bool) var_8));
                        arr_100 [i_2] = ((/* implicit */_Bool) var_9);
                        var_58 *= ((/* implicit */unsigned long long int) var_9);
                        var_59 = ((/* implicit */unsigned short) var_10);
                    }
                    for (unsigned char i_30 = 0; i_30 < 22; i_30 += 3) 
                    {
                        var_60 = ((_Bool) var_9);
                        var_61 = ((/* implicit */long long int) (short)25815);
                    }
                }
            }
            for (unsigned char i_31 = 2; i_31 < 20; i_31 += 1) /* same iter space */
            {
                var_62 -= var_4;
                var_63 = ((/* implicit */int) (_Bool)1);
            }
            for (unsigned short i_32 = 0; i_32 < 22; i_32 += 1) 
            {
                arr_109 [i_32] [i_2] [i_0] = ((/* implicit */signed char) var_5);
                var_64 = ((/* implicit */_Bool) var_9);
                /* LoopSeq 2 */
                for (unsigned char i_33 = 1; i_33 < 21; i_33 += 2) 
                {
                    var_65 = (short)31;
                    /* LoopSeq 3 */
                    for (signed char i_34 = 1; i_34 < 20; i_34 += 2) 
                    {
                        var_66 &= ((/* implicit */signed char) var_1);
                        var_67 = ((/* implicit */unsigned long long int) (signed char)89);
                        var_68 *= ((/* implicit */unsigned int) var_10);
                    }
                    for (unsigned long long int i_35 = 3; i_35 < 21; i_35 += 1) 
                    {
                        var_69 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)199));
                        arr_118 [i_0] [i_2] [i_35] [i_2] [i_35] = ((/* implicit */_Bool) ((int) (_Bool)1));
                    }
                    for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                    {
                        var_70 = ((/* implicit */unsigned short) ((_Bool) var_0));
                        arr_122 [i_2] = ((/* implicit */long long int) var_8);
                        var_71 += ((/* implicit */signed char) var_12);
                        var_72 = ((/* implicit */_Bool) var_7);
                    }
                }
                for (unsigned char i_37 = 0; i_37 < 22; i_37 += 3) 
                {
                    var_73 = var_12;
                    var_74 = ((/* implicit */unsigned short) ((unsigned int) var_4));
                    var_75 = ((/* implicit */unsigned short) var_2);
                    var_76 &= ((/* implicit */int) var_1);
                    var_77 = ((/* implicit */_Bool) var_2);
                }
            }
            var_78 = ((/* implicit */unsigned short) min((var_78), (((/* implicit */unsigned short) ((signed char) var_12)))));
        }
    }
    var_79 = ((/* implicit */signed char) ((_Bool) var_0));
    var_80 = ((/* implicit */int) min((var_80), (((/* implicit */int) (short)25815))));
    /* LoopSeq 1 */
    for (unsigned long long int i_38 = 0; i_38 < 17; i_38 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_39 = 0; i_39 < 17; i_39 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_40 = 0; i_40 < 17; i_40 += 1) 
            {
                arr_132 [i_38] [i_38] [i_38] = ((/* implicit */unsigned short) (_Bool)1);
                var_81 &= (unsigned short)47864;
                var_82 &= ((/* implicit */short) ((unsigned char) (short)(-32767 - 1)));
                var_83 = ((/* implicit */long long int) ((_Bool) var_10));
            }
            var_84 -= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) var_1)));
        }
        for (unsigned long long int i_41 = 0; i_41 < 17; i_41 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_42 = 0; i_42 < 17; i_42 += 2) 
            {
                var_85 -= ((/* implicit */_Bool) ((unsigned short) ((unsigned char) (_Bool)1)));
                /* LoopSeq 1 */
                for (unsigned short i_43 = 0; i_43 < 17; i_43 += 4) 
                {
                    var_86 *= ((/* implicit */_Bool) var_0);
                    var_87 = ((/* implicit */signed char) ((short) ((unsigned long long int) ((short) (short)9527))));
                }
            }
            for (unsigned char i_44 = 1; i_44 < 16; i_44 += 3) 
            {
                arr_145 [i_38] [i_41] [i_41] [i_38] = ((/* implicit */unsigned short) var_5);
                var_88 &= ((/* implicit */long long int) (_Bool)1);
            }
            arr_146 [i_38] [i_38] [i_38] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) ((unsigned char) 18446744073709551615ULL))));
            /* LoopSeq 1 */
            for (unsigned int i_45 = 2; i_45 < 15; i_45 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_46 = 0; i_46 < 17; i_46 += 4) 
                {
                    var_89 = ((/* implicit */unsigned char) ((unsigned long long int) -421630761));
                    var_90 = ((/* implicit */long long int) var_8);
                }
                arr_152 [i_38] = ((/* implicit */signed char) var_1);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_47 = 2; i_47 < 13; i_47 += 4) 
            {
                arr_156 [i_47] [i_38] [i_38] = ((/* implicit */short) ((long long int) (short)32212));
                var_91 = ((/* implicit */_Bool) ((int) ((_Bool) var_12)));
                arr_157 [i_38] [i_41] [i_47] [i_38] = ((/* implicit */short) var_10);
            }
        }
        var_92 = ((/* implicit */signed char) min((var_92), (((/* implicit */signed char) ((_Bool) 837142032U)))));
    }
    var_93 *= ((/* implicit */short) -20);
}
