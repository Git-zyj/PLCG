/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166212
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
    var_13 &= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? (((int) (signed char)111)) : (((/* implicit */int) (signed char)-112))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(20ULL)))) ? ((-(((/* implicit */int) (signed char)112)))) : (((/* implicit */int) ((short) arr_1 [i_0] [(short)18])))))) > (-4480182539983020954LL)));
        var_15 = ((/* implicit */short) (unsigned char)79);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned int) ((short) (short)16320));
        var_16 = ((((/* implicit */unsigned long long int) arr_3 [i_1])) >= (18446744073709551615ULL));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
            {
                var_17 = ((/* implicit */long long int) ((arr_12 [i_2 + 2]) / (((/* implicit */int) (signed char)-112))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    var_18 = ((/* implicit */_Bool) arr_8 [i_4 + 1] [i_2 + 2]);
                    arr_18 [i_4] [i_5] [i_4] [i_3] [i_2 + 1] = ((/* implicit */short) var_10);
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16305)) % (((/* implicit */int) arr_15 [i_2] [i_4] [i_3] [i_2] [i_2 + 1] [6U]))))) ? (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)16305)))) : (((/* implicit */int) ((signed char) arr_15 [24U] [i_2] [i_3] [i_2] [i_4 + 3] [i_5])))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)9)) / (((/* implicit */int) var_4))));
                }
                var_21 += ((/* implicit */short) (+(4294967295U)));
            }
            arr_19 [i_2] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967293U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (2901003423U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_3] [i_3]))))))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    {
                        arr_27 [i_7] [i_6] [i_3] [i_2] = ((/* implicit */short) var_0);
                        arr_28 [i_2 + 1] [i_2 + 1] [15LL] [i_7] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_2 - 1]))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)16)) < (((/* implicit */int) (short)16305))));
                    }
                } 
            } 
            var_23 += ((/* implicit */signed char) (short)16315);
        }
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-16299))) ? (((/* implicit */int) (short)-16316)) : (((/* implicit */int) (short)16320))));
            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 - 1])) & (((int) arr_20 [i_8] [(short)2] [24U]))));
        }
        var_26 = ((/* implicit */long long int) (~(-360980616)));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) 2901003444U))));
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        {
                            arr_43 [i_2 + 2] [i_2 + 2] [i_9] [3ULL] [i_11] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)16326))) <= (9223372036854775802LL)));
                            arr_44 [i_10] [i_10] = ((/* implicit */signed char) (short)287);
                            arr_45 [i_2] [19ULL] [i_10] [i_10] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_33 [i_2 + 2])) ? ((-(1660822821))) : (((/* implicit */int) (short)17079))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) 1048575U);
            }
            var_29 ^= ((/* implicit */long long int) ((4503599610593280LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-96)))));
            var_30 = ((/* implicit */long long int) (short)3);
        }
    }
    /* LoopSeq 3 */
    for (int i_13 = 0; i_13 < 13; i_13 += 1) 
    {
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((0ULL) - (((/* implicit */unsigned long long int) var_3)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 23U)))))))) : (((9223372036854775807LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-18)))))));
        arr_48 [8ULL] = ((/* implicit */_Bool) (signed char)(-127 - 1));
    }
    for (short i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_26 [(signed char)3] [(signed char)3] [i_14] [i_14] [i_14] [20])) : (((/* implicit */int) (short)-3798)))) : (0)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (-9223372036854775801LL))))))))));
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) max((-1), (((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))))) ? (-5672737834371005751LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]))) + (1649957934U))))));
    }
    for (signed char i_15 = 0; i_15 < 21; i_15 += 1) 
    {
        var_34 = ((/* implicit */short) (((~(((/* implicit */int) arr_16 [i_15] [i_15] [(signed char)9] [i_15])))) ^ (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (16777215U)))) ? (((/* implicit */int) arr_6 [i_15] [i_15])) : (((/* implicit */int) ((signed char) (signed char)102)))))));
        arr_53 [i_15] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)120)) ? (arr_32 [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52214))))) != (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) : (480287047U)))));
    }
}
