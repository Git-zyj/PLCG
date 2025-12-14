/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186808
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) ((_Bool) var_10)))));
        var_12 = (~(((/* implicit */int) (_Bool)1)));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_0 [(signed char)14]))));
        var_14 = (~(((/* implicit */int) (unsigned char)184)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1])) >> (((((/* implicit */int) arr_0 [i_1])) - (169)))));
        arr_6 [i_1] = ((/* implicit */short) ((unsigned long long int) ((_Bool) arr_3 [i_1])));
        var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) ((unsigned short) var_1))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)245)), (arr_4 [i_1])))))), (arr_3 [i_1])));
        var_16 = ((/* implicit */_Bool) (~(((unsigned long long int) (~(((/* implicit */int) arr_1 [i_1])))))));
        /* LoopSeq 4 */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_10 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_1]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 20; i_4 += 4) 
                {
                    arr_18 [i_4] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_16 [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_16 [i_1])))));
                    arr_19 [i_4] [i_4] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (arr_3 [i_1])));
                    var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_3 + 1])) * (((/* implicit */int) arr_4 [i_3 + 1]))))) + (min((-5473275179111200196LL), (((/* implicit */long long int) arr_3 [i_1]))))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_18 = ((signed char) arr_17 [i_1]);
                            var_19 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_26 [i_6] [i_1] [i_3 - 2] [i_3] [i_2] [i_1] [i_1] = min(((-(arr_13 [i_1] [i_2] [i_3] [i_3 - 1]))), ((+(arr_13 [i_3] [i_3] [i_3] [i_3 + 1]))));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */unsigned long long int) arr_1 [i_3 - 1]);
                arr_27 [i_2] &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3 + 1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_1]))) <= ((-9223372036854775807LL - 1LL))))))), (18446744073709551601ULL)));
            }
            /* vectorizable */
            for (unsigned char i_7 = 2; i_7 < 18; i_7 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) var_0);
                var_22 = ((/* implicit */short) 1055175961877394342ULL);
            }
        }
        for (long long int i_8 = 3; i_8 < 20; i_8 += 4) 
        {
            var_23 += arr_23 [i_1] [i_8] [i_1] [i_1] [i_1] [i_1] [i_1];
            var_24 = ((/* implicit */unsigned long long int) min((min((arr_30 [i_1] [i_8 - 2]), (arr_29 [i_1] [i_1] [i_8] [i_8 - 2]))), (min((arr_29 [i_1] [i_8] [i_1] [i_1]), (arr_30 [i_8 - 3] [i_1])))));
            var_25 *= ((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_12 [i_1] [i_1] [(_Bool)1] [i_1])), (min((var_2), (var_9))))), (((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_8] [i_8 - 1]))));
            var_26 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_8 - 1] [i_8 - 3] [i_8] [i_8 + 1] [i_8 - 2] [i_1] [i_1]))))), (((((/* implicit */_Bool) (-(481154316)))) ? ((~(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8] [i_8 - 2] [i_8 - 3] [i_8 - 1])))))));
            arr_32 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (_Bool)0))))))));
        }
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) var_8);
            arr_35 [i_1] = ((/* implicit */_Bool) ((signed char) min((((int) arr_0 [i_1])), (((((/* implicit */int) var_8)) % (((/* implicit */int) var_1)))))));
            arr_36 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_22 [i_1] [i_9] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) ((unsigned char) 32512U))) : (((/* implicit */int) min((((/* implicit */short) var_5)), (arr_1 [i_1]))))))));
            arr_37 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((var_6) + (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1])) != (((/* implicit */int) arr_17 [i_1])))))));
        }
        /* vectorizable */
        for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (int i_12 = 1; i_12 < 18; i_12 += 2) 
                {
                    for (int i_13 = 3; i_13 < 20; i_13 += 2) 
                    {
                        {
                            arr_48 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ^ (((/* implicit */int) arr_23 [i_1] [i_10] [i_10] [i_11] [i_13 - 1] [i_1] [i_1]))));
                            var_28 = ((/* implicit */unsigned short) (((+(0U))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))));
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_1] [i_13 - 1] [i_12 - 1] [i_12 - 1]))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) arr_8 [i_11]))))))));
                        }
                    } 
                } 
            } 
            arr_49 [i_1] [i_10] = ((/* implicit */_Bool) arr_15 [i_1] [i_10] [i_1] [i_1]);
            var_31 = ((/* implicit */int) arr_40 [i_1] [i_10]);
            var_32 = ((/* implicit */unsigned long long int) (signed char)109);
        }
    }
    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        arr_52 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_23 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) ? (1765848205436443285ULL) : (((/* implicit */unsigned long long int) 8246182070447088462LL))))) ? (min((((/* implicit */unsigned int) 480581306)), (1940177014U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_4 [i_14]))))))) ? (((/* implicit */long long int) var_2)) : (arr_40 [i_14] [i_14])));
        var_33 = ((/* implicit */int) min((var_33), (var_11)));
        arr_53 [i_14] [i_14] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_20 [i_14] [i_14] [i_14] [i_14] [i_14])), (((16680895868273108331ULL) / (((/* implicit */unsigned long long int) arr_47 [i_14] [i_14] [i_14] [i_14] [i_14]))))));
        arr_54 [i_14] = ((/* implicit */_Bool) (signed char)126);
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        arr_58 [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_15])) ? (((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -9223372036854775800LL)))) : (arr_39 [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((short) arr_16 [2ULL])))))));
        arr_59 [i_15] [i_15] |= arr_38 [i_15] [i_15] [i_15];
    }
    var_34 = var_2;
    var_35 |= ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (var_6))) / ((~(var_11)))))));
    var_36 = ((/* implicit */unsigned int) var_0);
}
