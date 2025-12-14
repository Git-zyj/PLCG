/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165114
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
    var_16 = ((/* implicit */unsigned char) var_11);
    var_17 = (-(((((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))) * ((-(2546886518254443920ULL))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775805LL) : (5344686361853887801LL))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_19 = ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned long long int) ((long long int) var_1))) : (((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : ((~(var_2))))));
            var_20 = ((/* implicit */long long int) (-(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_12))))));
            arr_6 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-82)), (8989057412678389730LL)));
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_21 += min((((/* implicit */unsigned long long int) max(((+(arr_0 [i_1] [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))), (((((/* implicit */_Bool) ((-726838888001306296LL) + (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_2])))))) ? (((/* implicit */unsigned long long int) -9223372036854775787LL)) : (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) arr_2 [i_2])))))));
                arr_9 [i_0] = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_0]);
                var_22 |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) max((var_13), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
            for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)1] [i_1] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -9104810951445296850LL)) ? (26ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0]))))))))));
                var_24 += ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) 405664036)) ? (((/* implicit */unsigned long long int) 1481916491U)) : (14395567176946743878ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))));
            }
            /* vectorizable */
            for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                arr_14 [i_0] [i_1] [i_1 + 2] [i_0] = (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4])) ? (((/* implicit */long long int) arr_10 [i_0])) : (8989057412678389730LL))));
                arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((short) arr_7 [i_4 - 1] [i_4] [i_0] [i_0]));
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) -994323036)) / (((arr_12 [i_0] [i_1] [i_4 + 1] [i_4 - 1]) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (-8989057412678389730LL)))));
                var_25 *= ((/* implicit */signed char) var_15);
                /* LoopSeq 2 */
                for (long long int i_5 = 3; i_5 < 10; i_5 += 3) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_4] [i_0])) ? (((unsigned long long int) var_15)) : (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_0] [i_1] [i_4] [i_1]))))))));
                    var_27 &= ((/* implicit */_Bool) (signed char)97);
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_5] [i_1 - 1] [i_0])))))));
                    var_29 = (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) (+(var_4)))));
                }
                for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_0] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4 + 1] [i_0])))));
                        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1341198019)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) > (((/* implicit */unsigned long long int) arr_10 [i_6]))));
                        var_31 |= (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((unsigned int) arr_13 [i_0] [i_0] [i_4 - 1] [i_4 - 1]))) : (((-1306530247430820200LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                        var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7] [i_6] [i_4 - 1] [i_1 + 1])) ? (((int) var_12)) : (((/* implicit */int) var_0))));
                    }
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_5))));
                        var_34 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        arr_29 [i_8] [i_1] [i_1] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (8989057412678389733LL) : (((/* implicit */long long int) arr_10 [i_0]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (arr_27 [i_4] [i_4 - 1] [i_4 + 1] [i_1 + 1] [i_1 + 2]) : (((/* implicit */unsigned long long int) arr_19 [i_1 + 2] [(_Bool)1] [i_6] [i_4 - 1]))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_11) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_1 - 1] [i_4] [i_4] [i_4] [i_6] [i_9])))))) ? (((-2034898975393939811LL) ^ (arr_26 [i_9] [i_0] [i_4] [i_1] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_37 = ((/* implicit */long long int) (~(((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        var_38 = ((/* implicit */_Bool) (~(5344686361853887801LL)));
                        var_39 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_6] [i_1 - 1])) : (((/* implicit */int) var_9)))) + (((/* implicit */int) arr_17 [i_4 + 1] [i_4 + 1] [i_1] [i_0]))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) arr_24 [i_1 + 2] [i_4] [i_1 + 2] [4ULL]))));
                        var_41 = ((/* implicit */long long int) arr_27 [i_0] [i_1] [i_4] [i_6] [i_11]);
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_1))))) ? (((var_15) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (arr_26 [i_11] [i_6] [i_4] [i_1] [i_0]))) : (((/* implicit */long long int) -405664039))));
                        var_43 = ((/* implicit */int) 5224006224863962828LL);
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(-8989057412678389733LL)))) ? (arr_8 [i_11] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_11] [i_6] [i_1 + 2] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)18179))))))))));
                    }
                }
            }
        }
        var_45 = ((/* implicit */_Bool) var_7);
    }
    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_13 = 2; i_13 < 11; i_13 += 3) 
        {
            var_46 = ((/* implicit */_Bool) var_13);
            var_47 = ((/* implicit */signed char) min((max((min((((/* implicit */long long int) var_13)), (8707181576514280007LL))), (((/* implicit */long long int) ((var_7) > (((/* implicit */long long int) ((/* implicit */int) var_14)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_12])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_42 [i_12] [i_13 + 2] [i_12])))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_14 = 1; i_14 < 12; i_14 += 3) 
            {
                var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((6532808118713599755ULL) / (((/* implicit */unsigned long long int) -2034898975393939834LL))))) ? (((/* implicit */int) (short)18166)) : (((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 2 */
                for (unsigned char i_15 = 1; i_15 < 10; i_15 += 3) 
                {
                    var_49 = ((/* implicit */short) ((arr_43 [i_14]) / (((/* implicit */int) arr_37 [i_15 + 3]))));
                    arr_47 [i_14] [i_13] [i_15 + 2] = arr_40 [i_14];
                    var_50 += ((/* implicit */unsigned char) 2901538279549063191ULL);
                    var_51 = ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((((/* implicit */long long int) arr_43 [i_12])) / (arr_46 [i_15 + 3] [i_14] [i_14] [(unsigned char)3]))) : (((var_7) / (((/* implicit */long long int) var_5)))));
                }
                for (long long int i_16 = 0; i_16 < 13; i_16 += 1) 
                {
                    var_52 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_45 [i_12] [i_13 + 2]))));
                    var_53 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) (short)-18166)))));
                    /* LoopSeq 3 */
                    for (signed char i_17 = 2; i_17 < 11; i_17 += 3) 
                    {
                        arr_53 [i_12] [i_12] = ((/* implicit */unsigned short) (short)-18197);
                        var_54 = ((/* implicit */short) (+(arr_51 [i_17 + 2] [i_14 - 1] [i_13 - 2] [i_14])));
                    }
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        var_55 += ((/* implicit */long long int) var_9);
                        var_56 = ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_16] [i_18 - 1]))) : (arr_49 [i_12] [i_13] [i_14 + 1] [i_16]));
                        var_57 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_38 [i_18 - 1]))))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 10388514353941171863ULL))) ^ (((/* implicit */int) (short)-1655))));
                        var_59 = ((/* implicit */unsigned int) (+(arr_46 [i_14 + 1] [i_13] [i_19] [i_13])));
                        var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_45 [i_14] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_58 [i_14 + 1] [i_13])))))));
                    }
                }
                var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_49 [i_13 - 2] [i_13 - 2] [i_14 - 1] [i_13 - 2]))));
            }
        }
        for (unsigned char i_20 = 1; i_20 < 12; i_20 += 3) 
        {
            var_62 = ((unsigned char) (_Bool)1);
            arr_64 [i_12] [i_20 - 1] [i_20] = ((/* implicit */unsigned long long int) ((unsigned char) (~(arr_42 [i_20 - 1] [i_20 + 1] [i_12]))));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_63 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((arr_65 [i_12]), (((/* implicit */unsigned char) var_3)))))) + (var_6)))) ? (((/* implicit */unsigned long long int) (+(((1042279293U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) : ((+(arr_50 [i_21])))));
            var_64 ^= ((((/* implicit */_Bool) arr_59 [i_12] [i_12] [i_12] [i_12])) ? (var_4) : (arr_44 [i_12] [i_21] [i_12]));
        }
        arr_67 [i_12] &= ((/* implicit */_Bool) (-(((/* implicit */int) min(((short)16986), ((short)-1655))))));
        var_65 = ((/* implicit */unsigned char) min(((_Bool)1), (var_15)));
        var_66 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-14)) ? (15545205794160488431ULL) : (2901538279549063191ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_54 [i_12] [i_12] [i_12] [i_12] [i_12])) && (((/* implicit */_Bool) arr_37 [i_12]))))) : (((/* implicit */unsigned long long int) arr_54 [i_12] [i_12] [i_12] [i_12] [i_12]))));
        var_67 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)1638))));
    }
    var_68 = ((/* implicit */unsigned char) var_15);
}
