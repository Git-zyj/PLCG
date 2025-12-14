/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104347
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_15)))));
        var_20 = ((/* implicit */short) (-(var_10)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 4; i_2 < 18; i_2 += 3) 
        {
            for (signed char i_3 = 2; i_3 < 20; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
                    {
                        for (signed char i_5 = 3; i_5 < 18; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                                arr_15 [i_2] [i_2] [i_4] [1] [i_2] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) var_4))))) + (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (var_15) : (var_15)));
                }
            } 
        } 
        var_24 = ((/* implicit */int) ((((((/* implicit */int) var_1)) == (var_5))) ? (((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) var_16)) | (((/* implicit */int) var_13)))))));
    }
    for (short i_6 = 4; i_6 < 13; i_6 += 1) 
    {
        arr_18 [i_6 + 1] [i_6] = ((/* implicit */short) (+(((/* implicit */int) min((var_18), (var_7))))));
        var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) != (((/* implicit */int) var_7)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_1))))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) var_1))));
        var_26 += ((((((/* implicit */long long int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_17))))) > (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_0))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))))));
        arr_19 [i_6 - 1] [i_6] = ((/* implicit */int) ((max((((((/* implicit */_Bool) -5918592372608206156LL)) ? (-1866049009) : (637884497))), (((/* implicit */int) ((9223372036854775807LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-41)))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
    }
    for (short i_7 = 2; i_7 < 9; i_7 += 4) 
    {
        arr_22 [(short)6] [(short)7] = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) -605470856)))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126))))))), (((/* implicit */int) ((((/* implicit */int) var_3)) == ((~(((/* implicit */int) var_9)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_8 = 2; i_8 < 8; i_8 += 1) 
        {
            arr_26 [i_8] [i_8] = ((/* implicit */short) var_5);
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(var_5))))));
            var_28 *= ((/* implicit */short) var_8);
            arr_27 [i_8] [i_8 - 2] [(short)5] = ((/* implicit */int) ((var_14) ^ (var_0)));
            arr_28 [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_14))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            var_29 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) + (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_2)) : (var_14)))));
            /* LoopNest 2 */
            for (short i_10 = 1; i_10 < 8; i_10 += 1) 
            {
                for (int i_11 = 1; i_11 < 6; i_11 += 1) 
                {
                    {
                        arr_35 [i_7] [i_9] [i_9] [i_11] = ((/* implicit */short) ((var_11) & (var_15)));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_15) - (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (var_5) : ((+(((/* implicit */int) var_3))))));
                        arr_36 [i_7] [i_9] [i_7] [i_11] = ((/* implicit */short) (-(((/* implicit */int) (short)7237))));
                        arr_37 [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_14)));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (short i_13 = 1; i_13 < 8; i_13 += 3) 
            {
                for (long long int i_14 = 3; i_14 < 7; i_14 += 3) 
                {
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_18)) : (var_5)));
                        arr_45 [i_12] [3LL] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (5972806174577882665LL)));
                    }
                } 
            } 
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((4503599627370495LL) - (-4652619707104585513LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
            arr_46 [i_12] [i_12] [i_12] = (((~(var_14))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 356437478)) ? (((/* implicit */int) (short)-26076)) : ((-2147483647 - 1))))));
        }
        var_33 = ((/* implicit */short) (~(((/* implicit */int) (short)-28348))));
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) max((min((((var_5) % (var_5))), (((/* implicit */int) var_16)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16)))))))))))));
    }
    var_35 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_7))))) - (((/* implicit */int) var_7)))) | (((/* implicit */int) var_8))));
}
