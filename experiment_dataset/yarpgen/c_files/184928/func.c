/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184928
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((((/* implicit */unsigned int) (-(arr_0 [i_0] [i_0])))) ^ (((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_16 *= ((/* implicit */_Bool) var_13);
            var_17 = ((/* implicit */unsigned char) arr_3 [i_0]);
            var_18 |= ((/* implicit */signed char) arr_1 [i_0]);
        }
        for (unsigned short i_2 = 1; i_2 < 6; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 9; i_4 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_4] [i_3] [i_2] [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_14 [i_0] [i_2 + 2] [i_2] [i_3] [i_4 - 2] [i_5] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
                            arr_15 [i_0] [i_4 - 1] [i_0] [i_0] [i_5] [i_3] [i_2] = ((/* implicit */unsigned char) var_4);
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_8 [i_2] [i_2])))) : ((~(((/* implicit */int) var_3)))))))));
                            var_20 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_2 + 2] [i_2 + 2] [i_4 - 2])) ? (((/* implicit */int) (short)-4968)) : (((/* implicit */int) var_9))))) == (((unsigned int) var_4))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                        {
                            arr_20 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) (((+(var_12))) + (((/* implicit */int) var_6))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_2 [i_6]))) <= ((~(((/* implicit */int) arr_3 [i_0]))))));
                            var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            var_23 = ((/* implicit */_Bool) ((unsigned long long int) var_4));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) var_7);
                            var_25 &= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) + ((-(arr_21 [i_7])))));
                            var_26 &= ((((arr_22 [i_0] [i_2] [(_Bool)0] [i_4] [i_7]) + (2147483647))) >> (((((((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_2 + 1] [i_3] [i_2 + 1] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))) - (101))));
                        }
                        var_27 *= ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_13 [i_4] [i_3] [i_2] [i_0] [i_0])))) ^ (((((/* implicit */int) var_6)) | (arr_22 [i_2] [i_2] [i_3] [i_3] [i_3])))));
                    }
                } 
            } 
            var_28 = ((/* implicit */int) ((var_1) - (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_2 + 3])))));
            /* LoopSeq 1 */
            for (signed char i_8 = 2; i_8 < 8; i_8 += 1) 
            {
                var_29 = ((/* implicit */unsigned short) arr_2 [i_2 + 1]);
                var_30 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_0] [i_0])))));
                var_31 = ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (arr_1 [i_8])))));
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_30 [i_0] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) : (arr_18 [i_9] [i_0]))));
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                var_32 = ((/* implicit */short) ((arr_18 [i_10] [i_9]) >> ((~(((/* implicit */int) var_10))))));
                var_33 |= ((/* implicit */signed char) ((long long int) arr_10 [(_Bool)0] [i_10]));
            }
            var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [(unsigned char)2] [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))) : (arr_2 [i_0])));
        }
        for (short i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            arr_36 [i_0] = ((/* implicit */unsigned long long int) var_5);
            var_35 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0] [(unsigned short)3] [i_0] [i_0] [i_11])) << (((((/* implicit */int) var_6)) - (111)))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 1; i_12 < 9; i_12 += 2) 
            {
                for (unsigned short i_13 = 2; i_13 < 9; i_13 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_36 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_12 - 1] [i_13 - 2] [i_12 - 1] [i_13 - 1])) ? (arr_39 [i_12 + 1] [i_13 - 2] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_13]) >> (((((/* implicit */int) arr_7 [i_14] [i_13] [i_12] [i_11])) - (53)))))) ? (((((arr_24 [i_0] [i_0] [i_14]) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_0] [i_11] [i_12 + 1] [i_13 - 2])) - (51))))) : (((((/* implicit */int) var_13)) * (((/* implicit */int) arr_25 [i_0] [i_11]))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_12 + 1])) + (((/* implicit */int) arr_8 [i_0] [i_12 + 1]))));
                            var_39 -= var_13;
                            arr_48 [i_0] [i_0] [i_12 - 1] [(unsigned char)9] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_22 [i_11] [i_12 + 1] [i_13 + 1] [i_13 - 1] [i_15]) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
                            var_40 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_14)) - (7384)))))) ? ((+(arr_0 [i_11] [i_13]))) : ((~(((/* implicit */int) var_9))))));
                        }
                        var_41 = ((_Bool) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) (short)28452))));
                    }
                } 
            } 
            arr_49 [i_0] [i_0] = ((/* implicit */_Bool) arr_31 [i_0] [i_0]);
        }
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_52 [i_16]) + (2147483647))) >> (((/* implicit */int) (!((_Bool)1))))))) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) arr_47 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)25806)))) : (((/* implicit */int) ((((/* implicit */int) arr_28 [i_16])) > (((/* implicit */int) var_7))))))) : (((/* implicit */int) var_14))));
        var_43 &= (~(((((/* implicit */_Bool) arr_37 [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_50 [i_16] [i_16])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))));
    }
    var_44 = ((/* implicit */unsigned char) var_12);
}
