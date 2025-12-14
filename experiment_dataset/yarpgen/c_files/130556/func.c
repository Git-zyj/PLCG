/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130556
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned char) arr_0 [i_0] [i_0]));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) / (16349327518855238922ULL))))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 2; i_2 < 13; i_2 += 1) 
        {
            arr_8 [10LL] [10LL] [i_1] |= ((/* implicit */short) arr_3 [i_1] [i_2]);
            var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_2)))) ? (0LL) : (((((/* implicit */_Bool) (unsigned char)64)) ? (-24LL) : (arr_7 [i_1]))))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) << (((((((var_1) + (2147483647))) << (((((-46100717) + (46100748))) - (28))))) - (1517869848))))))));
            /* LoopNest 3 */
            for (signed char i_4 = 2; i_4 < 14; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */int) arr_16 [i_3] [i_5] [i_5] [i_3])) : (((/* implicit */int) arr_14 [i_6 - 1] [i_1] [i_1] [i_1])))))));
                            var_15 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_4 + 2] [i_5] [i_1] [i_5] [i_1]))));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] = (!(((/* implicit */_Bool) var_10)));
                        }
                    } 
                } 
            } 
            arr_18 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */short) ((arr_12 [i_1] [i_7] [i_1] [i_1 - 1]) + (((/* implicit */int) ((signed char) arr_6 [i_1] [i_1])))));
            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((var_1) % (arr_4 [i_1]))))))));
            var_18 = ((/* implicit */int) (unsigned short)31729);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            arr_25 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1]))) ^ ((-9223372036854775807LL - 1LL)))))));
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        {
                            arr_33 [i_1] [i_8] [i_9] [i_8] [i_9] = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                            arr_34 [i_11] [i_1] [i_1] [i_1] = ((arr_12 [i_10] [i_8] [i_1] [i_10]) == (arr_12 [i_10] [i_11] [i_1] [i_8]));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (((~(arr_27 [i_8] [i_10]))) == (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                            var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_10)))) : (((arr_7 [i_11]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned short) arr_11 [i_1 - 2] [i_1] [i_1 + 1] [i_1 - 1])))));
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 15; i_12 += 2) 
        {
            for (long long int i_13 = 1; i_13 < 12; i_13 += 2) 
            {
                {
                    arr_41 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_15 [i_13 + 1] [i_1] [i_1] [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 16; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_3))) ? (((/* implicit */int) arr_38 [i_1] [i_12] [i_13 + 3] [i_14])) : (((/* implicit */int) (unsigned short)24))));
                                arr_47 [i_1] [i_13] [i_1] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((unsigned char) (signed char)-60));
                }
            } 
        } 
        var_24 -= ((/* implicit */short) (+(arr_7 [i_1 - 2])));
        arr_48 [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1 - 2])) * (arr_26 [i_1] [i_1 - 2] [i_1])));
    }
    for (int i_16 = 0; i_16 < 25; i_16 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((short) 0LL)))));
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((arr_50 [i_16]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_49 [i_16])))) : (min((12842408662465701292ULL), (140600049401856ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-1LL)))) ? (((/* implicit */int) arr_49 [i_16])) : (((/* implicit */int) arr_50 [i_16]))))))))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */unsigned int) 12)), (var_6)))))));
    }
    var_28 = ((/* implicit */long long int) ((unsigned char) var_5));
    var_29 -= ((/* implicit */long long int) var_8);
    var_30 = ((/* implicit */long long int) var_5);
}
