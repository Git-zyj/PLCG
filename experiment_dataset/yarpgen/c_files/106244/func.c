/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106244
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
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) 11992981479141770219ULL);
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)250);
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 3; i_2 < 9; i_2 += 4) 
            {
                arr_9 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0 - 2]);
                arr_10 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)238);
                arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) ((long long int) var_10));
                arr_12 [i_0] = ((/* implicit */unsigned short) ((int) var_3));
            }
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) != (arr_2 [i_3]))))))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (3113968062U) : (((/* implicit */unsigned int) arr_16 [i_0 - 1] [i_0] [i_0 - 3] [i_0]))));
                var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_16 = ((/* implicit */int) (unsigned char)185);
                var_17 = (+((-9223372036854775807LL - 1LL)));
            }
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (+(-98023471))))));
            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 3]));
        }
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_19 = ((/* implicit */long long int) ((unsigned char) ((long long int) arr_6 [i_0] [1LL] [i_0])));
            var_20 = ((/* implicit */signed char) (unsigned char)70);
        }
        for (unsigned short i_5 = 4; i_5 < 10; i_5 += 3) 
        {
            arr_23 [i_0] [(unsigned char)0] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_16 [i_0] [i_5] [i_0] [i_5])))) + (2203860449709947609LL)));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 1; i_7 < 7; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) arr_2 [i_0]);
                            arr_32 [i_0] [i_5] [i_5] [i_7] [i_0] = (~(0U));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            arr_37 [i_0] = ((arr_0 [i_0]) - (arr_0 [i_0]));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    {
                        var_22 = ((/* implicit */long long int) var_2);
                        var_23 = ((/* implicit */unsigned long long int) (~(-1096701408)));
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((int) (!((_Bool)1))));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (+(arr_18 [i_0] [i_0 - 3] [(_Bool)1]))))));
                            var_26 ^= ((/* implicit */_Bool) -15);
                            var_27 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_9] [i_10] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_0 - 2] [i_9] [i_10] [i_10] [(unsigned char)5] [i_12] [i_12]))) : (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 2])));
                        }
                        for (unsigned char i_13 = 3; i_13 < 8; i_13 += 2) 
                        {
                            var_28 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_0] [i_9] [i_0] [i_0] [i_13] [i_9] [(short)9])) | (arr_36 [i_0 - 3] [i_11])));
                            arr_46 [i_0] [i_9] [i_10] [i_0] [i_11] [i_13 + 2] [i_13] = ((/* implicit */long long int) (unsigned char)36);
                            arr_47 [i_0] [8U] [8U] [i_11] [i_13] = ((/* implicit */long long int) var_3);
                        }
                        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) 1212195005))));
                            var_30 = ((((/* implicit */_Bool) ((short) 2884804185U))) ? (arr_42 [i_0] [i_9] [i_10] [(short)9] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_6)))));
                            arr_50 [i_0] [i_10] [i_11] [i_11] = ((int) 798702788263214513LL);
                        }
                    }
                } 
            } 
            arr_51 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)2783)) ? (((/* implicit */int) (_Bool)1)) : (1212194996)));
        }
    }
    /* vectorizable */
    for (unsigned char i_15 = 1; i_15 < 15; i_15 += 4) 
    {
        var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))));
        /* LoopNest 3 */
        for (long long int i_16 = 0; i_16 < 17; i_16 += 2) 
        {
            for (unsigned short i_17 = 3; i_17 < 15; i_17 += 3) 
            {
                for (long long int i_18 = 1; i_18 < 15; i_18 += 4) 
                {
                    {
                        arr_60 [2] [i_15] [i_16] [i_16] [i_17] [13U] = ((/* implicit */_Bool) arr_56 [i_15]);
                        /* LoopSeq 2 */
                        for (short i_19 = 1; i_19 < 16; i_19 += 2) 
                        {
                            arr_64 [i_16] [6LL] [i_17] [i_17] [i_16] [i_16] &= ((/* implicit */unsigned char) (unsigned short)62753);
                            arr_65 [i_18] [i_15] [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 9007199187632128LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)185))))));
                            var_32 -= ((((/* implicit */_Bool) arr_62 [i_17 - 2] [i_18] [i_18] [10LL] [i_18] [i_18 + 1])) ? (arr_54 [i_15 - 1] [i_17 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 3) 
                        {
                            arr_70 [i_15] [i_15] [i_18] [i_17] [2LL] = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
                            arr_71 [i_15] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_57 [i_17 - 3])) : (((/* implicit */int) (signed char)0))));
                        }
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)0)) ? (var_8) : (((/* implicit */long long int) 4294967289U))))))));
    var_34 = ((/* implicit */unsigned int) 8876592693647928880LL);
}
