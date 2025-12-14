/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153436
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_0])))) > (((/* implicit */int) arr_2 [i_0])))))));
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_0))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) arr_0 [i_1]);
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_3 [i_3])))) << (((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))) - (221ULL)))));
                    var_14 = ((unsigned int) ((((/* implicit */int) arr_6 [i_2] [i_2] [i_3])) > (((/* implicit */int) arr_6 [i_1] [i_2] [i_1]))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) + (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                    var_15 = ((/* implicit */unsigned short) ((((unsigned int) arr_10 [i_1] [i_2] [i_3] [i_2])) << (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_3])) > (((/* implicit */int) arr_10 [i_3] [i_3] [i_2] [i_1])))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_4] [i_4] [i_4]) << (((var_5) - (1512146758852510018ULL)))))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4]))) : (arr_7 [i_4] [i_4] [i_4])))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 2) 
            {
                for (unsigned int i_7 = 4; i_7 < 14; i_7 += 2) 
                {
                    {
                        arr_24 [i_4] [i_5] [i_5] = ((/* implicit */signed char) max((arr_7 [i_7 + 1] [i_6 - 1] [i_6]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) var_1))))))))));
                        var_16 = ((/* implicit */signed char) (((+(var_4))) << (((((/* implicit */int) arr_19 [i_4] [i_5] [i_6] [i_7])) - (102)))));
                    }
                } 
            } 
        } 
        var_17 = (-(((max((var_8), (((/* implicit */unsigned long long int) var_0)))) - (((/* implicit */unsigned long long int) arr_11 [i_4] [i_4] [i_4] [i_4])))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            arr_29 [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_8] [i_8 - 2] [i_8])) ? (arr_21 [i_8 + 3] [i_8 + 3] [i_8 + 3]) : (arr_27 [i_8] [i_8 + 3] [i_9])));
            arr_30 [i_9] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_9]))))) / (arr_27 [i_8] [i_8 + 3] [i_8 + 4])));
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_8 - 2])) / (((/* implicit */int) var_9))));
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            for (unsigned short i_11 = 1; i_11 < 10; i_11 += 4) 
            {
                {
                    arr_36 [i_10] [i_10] [i_11] [i_11] = ((/* implicit */signed char) var_8);
                    arr_37 [i_10] [i_10] [i_8] [i_10] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_14 [i_10])) + (((/* implicit */int) var_7))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_8] [i_8 + 1] [i_11])) * (((/* implicit */int) arr_6 [i_8] [i_8 + 4] [i_11]))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (arr_7 [i_11] [i_10] [i_8]))) : (((/* implicit */unsigned long long int) arr_11 [i_8 + 1] [i_11 - 1] [i_11] [i_11]))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned int i_12 = 2; i_12 < 24; i_12 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) / ((~(arr_41 [i_12])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_39 [i_12 - 2])))) : ((~(var_2)))));
        var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_39 [i_12 + 1]) > (arr_39 [i_12 + 1]))))) > (var_8)));
    }
    for (unsigned int i_13 = 1; i_13 < 18; i_13 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 1) 
            {
                var_23 *= ((var_2) << (((((/* implicit */int) arr_38 [i_13 - 1])) - (78))));
                var_24 = ((((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_13 + 1])) ? (arr_48 [i_13 + 1] [i_13 + 1] [i_13]) : (var_2));
                var_25 = ((/* implicit */unsigned char) ((((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_14] [i_13]))))) << (((((/* implicit */int) arr_42 [i_14])) - (217)))));
                var_26 = ((unsigned long long int) ((unsigned int) var_3));
            }
            var_27 = (+(((arr_48 [i_13 + 1] [i_13] [i_13]) + (arr_48 [i_13] [i_14] [i_14]))));
            arr_49 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_13])))));
        }
        /* LoopNest 2 */
        for (unsigned int i_16 = 3; i_16 < 16; i_16 += 1) 
        {
            for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((arr_54 [i_16]) > (((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13]))) / (var_0))))) ? (var_1) : (((unsigned int) arr_44 [i_17]))));
                    var_29 = ((unsigned char) ((((/* implicit */_Bool) arr_53 [i_16 + 1] [i_16 - 3])) ? (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_13]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_39 [i_16 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) max((var_0), (var_2)))) : (((unsigned long long int) arr_39 [i_16 + 3]))));
                }
            } 
        } 
        arr_55 [i_13] [i_13] = ((/* implicit */unsigned int) ((((arr_40 [i_13 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_13 + 1] [i_13]))))) / (((unsigned long long int) arr_51 [i_13 - 1] [i_13]))));
    }
    var_31 = ((/* implicit */unsigned int) var_7);
    var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) * (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((var_2), (((/* implicit */unsigned int) var_9))))))) * (((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((unsigned long long int) var_3)) : (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned long long int) var_3))))))));
    var_33 = ((/* implicit */unsigned short) ((unsigned long long int) var_2));
}
