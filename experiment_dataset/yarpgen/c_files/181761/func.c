/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181761
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_10 = ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_1 - 1] [i_1]));
            var_11 = ((/* implicit */int) var_0);
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2])) ? (var_9) : (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                var_13 = ((/* implicit */short) ((signed char) ((int) (unsigned char)29)));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)0))));
                var_15 |= ((/* implicit */unsigned long long int) var_1);
            }
            for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                var_16 = ((/* implicit */signed char) (_Bool)0);
                var_17 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (signed char)111))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_1 - 2])) : (((/* implicit */int) (unsigned char)203))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    {
                        var_19 = ((/* implicit */int) ((long long int) (signed char)66));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)21546))));
                            var_21 = ((/* implicit */unsigned long long int) ((long long int) var_0));
                        }
                        var_22 = ((/* implicit */long long int) var_3);
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned char) var_4))) : (((int) 1982806607))));
                            var_24 = ((((/* implicit */_Bool) (signed char)5)) ? (((((/* implicit */int) (short)21546)) << (((arr_8 [i_5] [i_1 - 2] [8] [i_5]) - (13602840093311064730ULL))))) : (((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) arr_17 [i_7] [i_5] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_0])))));
                            var_25 = (i_0 % 2 == 0) ? (((long long int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) - (181)))))) : (((long long int) ((((/* implicit */int) (_Bool)0)) << (((((((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) - (181))) - (27))))));
                            var_26 ^= ((/* implicit */short) var_2);
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 2) 
                        {
                            var_27 = ((((/* implicit */_Bool) arr_10 [i_4] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_10 [i_4] [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) (unsigned char)33)));
                            var_28 -= ((signed char) arr_17 [i_0] [i_8 - 2] [i_4 - 1] [i_1 - 2]);
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_30 = ((/* implicit */int) ((((/* implicit */int) arr_14 [i_8 - 1] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_16 [i_8] [i_8] [i_8 - 1] [i_8 - 2] [(unsigned char)4] [i_4 + 1]))));
                        }
                        for (int i_9 = 2; i_9 < 23; i_9 += 4) 
                        {
                            var_31 = ((/* implicit */int) (short)21546);
                            var_32 = ((/* implicit */unsigned int) arr_24 [i_9] [i_0] [15ULL] [i_5] [(_Bool)1] [(unsigned short)1] [i_1]);
                            var_33 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    }
                } 
            } 
        }
        var_34 |= (unsigned char)53;
    }
    /* LoopNest 2 */
    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    var_35 = ((((/* implicit */int) (!(((/* implicit */_Bool) 1810256582U))))) << (((((/* implicit */int) var_1)) + (66))));
                    /* LoopNest 2 */
                    for (short i_13 = 1; i_13 < 12; i_13 += 2) 
                    {
                        for (int i_14 = 3; i_14 < 14; i_14 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (short)-21547)) ? (8875639756060582432ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))))));
                                var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_4))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 3; i_15 < 13; i_15 += 3) 
                {
                    var_38 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_15 - 2]))));
                    var_39 = arr_39 [i_10] [i_11] [i_15];
                }
                var_40 += var_2;
                var_41 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)52))));
                var_42 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (unsigned short)54987)), (min((((/* implicit */unsigned long long int) (unsigned char)196)), (((9869750843468827867ULL) << (((/* implicit */int) (_Bool)0))))))));
                var_43 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)1536)), ((~(arr_29 [i_10])))));
            }
        } 
    } 
    var_44 += (short)-1537;
    var_45 = ((/* implicit */short) var_5);
    var_46 = ((/* implicit */long long int) (short)1536);
}
