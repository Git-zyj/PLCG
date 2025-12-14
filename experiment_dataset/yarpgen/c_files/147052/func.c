/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147052
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
    var_10 *= ((/* implicit */long long int) ((2489643242U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_11 = ((/* implicit */long long int) 3134517822U);
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-10850)), (4294967295ULL)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3134517809U)) && (((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))))))));
        var_12 = ((/* implicit */unsigned char) 18446744069414584319ULL);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_13 *= ((/* implicit */unsigned int) var_5);
                        var_14 = ((/* implicit */int) 18446744069414584319ULL);
                        var_15 = ((/* implicit */unsigned char) var_9);
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_21 [i_7] [i_5] = ((/* implicit */short) max((min((arr_12 [i_4 + 4] [i_4 - 1]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (18446744069414584321ULL))))));
                        var_16 = ((/* implicit */unsigned char) arr_13 [i_4]);
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0U)) ? (18446744069414584299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_4]))))) - (((/* implicit */unsigned long long int) (+(var_6))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-9223372036854775803LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
        /* LoopSeq 2 */
        for (short i_8 = 4; i_8 < 23; i_8 += 2) 
        {
            var_18 = var_9;
            arr_24 [i_4] [i_4] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) 908991716))) ^ (((((var_7) + (2147483647))) << (((((var_7) + (1993618098))) - (22)))))))) ? (max((min((((/* implicit */unsigned long long int) var_9)), (var_8))), (((/* implicit */unsigned long long int) arr_19 [i_4] [i_4 - 1] [i_4] [i_4 - 1] [i_4])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8] [i_8] [i_4])))));
        }
        for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_18 [i_9] [i_4]) || (((/* implicit */_Bool) var_2)))))) : (max((1075382274U), (((/* implicit */unsigned int) arr_18 [i_4] [i_9]))))))), (((((((/* implicit */_Bool) (signed char)64)) ? (18446744069414584312ULL) : (18446744069414584305ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_13 [i_4]))))))));
            arr_28 [i_4] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((((4294967295U) << (((var_6) - (3033301060U))))) - (4160749568U)))))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) 0U)) & (var_8)))) : (max((((((/* implicit */_Bool) var_4)) ? (4294967295ULL) : (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) -1519152237))))));
        }
    }
    for (long long int i_10 = 1; i_10 < 16; i_10 += 4) 
    {
        arr_32 [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (short)-10143)) : (arr_15 [i_10 + 2])))) ? (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) 70368744177663ULL))))) : (((((/* implicit */int) arr_16 [i_10 + 1] [i_10] [i_10])) & (((/* implicit */int) (unsigned short)46606)))));
        var_20 &= ((/* implicit */unsigned char) arr_16 [i_10] [i_10] [i_10]);
        /* LoopNest 2 */
        for (long long int i_11 = 1; i_11 < 17; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_13 = 1; i_13 < 18; i_13 += 4) 
                    {
                        var_21 = ((/* implicit */int) 1160449470U);
                        arr_40 [i_10] [i_10] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */int) (!(((((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_10] [i_11] [i_12] [i_10] [i_13] [i_10]))))) >= (((unsigned int) arr_13 [i_10]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        var_22 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) arr_39 [i_10] [i_11] [i_12] [i_14] [i_14])))));
                        var_23 &= ((/* implicit */unsigned char) 4220576580U);
                        var_24 *= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) % (3219585017U))) << (((((/* implicit */int) arr_19 [i_10 + 3] [i_10 + 1] [i_11] [i_11] [i_11 + 1])) + (121)))));
                        arr_43 [i_14] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1519152227)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10] [i_14])))));
                    }
                    var_25 = ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (signed char)8))));
                }
            } 
        } 
        arr_44 [i_10] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_33 [i_10 - 1] [i_10] [i_10 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_33 [i_10 + 2] [i_10] [i_10 - 1]))), (min((((/* implicit */long long int) var_1)), (arr_33 [i_10 + 3] [i_10] [i_10 + 2])))));
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_38 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]))));
    }
    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
    {
        var_27 = ((/* implicit */unsigned int) max((((((int) (signed char)-9)) % (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_15] [i_15] [i_15]))))) : (((/* implicit */int) (unsigned short)65526))))));
        arr_49 [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)10328)), (1519152254)))), (((((/* implicit */_Bool) (unsigned short)4095)) ? (11680173611686288440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53555)))))))) ? (((/* implicit */int) ((((arr_12 [i_15] [i_15]) + (((/* implicit */unsigned long long int) arr_48 [i_15])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65513), (((/* implicit */unsigned short) (short)27264))))))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)53316)) + (((/* implicit */int) arr_19 [i_15] [i_15] [i_15] [i_15] [i_15]))))))));
        var_28 = ((/* implicit */signed char) arr_18 [i_15] [i_15]);
    }
}
