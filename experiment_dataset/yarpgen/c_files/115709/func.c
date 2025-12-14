/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115709
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2064384U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (-3276190083196224183LL))), (((/* implicit */long long int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) 1099908902)))) || (((/* implicit */_Bool) var_13)))))) : (((unsigned int) ((_Bool) var_7)))));
        var_20 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) 2817018086076715572LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) | (min((min((((/* implicit */long long int) var_13)), (3276190083196224182LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (var_4))))))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)14)) && (((/* implicit */_Bool) 1392358385))))) | (((/* implicit */int) var_0))))) ? (((unsigned int) 3276190083196224192LL)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) 2147483647)), (-4488911721791908481LL))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) var_13);
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) ((int) (signed char)-114))) ? (min((((/* implicit */long long int) (((_Bool)1) ? (var_10) : (((/* implicit */unsigned int) var_13))))), (((((/* implicit */_Bool) 128)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))) : (((long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)247)) : (14680064)))))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) 3276190083196224183LL);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((max((((/* implicit */unsigned int) (_Bool)1)), (var_7))) - (min((((/* implicit */unsigned int) var_18)), (3772061748U)))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -179452338)) ? (var_11) : (((/* implicit */unsigned int) 14680050))))) ? (((var_12) ^ (var_15))) : ((((_Bool)1) ? (-1713359636) : (7)))))) || (((((((/* implicit */_Bool) 2018975649)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)60)))) >= (((/* implicit */int) var_5))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 32767)) ? ((((_Bool)1) ? (var_2) : (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) 3968404713U))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 1883183177U)) ? (-2817018086076715573LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (var_10)));
        var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5185831912187656169LL)) ? (min((((/* implicit */int) (unsigned short)65535)), (2147483647))) : (((/* implicit */int) (signed char)-52))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_5 = 2; i_5 < 8; i_5 += 2) /* same iter space */
        {
            arr_18 [i_4] [i_5 - 1] [2] = ((/* implicit */int) ((((12243213) != (((/* implicit */int) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (((/* implicit */long long int) var_9)))))) : (var_7)));
            var_27 = ((/* implicit */long long int) ((signed char) var_6));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 8; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (int i_9 = 3; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) ((-2817018086076715582LL) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4))))));
                            var_29 = ((/* implicit */signed char) ((unsigned int) (((_Bool)0) ? (-1304051187) : (-12243214))));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((long long int) var_16)))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */long long int) max((var_31), (var_2)));
                arr_30 [i_4] [(unsigned char)3] [i_4] [i_4] = ((/* implicit */unsigned int) ((int) var_5));
                var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) (unsigned char)52)) : (-982322456)));
            }
            for (int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                var_33 = ((/* implicit */signed char) 4576548385679702208LL);
                arr_33 [i_4] [10U] [i_10] [10U] = ((/* implicit */unsigned short) ((((var_15) + (2147483647))) >> (((1845604131) - (1845604101)))));
            }
            for (signed char i_11 = 2; i_11 < 9; i_11 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42920)) ? (((/* implicit */int) ((var_9) > (((/* implicit */int) (unsigned char)254))))) : (((/* implicit */int) (_Bool)1)))))));
                    var_35 ^= ((/* implicit */unsigned int) ((signed char) ((_Bool) var_7)));
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) : (-2868158691306329787LL)));
                }
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    arr_41 [i_4] = ((var_6) >= (2065886566));
                    var_37 = ((var_17) >> (((((2817018086076715572LL) % (-4576548385679702223LL))) - (2817018086076715557LL))));
                }
                arr_42 [i_4] [i_6] [i_11] [i_11] = ((((/* implicit */_Bool) 2817018086076715573LL)) ? (((((/* implicit */_Bool) var_13)) ? (881260814U) : (((/* implicit */unsigned int) -1872564663)))) : (var_11));
                arr_43 [i_4] [i_4] [i_4] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) (unsigned char)166)) : (((/* implicit */int) (unsigned char)6)))));
            }
            arr_44 [i_4] [i_4] = ((/* implicit */_Bool) var_18);
            var_38 = ((((/* implicit */_Bool) ((5034829897178706445LL) & (((/* implicit */long long int) -12243230))))) ? (((/* implicit */int) ((-1608701005) >= (-1579261067)))) : (-671450257));
        }
        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10130)) ? (383117233U) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (1858323735U) : (((/* implicit */unsigned int) var_17))))) ? (4294967295U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))));
    }
}
