/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106889
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
    var_10 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_1)) : (var_9))))) & (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 3) /* same iter space */
        {
            arr_5 [i_0] [(unsigned short)2] [i_1] = ((/* implicit */unsigned short) (+(4294967292U)));
            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
            var_12 -= ((/* implicit */unsigned int) ((long long int) var_9));
            var_13 = ((/* implicit */_Bool) var_9);
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    for (int i_4 = 1; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) 14218240690493711710ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))));
                            var_15 = ((/* implicit */long long int) var_0);
                            arr_13 [i_3] [i_2] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)59337))));
                            var_16 = ((/* implicit */short) ((((/* implicit */int) var_7)) / ((-(var_5)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
        {
            arr_17 [i_5] = ((/* implicit */unsigned long long int) var_3);
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    for (short i_8 = 2; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_28 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                            var_17 = ((/* implicit */int) var_0);
                            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_1)))) ? ((~(var_1))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        }
                    } 
                } 
            } 
            var_19 += ((/* implicit */short) (-((+(((/* implicit */int) var_7))))));
        }
        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            arr_33 [i_0] [i_9] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)255)) : (var_5)));
            var_20 = ((/* implicit */int) var_8);
            arr_34 [i_0] [i_9] = ((/* implicit */short) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32743)))));
            var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (var_9) : (var_9)))));
        }
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_4) | (((/* implicit */int) (unsigned short)65535)))))));
    }
    for (long long int i_10 = 1; i_10 < 10; i_10 += 1) 
    {
        arr_37 [i_10] = ((/* implicit */unsigned int) var_2);
        var_24 = ((/* implicit */int) 3404991081U);
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 11; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                {
                    arr_43 [i_10] = ((/* implicit */_Bool) min((((/* implicit */int) var_7)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
                    var_25 = ((/* implicit */long long int) ((-1831309216623075245LL) <= ((~(((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_1)))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) var_0);
                                var_27 = ((short) max(((-(var_2))), (((/* implicit */unsigned long long int) var_1))));
                                var_28 = ((/* implicit */int) min((((/* implicit */unsigned int) (-(max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1))))))), (max((var_8), (((/* implicit */unsigned int) var_6))))));
                                arr_48 [i_10] [i_11] [i_12] [i_10] [i_14] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))), (var_8))))));
                                var_29 ^= ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned short) max((min((-1862318424), ((+(((/* implicit */int) var_6)))))), (((/* implicit */int) var_0))));
                }
            } 
        } 
    }
    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
    {
        for (short i_16 = 2; i_16 < 7; i_16 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_17 = 1; i_17 < 10; i_17 += 4) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (var_4)));
                    var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) var_4))));
                    arr_57 [i_15] [i_17] [i_17] = ((/* implicit */unsigned int) 2147483647);
                }
                arr_58 [i_15] [i_16] [i_15] &= ((/* implicit */short) (-((+(((var_4) / (((/* implicit */int) var_3))))))));
                arr_59 [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) var_5)) : (var_1))))))));
                var_34 = min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_5)) : (var_8))))))), (2147483647));
                /* LoopNest 3 */
                for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 3) 
                    {
                        for (unsigned long long int i_20 = 2; i_20 < 7; i_20 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) var_6);
                                var_36 = ((/* implicit */unsigned int) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
