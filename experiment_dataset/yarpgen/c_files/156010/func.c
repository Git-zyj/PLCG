/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156010
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
    var_20 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_3) : (var_1)))))))));
    var_21 = ((/* implicit */short) var_7);
    var_22 -= ((/* implicit */short) (!(((/* implicit */_Bool) -2128206394))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_23 = min((var_3), ((~(arr_0 [i_0 - 1]))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_1])))) & (((((/* implicit */_Bool) 18446739675663040512ULL)) ? (((/* implicit */int) arr_4 [i_0 + 3] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1]))) ^ (((arr_0 [i_0 + 4]) ^ (arr_0 [i_0 + 3])))));
            arr_8 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) var_0);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((long long int) var_6)) - (((/* implicit */long long int) (+(var_16)))))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_2])) ? (arr_9 [i_0 - 1] [i_0]) : (arr_9 [i_0 + 3] [i_0])));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
        {
            arr_14 [i_0] |= ((/* implicit */unsigned char) (signed char)0);
            arr_15 [i_0] [i_3] = ((/* implicit */unsigned long long int) var_18);
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                arr_18 [i_4] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_3])) ? (var_0) : (((/* implicit */long long int) var_10))))) && ((!(((/* implicit */_Bool) var_15)))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 1; i_5 < 23; i_5 += 1) 
                {
                    arr_21 [i_5] [i_3] = ((/* implicit */short) arr_3 [i_3]);
                    arr_22 [i_4] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-24278))));
                }
                for (unsigned int i_6 = 1; i_6 < 22; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 2; i_7 < 23; i_7 += 3) 
                    {
                        arr_27 [i_0] [i_3] [i_4] [i_6] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_7 + 2] [i_7] [i_7])) ? (((/* implicit */int) ((unsigned char) arr_24 [i_3] [i_3] [i_4] [i_6]))) : (((/* implicit */int) ((unsigned char) (unsigned char)15)))));
                        arr_28 [i_0] = ((/* implicit */int) arr_24 [i_7 - 2] [i_6 + 1] [i_0 - 1] [i_0]);
                    }
                    arr_29 [i_0] [i_3] [i_4] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0 + 2] [i_4]))));
                    arr_30 [i_0] [i_3] [i_4] [i_6] [i_3] = ((/* implicit */unsigned char) ((short) arr_23 [i_0] [i_0 + 4] [i_0] [i_4] [i_0] [i_6 + 2]));
                }
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_12))))) ? ((+(var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775789LL)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) arr_24 [i_4] [i_3] [i_3] [i_0])))))));
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 3; i_9 < 24; i_9 += 2) 
                    {
                        var_27 += ((/* implicit */_Bool) arr_36 [i_4] [i_4] [i_0] [i_0 + 3] [i_0] [i_0]);
                        var_28 = ((/* implicit */short) (~(((/* implicit */int) var_19))));
                    }
                    var_29 *= ((/* implicit */unsigned short) ((unsigned char) arr_4 [i_3] [i_0 - 1]));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_0] [i_3] [i_8] [i_4] [i_8] [i_4] [i_4])) ? ((-(((/* implicit */int) arr_16 [i_0] [i_8] [i_3] [i_3])))) : (((/* implicit */int) var_5))));
                }
                for (short i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    arr_40 [i_0] [i_3] [i_4] [i_10] = ((/* implicit */unsigned long long int) ((signed char) arr_38 [i_0] [i_4] [i_0 + 3] [i_4] [i_4]));
                    arr_41 [i_0] [i_3] [i_4] [i_10] = ((unsigned char) arr_11 [i_0 + 1]);
                    arr_42 [i_3] = ((/* implicit */long long int) ((short) ((int) var_18)));
                }
            }
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_19 [i_0] [i_0] [i_0 - 1] [i_3])) != (var_18)));
            var_32 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
        }
        arr_43 [i_0] [i_0] = ((short) arr_20 [i_0] [i_0] [i_0] [i_0]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            arr_46 [i_0] [i_11] [i_11] = ((/* implicit */unsigned short) var_7);
            arr_47 [i_0] [i_11] = ((/* implicit */long long int) ((short) (+(((/* implicit */int) (_Bool)1)))));
            var_33 = ((/* implicit */_Bool) arr_2 [i_0 + 3]);
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_50 [i_12] [i_12] = ((/* implicit */long long int) arr_25 [i_0] [i_0] [i_12] [i_12] [i_12]);
            arr_51 [i_12] = ((/* implicit */short) (signed char)-8);
        }
    }
    var_34 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_18) : (var_18)))) ? (((((/* implicit */_Bool) var_3)) ? (2047LL) : (var_0))) : (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))))));
}
