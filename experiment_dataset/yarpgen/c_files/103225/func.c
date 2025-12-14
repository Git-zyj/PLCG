/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103225
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) ((arr_0 [i_0 - 1] [i_0 + 4]) % (((/* implicit */long long int) arr_1 [i_0 - 1]))));
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (short)-23349)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                var_20 *= (!(((/* implicit */_Bool) arr_2 [i_0 - 1])));
                var_21 = ((/* implicit */unsigned char) ((-1467147403) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47825)))))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_3))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (1897031106) : (1467147403)))) ? (((/* implicit */int) arr_6 [i_3] [i_1] [1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (arr_0 [i_0] [i_0]))))));
            }
            for (short i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) (+(arr_1 [i_0 - 1])));
                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((1467147425) - (1467147411))))))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_12 [i_0 + 1] [(_Bool)1] [i_4] [i_0 + 4])) : (((((/* implicit */int) arr_12 [i_0 + 4] [i_1] [i_1] [i_0 + 4])) >> (((((/* implicit */int) arr_11 [i_0 + 4] [i_1] [i_4])) + (29744)))))));
            }
        }
        for (unsigned char i_5 = 4; i_5 < 14; i_5 += 4) 
        {
            arr_17 [i_5 - 2] [i_0 + 4] = (+((~(((/* implicit */int) arr_13 [i_0 + 3] [i_5] [i_0 + 4] [i_5])))));
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                for (signed char i_7 = 3; i_7 < 16; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 16; i_8 += 4) 
                    {
                        {
                            arr_25 [i_8] [i_7 - 3] [i_6] [i_5 + 2] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_8] [i_6])) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_8] [i_0 + 2])) : (((/* implicit */int) arr_11 [i_0 + 3] [i_8] [i_0 + 2]))));
                            arr_26 [i_0 + 3] [i_8] [i_6] [i_7] [i_8 + 1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_2)) % (((/* implicit */int) (short)(-32767 - 1))))));
                            var_27 = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) arr_6 [i_0] [i_8] [i_8 - 1])));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_3))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            arr_30 [i_0 - 1] [i_9] [i_9] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) (signed char)1)))));
            arr_31 [i_0] [i_0 + 3] = var_8;
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 2; i_11 < 16; i_11 += 1) 
            {
                for (short i_12 = 3; i_12 < 16; i_12 += 3) 
                {
                    {
                        var_29 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_28 [(signed char)1] [i_11 - 1] [i_12])))));
                        arr_40 [i_0] [i_0 + 3] [i_11] [i_0 + 4] = ((/* implicit */unsigned int) ((signed char) arr_0 [i_0 + 4] [i_11 + 1]));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))) == (arr_37 [12])));
            var_31 = (~(arr_18 [i_0 + 1] [i_0 + 2] [i_10] [i_10]));
            arr_41 [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 4] [i_0 + 1] [i_0]))));
        }
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) * (13ULL)))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) arr_39 [(unsigned short)14]))));
    }
    for (unsigned int i_13 = 4; i_13 < 22; i_13 += 4) 
    {
        arr_45 [i_13 + 2] [i_13 - 3] = ((/* implicit */short) max((((((((/* implicit */_Bool) arr_42 [i_13 - 3])) ? (((/* implicit */unsigned long long int) arr_43 [i_13 - 4] [i_13])) : (var_16))) - (((/* implicit */unsigned long long int) ((7U) - (((/* implicit */unsigned int) arr_43 [i_13 - 1] [23]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((arr_43 [i_13] [i_13]) << (((-1467147404) + (1467147404))))))))));
        arr_46 [i_13] &= ((/* implicit */signed char) (-(((arr_42 [i_13 - 4]) * (arr_42 [i_13 - 4])))));
        /* LoopNest 2 */
        for (unsigned char i_14 = 2; i_14 < 22; i_14 += 2) 
        {
            for (short i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                {
                    var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)72))) : (arr_51 [i_13 - 1] [i_14] [i_14]))), (((/* implicit */long long int) max((arr_42 [i_13 + 2]), (((/* implicit */unsigned int) (signed char)-123)))))))) * (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_48 [i_13]))))), ((((_Bool)1) ? (7958268574881019163ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_13 - 3])))))))));
                    var_34 = min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_15) : (arr_51 [i_13] [i_14] [i_14])))))), (((_Bool) ((-1467147404) < (((/* implicit */int) arr_49 [i_13 + 2] [i_14] [i_15]))))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            {
                                var_35 = (unsigned short)32256;
                                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (min((max((arr_44 [i_14] [i_14]), (((/* implicit */unsigned int) arr_50 [(signed char)18])))), (arr_44 [i_13] [i_13 - 2]))) : (arr_44 [i_13] [i_13]))))));
                                arr_58 [i_13 + 1] [i_14] [i_15] [i_16] [i_17] [i_14] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))) ? (max((((/* implicit */unsigned int) var_0)), (arr_44 [i_17] [i_13 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [20LL] [20LL] [23LL]))))))))));
                            }
                        } 
                    } 
                    arr_59 [i_13] [i_13] = ((/* implicit */short) var_5);
                }
            } 
        } 
    }
    var_37 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (var_9)))))));
}
