/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106486
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
    var_16 = ((/* implicit */unsigned char) var_4);
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)840)) & (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) var_1)))))))));
    var_18 = ((/* implicit */unsigned char) -907868575088226428LL);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_19 += ((/* implicit */long long int) ((unsigned long long int) var_11));
            var_20 |= ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)59198)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_12)))));
            var_21 *= ((/* implicit */unsigned short) var_3);
            var_22 = ((-907868575088226428LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))));
        }
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_23 = ((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2]);
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) -8408160703823873083LL))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                var_25 = ((/* implicit */unsigned int) var_0);
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned int) -907868575088226428LL)))));
                arr_9 [i_0] [i_0] [i_0] = max(((-(((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_12))))), (((/* implicit */long long int) var_2)));
                var_27 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((signed char) var_3))) ^ (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) arr_3 [i_0] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_3])))))), (((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 3; i_4 < 10; i_4 += 3) 
            {
                arr_13 [i_2] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_4 + 1]))));
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    for (long long int i_6 = 2; i_6 < 8; i_6 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((unsigned short) ((unsigned long long int) arr_8 [i_0] [i_2] [i_5]))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0] [i_2] [i_0] [i_6 + 2])) + (((/* implicit */int) arr_10 [i_2] [i_2] [i_0] [i_6 + 3]))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (arr_16 [i_0] [i_2] [i_2] [i_4] [i_5] [i_5] [i_6]))))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (+(((((/* implicit */int) var_11)) ^ (((/* implicit */int) (unsigned char)148)))))))));
                        }
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */unsigned char) arr_6 [i_4 - 2] [i_4] [i_4 - 1]);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (unsigned char i_8 = 1; i_8 < 8; i_8 += 2) 
                    {
                        {
                            var_32 += ((/* implicit */int) var_2);
                            var_33 = ((/* implicit */unsigned char) (_Bool)1);
                        }
                    } 
                } 
            }
            for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_10 = 3; i_10 < 10; i_10 += 1) 
                {
                    arr_33 [i_10] [i_0] [(_Bool)1] = ((/* implicit */_Bool) 5343807368916404183ULL);
                    var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) arr_14 [i_9] [i_10 - 2] [i_10 - 2] [i_10 - 2]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_14 [i_0] [i_10 - 1] [i_10 - 1] [i_10 - 2]))));
                }
                for (unsigned char i_11 = 2; i_11 < 10; i_11 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        arr_39 [i_0] [i_2] [i_0] [i_11] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) -25333685728938188LL)), (max((((/* implicit */unsigned long long int) (unsigned char)57)), (4723732974053583549ULL)))));
                        arr_40 [i_0] [i_2] [i_9] [i_11 + 1] [i_12] = (_Bool)0;
                        arr_41 [i_0] [i_0] [i_0] [i_11] [i_0] = ((/* implicit */unsigned short) ((short) -683446860));
                        var_35 *= ((/* implicit */unsigned int) var_13);
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */int) (unsigned short)29972);
                        arr_44 [i_0] [i_2] [i_13] [i_13] |= ((/* implicit */unsigned int) var_3);
                    }
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((_Bool) 5343807368916404183ULL))), (((var_7) * (arr_21 [i_2] [i_11 - 1] [i_0] [i_2])))));
                        arr_47 [i_0] [i_2] [i_14] [i_11] [i_0] = ((/* implicit */short) (~(((((/* implicit */int) arr_15 [i_0] [i_2] [i_9] [i_0] [i_14])) << (((145372857U) - (145372839U)))))));
                    }
                    var_38 ^= ((/* implicit */unsigned char) max(((~(arr_21 [2] [i_11] [i_11] [i_2]))), (((/* implicit */unsigned int) ((int) var_7)))));
                    arr_48 [i_0] [i_9] [i_9] [i_11] |= ((/* implicit */_Bool) max((((arr_43 [i_11] [i_11] [i_2] [i_11] [i_0]) + (((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [i_11] [i_2])))), (max((((-1373843213) * (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) var_1))))))));
                }
                var_39 = ((/* implicit */unsigned int) arr_25 [i_0] [i_2] [i_9]);
                var_40 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)4186)) ? (14974393422976396064ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))))));
            }
        }
        /* LoopSeq 3 */
        for (unsigned short i_15 = 3; i_15 < 10; i_15 += 4) 
        {
            var_41 = ((((/* implicit */int) (short)15553)) > (((/* implicit */int) (unsigned char)170)));
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_15])) ? (((((/* implicit */int) (unsigned char)121)) | (((/* implicit */int) (unsigned short)33055)))) : (((/* implicit */int) ((((/* implicit */_Bool) 15482921403609997536ULL)) || ((!(((/* implicit */_Bool) 2018563136007133128ULL))))))))))));
            var_43 = ((/* implicit */long long int) var_14);
        }
        /* vectorizable */
        for (unsigned short i_16 = 2; i_16 < 10; i_16 += 4) 
        {
            arr_53 [i_16] [i_16] |= ((/* implicit */unsigned char) 19ULL);
            var_44 = ((/* implicit */unsigned int) var_11);
            arr_54 [i_0] [i_16] [i_0] |= ((/* implicit */int) var_14);
        }
        for (unsigned short i_17 = 2; i_17 < 10; i_17 += 2) 
        {
            arr_58 [i_0] [(_Bool)1] [i_0] = 3051780731U;
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 2) 
            {
                for (signed char i_19 = 1; i_19 < 8; i_19 += 1) 
                {
                    {
                        var_45 = 8417642417201878826ULL;
                        arr_65 [(_Bool)1] [6] [i_0] [(unsigned short)5] [i_19] [(unsigned short)4] = ((/* implicit */unsigned short) ((long long int) 2963822670099554098ULL));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
    {
        var_46 = ((/* implicit */short) 11847569121893751145ULL);
        var_47 *= ((/* implicit */int) (_Bool)1);
        var_48 = ((unsigned char) max((2963822670099554069ULL), (var_3)));
        arr_68 [i_20] = ((/* implicit */unsigned long long int) (+(max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 0U)) : (-907868575088226428LL))), (((/* implicit */long long int) (_Bool)1))))));
    }
    var_49 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)0))))) != (((/* implicit */int) max(((short)11108), (((/* implicit */short) (_Bool)1)))))));
}
