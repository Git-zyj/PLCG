/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112678
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) < (var_2))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (9916)))))) ^ ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)9601))) : (var_9)))));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (short)9608))));
        arr_6 [(short)4] = ((/* implicit */long long int) arr_4 [i_1]);
        arr_7 [i_1 + 3] = ((/* implicit */_Bool) ((short) var_5));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_12 ^= ((/* implicit */long long int) var_6);
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] [(unsigned short)8] [i_1] [i_1 + 3] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [(unsigned short)7] [i_4])) || (((/* implicit */_Bool) var_7)))))));
                        arr_17 [i_1] [i_2] [i_3] [4LL] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 3] [(short)6] [i_1])) % (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_18 [i_1 + 1] [i_1 + 3] = ((/* implicit */short) ((unsigned int) var_4));
        }
        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                arr_24 [(signed char)5] [i_5] [i_6] [(signed char)5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) 594514580U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_1 - 1]))));
                var_13 += ((/* implicit */short) ((arr_8 [i_1 + 2]) == (((/* implicit */long long int) var_8))));
                arr_25 [i_1 + 1] [(_Bool)1] [i_6] [i_6] = ((/* implicit */short) ((3644442774U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        arr_30 [(_Bool)1] [(_Bool)1] [(unsigned short)0] [(_Bool)1] [i_6] [i_6] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-9592)) | (((/* implicit */int) (short)-9599))));
                        var_14 = var_6;
                    }
                    for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        var_15 = ((/* implicit */_Bool) (signed char)-20);
                        arr_33 [3LL] [i_6] [(unsigned short)1] [i_9] = ((/* implicit */unsigned int) var_6);
                        arr_34 [(signed char)9] [8U] [i_6] [8U] [i_5] = ((/* implicit */unsigned char) (signed char)96);
                        var_16 = ((/* implicit */signed char) var_8);
                    }
                    for (unsigned char i_10 = 2; i_10 < 7; i_10 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (unsigned char)51)))) == (((/* implicit */int) (short)-32572))));
                        arr_37 [i_5] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 0U))));
                        arr_38 [i_1] [i_1] [2U] [i_1 + 1] [i_1] [(short)0] [i_6] = ((/* implicit */long long int) (signed char)97);
                        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)9591))));
                    }
                    arr_39 [7LL] [i_6] [i_6] [i_6] [i_6] [0U] = ((/* implicit */_Bool) ((unsigned short) var_5));
                }
                var_19 += ((/* implicit */long long int) (~(var_2)));
            }
            var_20 |= ((/* implicit */short) max((((arr_23 [i_1 + 1] [i_1 + 2] [i_1 + 2]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (unsigned short)8184))));
            arr_40 [i_1] [(short)1] [i_5] = ((/* implicit */long long int) (short)32767);
        }
        for (long long int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((_Bool) arr_22 [i_1 - 1] [i_11] [10U] [i_11]))), (min((var_5), (((/* implicit */unsigned short) var_1))))));
            arr_43 [i_11] [(signed char)1] = ((/* implicit */long long int) max((max((max((3445070116U), (((/* implicit */unsigned int) (short)32575)))), (min((((/* implicit */unsigned int) var_4)), (849897179U))))), (((/* implicit */unsigned int) ((short) 3445070117U)))));
            arr_44 [i_1] = ((/* implicit */signed char) 65534LL);
        }
        arr_45 [(signed char)4] = ((/* implicit */unsigned int) (unsigned short)48121);
    }
    for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        arr_49 [(signed char)3] [i_12] = ((/* implicit */long long int) ((((((849897176U) + (var_2))) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (849897176U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_48 [i_12])) != (((((/* implicit */int) min((var_5), (((/* implicit */unsigned short) (short)-29666))))) - ((-(((/* implicit */int) (short)18723))))))));
    }
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
    {
        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 10; i_15 += 2) 
            {
                {
                    var_23 = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 1; i_16 < 9; i_16 += 3) 
                    {
                        arr_60 [i_16 + 1] [i_16] [i_16] [i_13] = ((/* implicit */unsigned int) ((signed char) (-(300476741U))));
                        var_24 = ((/* implicit */unsigned int) ((_Bool) 4294967295U));
                    }
                }
            } 
        } 
    } 
    var_25 -= ((/* implicit */unsigned short) 4294967295U);
    /* LoopNest 3 */
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
        {
            for (long long int i_19 = 0; i_19 < 25; i_19 += 3) 
            {
                {
                    arr_69 [i_17] [i_17] |= ((/* implicit */signed char) 6U);
                    var_26 = ((/* implicit */long long int) max((((((/* implicit */int) (unsigned char)22)) & (((/* implicit */int) var_1)))), (((/* implicit */int) var_4))));
                    arr_70 [(short)17] [i_18] [i_18] [i_19] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (650524548U))), (var_2)));
                    var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((max((arr_66 [i_17] [18LL] [i_17]), (((/* implicit */short) (_Bool)1)))), ((short)-16037)))), (0U)));
                    arr_71 [(signed char)2] [i_18] [i_17] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) min((arr_65 [i_17] [(unsigned char)12]), (((/* implicit */unsigned int) (_Bool)1))))), (var_0))), (((/* implicit */long long int) var_8))));
                }
            } 
        } 
    } 
}
