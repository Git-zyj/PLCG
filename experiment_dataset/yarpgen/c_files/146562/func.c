/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146562
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
    var_16 += ((/* implicit */long long int) var_10);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_2 [i_0] = ((/* implicit */long long int) (unsigned short)25264);
        var_18 ^= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-117))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) arr_3 [(_Bool)1] [(_Bool)1]);
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 4294967295U)) ? ((~(arr_6 [i_1] [i_2]))) : (536870911U)))));
            var_19 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967294U))));
            /* LoopNest 3 */
            for (unsigned int i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 1521905781U)), (8214818973947100050ULL))) & (max((((arr_4 [i_1]) >> (((((/* implicit */int) arr_15 [i_1] [i_1] [(unsigned char)10] [i_1] [i_1])) - (64))))), (((/* implicit */unsigned long long int) (signed char)115))))));
                            var_21 &= ((/* implicit */long long int) (signed char)(-127 - 1));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_1 + 1])) ? (((/* implicit */int) arr_16 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_16 [i_6] [i_1 + 1] [i_6]))));
            var_23 -= ((/* implicit */unsigned char) arr_17 [i_1] [i_1] [i_1] [i_6] [i_6] [i_1]);
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~((~(((/* implicit */int) arr_11 [i_1] [(unsigned char)12] [i_1] [(unsigned char)12] [i_1])))))))));
            var_25 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)0))));
            arr_20 [i_1 + 1] [i_6] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)209)) & (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min(((short)-28299), (((/* implicit */short) (signed char)73))))), (max((18446744073709551615ULL), (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)132))) : (562949953421311ULL)))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (int i_9 = 2; i_9 < 19; i_9 += 1) 
                {
                    {
                        arr_27 [i_1] [i_8] [(short)19] = ((/* implicit */unsigned char) max((max(((_Bool)1), ((!(((/* implicit */_Bool) arr_13 [i_1] [i_9] [i_7] [i_9 + 1])))))), ((_Bool)0)));
                        var_27 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)41)) : (min(((~(((/* implicit */int) arr_12 [i_1] [(unsigned char)19] [i_1] [i_8] [i_7])))), (((/* implicit */int) (short)-15))))));
                        arr_28 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)158))));
                    }
                } 
            } 
            var_28 -= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1182709572U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-100))))) ? ((+(arr_17 [i_1 + 1] [i_7] [i_7] [i_1 + 1] [i_7] [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104)))))));
        }
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1 + 1]), (min(((signed char)-7), ((signed char)14))))))));
            arr_31 [i_1] = ((/* implicit */signed char) (unsigned char)185);
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 20; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 2) 
                {
                    {
                        arr_36 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-125)), (610374299U)))) ? (min((arr_6 [i_1] [i_11]), (((/* implicit */unsigned int) (signed char)43)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_1] [1ULL] [i_1]))))))), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_23 [2LL] [2LL] [i_12])) / (((/* implicit */int) arr_10 [i_1] [i_10] [i_10] [i_10])))))))));
                        var_30 = ((/* implicit */_Bool) ((((((/* implicit */int) ((arr_32 [i_1] [i_10] [i_1] [i_12]) && (((/* implicit */_Bool) arr_22 [i_1 + 1] [i_10]))))) / (((/* implicit */int) arr_14 [i_1] [i_10] [(unsigned char)9] [i_12] [i_11])))) >> (((((/* implicit */int) (signed char)-98)) + (98)))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            for (long long int i_14 = 1; i_14 < 18; i_14 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)255))));
                    arr_42 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-122))))) ? (min((9001489893716155502LL), (((/* implicit */long long int) (unsigned char)245)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11171))) : (2639728159U))))))) ? (min((2412267671U), (((/* implicit */unsigned int) (short)-32759)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) min((arr_14 [(unsigned char)1] [i_13] [(signed char)12] [i_14 + 1] [i_13]), (((/* implicit */unsigned char) (_Bool)1))))))))));
                    var_32 &= ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) -1691709493)), (arr_29 [i_1 + 1])))));
                    var_33 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1 + 1]))));
                }
            } 
        } 
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_34 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) arr_44 [i_15] [i_15]))))));
        arr_45 [i_15] [i_15] = ((/* implicit */unsigned short) max((((((((/* implicit */int) arr_43 [i_15])) + (2147483647))) >> (((/* implicit */int) ((arr_44 [i_15] [i_15]) || (((/* implicit */_Bool) 2639728177U))))))), (((/* implicit */int) (((+(9223372036854775795LL))) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
    }
    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
    {
        var_35 = ((/* implicit */_Bool) max(((~(max((((/* implicit */long long int) 4294967283U)), (9001489893716155483LL))))), (((/* implicit */long long int) arr_19 [i_16] [i_16]))));
        arr_48 [i_16] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_24 [i_16] [i_16] [i_16] [i_16])) ? (arr_17 [i_16] [i_16] [i_16] [1U] [i_16] [i_16]) : (arr_17 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))), (arr_17 [i_16] [i_16] [i_16] [i_16] [i_16] [16U])));
        var_36 = ((/* implicit */unsigned long long int) arr_37 [i_16]);
    }
    var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)24264))));
}
