/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179458
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) var_6)), ((+(((/* implicit */int) var_12))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [(_Bool)1] [i_1])) ? ((~(arr_4 [i_1 + 2] [(unsigned short)8] [i_1 + 2]))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1] [(_Bool)1] [i_2])) ? (arr_4 [i_1 - 2] [(short)0] [i_2]) : (arr_4 [i_1 + 2] [(unsigned short)8] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 += ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)10))), (((var_3) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                                arr_10 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 0LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) arr_6 [(signed char)8] [(signed char)8]);
        var_20 = ((/* implicit */long long int) max((var_20), (((long long int) ((unsigned long long int) min((((/* implicit */long long int) -1273661710)), (-4793866063946579410LL)))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    arr_18 [i_5] [i_6] [i_7] [i_6] = ((/* implicit */short) ((arr_11 [i_7]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5])))));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_5]))));
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_22 = var_12;
                        var_23 = ((/* implicit */unsigned long long int) ((signed char) (short)-20977));
                        var_24 = ((/* implicit */unsigned int) ((unsigned short) arr_15 [i_7] [i_6] [i_7]));
                        var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
                    {
                        arr_25 [i_9] [i_9] [i_9] [i_5] = ((/* implicit */short) (~(((/* implicit */int) arr_22 [i_6] [i_7] [i_9]))));
                        arr_26 [i_5] [i_6] [i_9] = ((/* implicit */unsigned int) ((signed char) (-(((/* implicit */int) (short)-20977)))));
                        var_26 = ((/* implicit */unsigned long long int) arr_23 [i_5] [5U] [i_5] [i_5] [i_5] [i_5]);
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (var_1)));
                            var_28 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) var_12)))));
                        }
                        for (signed char i_12 = 1; i_12 < 19; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */int) arr_33 [i_5] [i_7] [i_12]);
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) arr_12 [i_12 - 1] [i_12 - 1]))));
                            var_31 = ((/* implicit */unsigned int) ((int) arr_27 [i_10] [i_12 + 1]));
                        }
                        var_32 = var_4;
                        var_33 = ((/* implicit */long long int) ((unsigned short) var_12));
                    }
                    arr_34 [i_6] [i_7] = ((/* implicit */unsigned int) arr_33 [i_5] [i_5] [i_5]);
                }
            } 
        } 
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_10)))) ? (((var_0) | (var_10))) : (((/* implicit */long long int) var_2)))))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            var_35 = ((/* implicit */long long int) (-(var_2)));
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_13] [i_13] [i_5] [i_5])) ^ (((/* implicit */int) arr_16 [i_5] [i_5] [i_5] [i_5]))));
            var_37 += ((/* implicit */signed char) arr_15 [i_5] [i_5] [i_13]);
        }
        var_38 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5]))));
        arr_38 [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_19 [i_5] [i_5] [15LL] [i_5] [i_5])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [19LL] [19LL])))))));
    }
    for (long long int i_14 = 3; i_14 < 14; i_14 += 1) 
    {
        var_39 = ((/* implicit */unsigned short) max((min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))), (((/* implicit */int) ((short) (+(((/* implicit */int) arr_20 [i_14] [i_14] [i_14] [i_14]))))))));
        arr_43 [i_14] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((219456888U), (((/* implicit */unsigned int) arr_12 [i_14] [i_14]))))))) ? (((((/* implicit */_Bool) arr_37 [i_14 + 1] [i_14 - 1])) ? (arr_37 [i_14 + 1] [i_14 - 1]) : (arr_37 [i_14 + 1] [i_14 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_39 [i_14] [i_14 - 1]), (arr_39 [i_14] [i_14 - 2])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (int i_16 = 1; i_16 < 12; i_16 += 3) 
            {
                for (unsigned short i_17 = 0; i_17 < 15; i_17 += 1) 
                {
                    {
                        var_40 = ((/* implicit */unsigned long long int) var_2);
                        var_41 = ((/* implicit */unsigned int) arr_29 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]);
                    }
                } 
            } 
        } 
        var_42 = ((/* implicit */long long int) (!((_Bool)0)));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 336540453U))));
        arr_55 [i_18] = ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_54 [i_18] [i_18])))), (((/* implicit */int) arr_54 [i_18] [i_18])))));
        var_44 = ((/* implicit */unsigned long long int) (+(336540453U)));
    }
    var_45 = ((/* implicit */long long int) ((((/* implicit */int) var_14)) / (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) var_6)) : (907073989)))));
}
