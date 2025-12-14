/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184871
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_10 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))) == ((+(((/* implicit */int) arr_0 [i_0 + 1]))))));
        var_11 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_12 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)6144))));
        var_13 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_3 [i_1]))))));
        /* LoopSeq 3 */
        for (unsigned int i_2 = 3; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_14 += ((/* implicit */signed char) arr_6 [i_2]);
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_5 [i_1] [i_1] [i_2]))));
            var_16 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 + 1] [i_2 - 3] [i_2 - 2]))));
            var_17 = ((/* implicit */_Bool) arr_1 [i_2 + 1]);
            var_18 = ((/* implicit */long long int) arr_4 [i_1] [i_2 - 1] [i_2 - 3]);
        }
        for (unsigned int i_3 = 3; i_3 < 21; i_3 += 4) /* same iter space */
        {
            var_19 *= ((/* implicit */long long int) (-((~(arr_8 [i_3 - 3] [i_3 - 3])))));
            var_20 = ((/* implicit */int) arr_2 [i_1]);
            var_21 ^= arr_9 [i_3] [i_1];
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 3) 
                {
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 3) 
                    {
                        {
                            arr_20 [i_1] [i_1 + 1] [i_3] [i_4] [i_5 + 1] [i_5] [i_6 - 1] = ((/* implicit */unsigned char) arr_10 [i_1]);
                            var_22 ^= ((/* implicit */unsigned char) (~(6783079079403293105LL)));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    {
                        var_23 += ((/* implicit */unsigned int) arr_17 [(signed char)22] [i_7] [i_7 + 1] [i_9] [i_7 + 1] [i_9] [i_1]);
                        arr_30 [i_7] [i_7] [i_7] = ((/* implicit */short) arr_29 [i_1] [i_7 + 1] [i_7 + 1] [(unsigned char)18] [i_9]);
                        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_29 [i_1 + 1] [i_7 - 1] [i_9] [i_9] [i_9]))));
                        arr_31 [i_7] = ((/* implicit */short) 676303823);
                    }
                } 
            } 
            var_25 *= ((/* implicit */long long int) arr_2 [i_1]);
        }
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        var_26 = arr_26 [i_10] [i_10] [i_10] [i_10] [i_10];
        var_27 |= ((/* implicit */_Bool) arr_6 [(_Bool)1]);
        /* LoopSeq 1 */
        for (signed char i_11 = 1; i_11 < 13; i_11 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)-64)))))))));
            arr_36 [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6783079079403293110LL))));
        }
        var_29 = ((/* implicit */short) arr_18 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
    }
    var_30 = ((/* implicit */unsigned int) (+(var_6)));
    /* LoopSeq 1 */
    for (int i_12 = 1; i_12 < 11; i_12 += 2) 
    {
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_12 - 1] [i_12 + 1] [i_12] [i_12 + 1] [18] [i_12 + 1]))) == (-6783079079403293105LL)));
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            for (unsigned int i_14 = 2; i_14 < 11; i_14 += 2) 
            {
                {
                    arr_44 [i_12] = ((/* implicit */unsigned char) ((((arr_43 [i_12] [i_12] [i_12]) + (2147483647))) << (((/* implicit */int) (!(((arr_9 [i_13] [i_14 + 1]) != (((/* implicit */int) (signed char)-47)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_15 = 1; i_15 < 10; i_15 += 1) 
                    {
                        arr_47 [i_12 - 1] [11ULL] [i_12] [i_12 + 1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [(signed char)5] [i_14 - 2] [i_12 - 1] [i_12 - 1])) / (((/* implicit */int) arr_29 [(unsigned char)7] [i_13] [i_13] [i_13] [i_13]))));
                        var_32 = ((/* implicit */signed char) arr_33 [i_12 - 1] [i_15]);
                        var_33 = ((/* implicit */signed char) arr_42 [i_12 + 1] [i_13] [i_14]);
                        arr_48 [5LL] [i_12] = ((/* implicit */unsigned short) (~(arr_24 [i_14 - 1] [i_15 + 1] [i_15] [(short)22])));
                    }
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
                        {
                            var_34 *= ((/* implicit */short) arr_17 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12 - 1] [i_12]);
                            var_35 = ((/* implicit */short) arr_26 [i_12] [i_13] [i_14 + 1] [i_14 - 2] [17]);
                            var_36 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-1))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_58 [i_12] [i_13] [i_12] [i_16] [i_12] = ((/* implicit */unsigned short) (signed char)64);
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) arr_43 [i_13] [i_16] [i_16]))));
                            var_38 += ((/* implicit */signed char) arr_23 [i_16]);
                            arr_59 [i_18] [i_18] [i_12] [i_14 - 1] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) arr_32 [i_14]);
                        }
                        var_39 += arr_3 [i_16];
                    }
                }
            } 
        } 
    }
}
