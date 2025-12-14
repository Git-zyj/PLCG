/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16812
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_11 *= ((/* implicit */int) min((8725979779831890840ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
            arr_4 [i_1] = ((/* implicit */unsigned int) min((max((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0])), (var_2)))))), (max((max((((/* implicit */unsigned long long int) 2147483645)), (var_1))), (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_8)))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                var_12 = ((/* implicit */int) (unsigned short)1);
                arr_10 [i_0] [i_2] [i_2 - 1] [i_3] = ((/* implicit */signed char) 1519757672U);
            }
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_13 = ((/* implicit */unsigned long long int) (unsigned short)65534);
                var_14 &= ((/* implicit */unsigned long long int) 4294967295U);
                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (unsigned char)255);
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (unsigned short)65519))));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    var_16 = ((/* implicit */short) (unsigned char)13);
                    var_17 += ((/* implicit */short) (unsigned short)39);
                    var_18 &= ((/* implicit */unsigned int) (_Bool)1);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 15287804727797664461ULL);
                    arr_22 [i_0] [i_0] [i_0] [i_4] [i_0] [i_6] = ((/* implicit */int) 1728483596U);
                    var_19 = ((/* implicit */_Bool) (unsigned short)64216);
                    var_20 = ((/* implicit */signed char) max((var_20), ((signed char)11)));
                    arr_23 [i_0] &= ((/* implicit */short) 26ULL);
                }
            }
            for (long long int i_7 = 3; i_7 < 14; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    var_21 &= ((/* implicit */long long int) (unsigned short)33424);
                    var_22 = ((/* implicit */short) 16364985411364151466ULL);
                    arr_29 [i_8] [i_8] [i_7] [i_7] = ((/* implicit */signed char) (unsigned char)40);
                }
                for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) 4094U);
                        arr_35 [i_2] [i_10] [i_10] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    arr_36 [i_0] [i_2] [i_7] [i_9] = (_Bool)1;
                    arr_37 [i_0] = ((/* implicit */unsigned short) 15896572895711778017ULL);
                }
                for (unsigned char i_11 = 2; i_11 < 14; i_11 += 4) 
                {
                    arr_40 [i_0] [i_2 + 2] [i_0] [i_11] = ((/* implicit */long long int) (unsigned short)65519);
                    var_24 = ((/* implicit */unsigned long long int) (unsigned short)63223);
                }
                /* LoopSeq 2 */
                for (unsigned short i_12 = 1; i_12 < 14; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 1; i_13 < 12; i_13 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) (_Bool)1);
                        arr_46 [i_13] = ((/* implicit */unsigned int) (_Bool)1);
                        var_26 = ((/* implicit */short) (signed char)-1);
                        var_27 = ((/* implicit */int) (signed char)-6);
                        arr_47 [i_0] [i_0] [i_13] [i_0] [i_13] = ((/* implicit */long long int) (unsigned short)33423);
                    }
                    arr_48 [i_12] [i_2] [i_0] = ((/* implicit */unsigned char) (unsigned short)16);
                }
                for (unsigned short i_14 = 3; i_14 < 13; i_14 += 3) 
                {
                    arr_52 [i_0] [i_2] [i_7 + 2] [i_14 + 2] [i_2] [i_0] = ((/* implicit */short) (signed char)-101);
                    arr_53 [i_0] [i_2 + 2] = ((/* implicit */_Bool) (unsigned short)36081);
                    var_28 = ((/* implicit */int) (signed char)31);
                }
                /* LoopSeq 2 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    arr_56 [i_0] [i_0] [i_7 + 2] [i_15] = ((/* implicit */int) 12163848314374072256ULL);
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 1; i_16 < 13; i_16 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) (unsigned short)36265);
                        var_30 -= ((/* implicit */int) (short)-24);
                    }
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (_Bool)0))));
                        var_32 = ((/* implicit */short) 3867767963U);
                    }
                    arr_64 [i_0] [i_2] [i_2] [i_15] = 1558648892;
                    arr_65 [i_0] [i_2] [i_0] [i_7] [i_15] = ((/* implicit */_Bool) 768517412U);
                    arr_66 [13LL] [i_2 + 1] [13LL] [i_15 - 1] = ((/* implicit */int) (unsigned short)44962);
                }
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned short) (short)-26956);
                    arr_70 [(signed char)5] [i_2] [i_7] = ((/* implicit */unsigned int) (short)-16384);
                }
                var_34 *= ((/* implicit */short) 2550171177997773598ULL);
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) 2514145158U))));
            }
            arr_71 [i_0] [i_0] [i_2] &= ((/* implicit */unsigned short) 0U);
        }
        var_36 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)12)), ((short)26935)))), (min((max((var_4), (((/* implicit */unsigned long long int) (unsigned short)29454)))), (min((18446744073709551608ULL), (18428729675200069632ULL)))))));
        arr_72 [i_0] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned short) arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (max((var_1), (((/* implicit */unsigned long long int) (_Bool)1)))))), (min((min((((/* implicit */unsigned long long int) var_2)), (var_8))), (min((var_10), (((/* implicit */unsigned long long int) arr_63 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        arr_73 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_0])), (-1558648893)))), (max((((/* implicit */long long int) var_5)), (1776467452805215640LL)))))), (max((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_5)), (var_9))))))));
    }
    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) min(((short)21033), ((short)20559)))), (max((var_1), (((/* implicit */unsigned long long int) var_7)))))), (max((max((16591288245511261496ULL), (((/* implicit */unsigned long long int) var_6)))), (max((var_8), (((/* implicit */unsigned long long int) -958622593)))))))))));
    var_38 = ((/* implicit */unsigned short) min((max((max((var_8), (((/* implicit */unsigned long long int) (unsigned char)160)))), (max((var_10), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) max((max(((unsigned short)2016), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) min(((short)32767), ((short)-18254)))))))));
}
