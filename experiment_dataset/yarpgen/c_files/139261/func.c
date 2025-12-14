/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139261
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
    var_17 = ((/* implicit */unsigned char) ((signed char) 67108864U));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) 1815054953))));
                    arr_7 [i_0] [i_0 - 1] [i_1] [(_Bool)1] |= var_13;
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_19 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)7))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) var_1)) / (arr_5 [i_0] [i_1] [i_3] [i_4]))) != (((/* implicit */long long int) 67108864U))));
                            arr_14 [i_0] [i_0] [11U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((arr_4 [i_3]), (((/* implicit */int) ((14256477891017219020ULL) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-64))))))))));
                            var_21 += ((/* implicit */unsigned long long int) min(((~(4227858431U))), (((/* implicit */unsigned int) arr_3 [i_4] [(signed char)5] [(unsigned short)11]))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_5 = 3; i_5 < 13; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */int) ((4323455642275676160ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)108)) >= (((/* implicit */int) (unsigned short)65535))))))));
                            arr_17 [i_0] [i_0] [i_0] [0ULL] [(signed char)5] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)105))) >= ((+(18446744073709551615ULL)))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 36028794871480320LL))))) < (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
                            var_24 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_12 [(unsigned short)1] [i_1] [i_2] [i_3] [i_2]) : (((/* implicit */long long int) 4227858443U)))));
                        }
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            arr_20 [i_6] [i_0 - 1] [i_0] [i_1] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (_Bool)1)), (6291456)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (min((arr_15 [13U] [13U] [i_2] [i_0] [i_6] [i_3] [i_3]), (min((arr_15 [i_0] [i_1] [i_0] [i_0] [i_6] [(unsigned short)5] [(unsigned short)5]), (18446744073709551610ULL)))))));
                            var_25 = ((/* implicit */signed char) ((long long int) arr_10 [i_0] [(unsigned short)6] [i_0 - 1] [i_0 - 1] [i_2 - 2]));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_7 = 3; i_7 < 12; i_7 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) (((-(((var_11) << (((-17) + (32))))))) == (((((/* implicit */_Bool) ((var_7) ? (arr_9 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? ((-(2770846988U))) : (max((2770846988U), (((/* implicit */unsigned int) (signed char)36))))))));
            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_16))))) + (var_8))))));
        }
        /* vectorizable */
        for (signed char i_8 = 3; i_8 < 12; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
            {
                arr_28 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)20690))));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    arr_33 [i_0] [1] [i_0] [(unsigned short)5] [15ULL] [i_10] = ((/* implicit */int) (unsigned short)63898);
                    arr_34 [i_0] [i_8] [15LL] [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (((((/* implicit */_Bool) 67108865U)) ? (arr_2 [i_0] [i_0]) : (4227858422U))));
                }
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (((+(18446744073709551615ULL))) < (((/* implicit */unsigned long long int) (~(33554431U)))))))));
                var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)7))));
            }
            for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
            {
                arr_37 [i_0] = ((/* implicit */unsigned long long int) (-(((int) (_Bool)0))));
                arr_38 [i_0] [i_0] [i_11] = ((/* implicit */unsigned int) ((arr_15 [i_0 - 1] [i_8 + 3] [(unsigned char)5] [i_0] [i_8 - 3] [i_0 - 1] [i_0]) < (arr_15 [i_8 - 3] [i_11] [i_8 - 3] [i_0] [i_8 - 3] [i_0 - 1] [i_0])));
                var_30 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_18 [i_0] [7] [i_0] [7] [9] [i_0]) >= (-26439567)))) > (((/* implicit */int) arr_32 [i_8 - 3] [i_8] [i_11] [i_11] [i_11]))));
            }
            /* LoopNest 3 */
            for (unsigned int i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                for (unsigned int i_13 = 0; i_13 < 16; i_13 += 2) 
                {
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 1) 
                    {
                        {
                            arr_47 [i_14] [i_0] [i_14] = (+(((/* implicit */int) (unsigned char)128)));
                            var_31 = ((/* implicit */unsigned char) ((arr_9 [i_0 - 1]) / (arr_9 [i_0 - 1])));
                            arr_48 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) : (67108865U)));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_15 = 1; i_15 < 15; i_15 += 1) 
            {
                for (int i_16 = 3; i_16 < 14; i_16 += 3) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_56 [i_0] [i_0 - 1] [i_0] [i_0] [(unsigned char)6] [i_0] = (-(((/* implicit */int) var_15)));
                            var_32 ^= ((/* implicit */unsigned short) ((arr_42 [i_0] [i_0] [i_0 - 1] [i_0]) - (((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                            var_33 -= ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_15 - 1] [i_8 + 3])) * (((/* implicit */int) ((signed char) (unsigned char)1)))));
                            var_34 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) - (4227858442U)))));
                            arr_57 [i_17] [(signed char)11] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_42 [8LL] [i_0] [i_0 - 1] [i_8 - 1]))));
                        }
                    } 
                } 
            } 
            var_35 &= (!(((/* implicit */_Bool) ((long long int) var_4))));
        }
        /* LoopNest 2 */
        for (long long int i_18 = 0; i_18 < 16; i_18 += 4) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 14; i_19 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((((4227858432U) * ((-(9U))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */int) (unsigned short)44845)) != (((/* implicit */int) (short)32767)))), (((((/* implicit */int) (signed char)52)) != (((/* implicit */int) (signed char)-16))))))))));
                        var_37 = ((unsigned long long int) max((((274877906944ULL) / (((/* implicit */unsigned long long int) 1458910225U)))), (((/* implicit */unsigned long long int) ((536805376) >= (((/* implicit */int) (short)18274)))))));
                    }
                    var_38 = (~(4964971633235296264ULL));
                    var_39 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_25 [i_0] [i_18] [i_0])) > (((/* implicit */int) (signed char)3)))))) == (((unsigned int) -26439567)))))));
                }
            } 
        } 
    }
    var_40 = ((/* implicit */unsigned int) (+(-536805376)));
    var_41 = ((/* implicit */unsigned long long int) var_6);
}
