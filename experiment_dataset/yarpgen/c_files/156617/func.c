/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156617
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1]))))) && (arr_0 [i_1] [i_0])));
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), (min((((/* implicit */unsigned short) arr_0 [i_1] [i_0])), (var_1))))))));
                arr_8 [i_0] = ((/* implicit */short) (+(((var_10) << (((((/* implicit */int) arr_4 [i_0])) + (160)))))));
                arr_9 [i_0] [i_1] = arr_6 [i_1];
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
    {
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24290)) ? ((~(((/* implicit */int) min(((signed char)-1), ((signed char)-8)))))) : (((/* implicit */int) (unsigned short)32645))));
        arr_14 [i_2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-26202)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)12))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) /* same iter space */
    {
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned long long int) var_7);
        var_12 = ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        var_13 *= ((/* implicit */_Bool) ((arr_21 [i_4]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_4]))));
        /* LoopSeq 1 */
        for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
        {
            var_14 = ((/* implicit */_Bool) arr_15 [i_5]);
            var_15 = ((/* implicit */unsigned long long int) min((var_15), (var_8)));
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_4] [i_5])) >> (((((((((/* implicit */_Bool) (signed char)(-127 - 1))) || (arr_26 [i_4] [i_8] [i_7] [i_7]))) ? ((~(((/* implicit */int) arr_30 [i_4] [i_7] [i_6] [i_7] [i_8])))) : (((arr_10 [i_4]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_28 [i_4] [i_5] [i_6] [i_7] [i_8] [i_8])))))) + (29)))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_17 [2ULL] [2ULL])))))) % (((((/* implicit */_Bool) (signed char)54)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_5] [i_8]))) - (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_8]))))))))));
                            arr_31 [i_7] [i_5] [i_6] [i_8] = ((/* implicit */signed char) ((((((/* implicit */int) arr_25 [i_4] [i_5 - 1])) == (((/* implicit */int) (short)-24290)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((var_10) >> (((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) & (((var_10) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1)))))))));
                            arr_32 [i_7] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)50298)) == ((+(((((/* implicit */int) (signed char)64)) & (((/* implicit */int) (short)19904))))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
            {
                {
                    arr_38 [i_10] [i_9] [i_4] [i_4] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)13)) ? (17150606762903192937ULL) : (arr_5 [i_10] [i_9] [i_4])))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) var_4))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 18; i_11 += 2) 
                    {
                        arr_42 [i_4] [i_9] [i_10] [i_11] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_29 [i_10] [i_10] [i_9] [i_11 + 1] [i_11] [i_11 - 1])) >= (((/* implicit */int) arr_29 [i_11] [i_11] [i_9] [i_11 - 2] [i_11] [i_11 + 1])))));
                        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_39 [i_10] [i_11 - 1] [i_11] [i_11 - 2] [i_11 - 2]))));
                    }
                    for (signed char i_12 = 0; i_12 < 19; i_12 += 1) 
                    {
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_4] [i_9] [i_10] [i_9] [i_12])) || (((/* implicit */_Bool) var_0))))))))));
                        var_20 = ((/* implicit */signed char) arr_26 [i_4] [i_9] [i_10] [i_12]);
                        var_21 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 3; i_13 < 16; i_13 += 3) 
    {
        arr_48 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_4))), (var_6)))) ? ((-((+(var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-55)), (arr_25 [i_13] [i_13])))))));
        arr_49 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [(short)14] [i_13]))))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32645))))) : ((-(arr_2 [i_13])))))) ? (max((max((((/* implicit */unsigned long long int) (unsigned short)8415)), (arr_6 [i_13]))), (((/* implicit */unsigned long long int) min((var_9), (arr_4 [i_13])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_13] [i_13] [8ULL] [i_13] [i_13] [i_13])))));
        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_13] [i_13 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_13] [i_13] [i_13] [i_13] [i_13])))) / (((/* implicit */int) min((((unsigned short) (short)24305)), (((/* implicit */unsigned short) (short)-24306)))))));
    }
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) var_7))));
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((max((max((14292732633293325250ULL), (var_6))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-2)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))))), (((/* implicit */unsigned long long int) var_3)))))));
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(((/* implicit */int) var_1)))))));
}
