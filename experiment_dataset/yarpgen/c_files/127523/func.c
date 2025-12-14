/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127523
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) ((long long int) (((_Bool)1) ? ((((_Bool)1) ? (1152921504606846975LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((1152921504606846975LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)12))))))))));
                                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((((((/* implicit */int) (unsigned char)18)) == (((/* implicit */int) (unsigned short)27378)))) ? (((arr_7 [i_0] [i_0]) >> (((/* implicit */int) (signed char)10)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1152921504606846970LL)) ? (-1152921504606846967LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53334)))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -1865150440632620623LL)))))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_10 [i_0]) / (((-1152921504606846975LL) / (-1152921504606846975LL)))))) ? (((/* implicit */long long int) ((unsigned int) (unsigned char)18))) : (((((/* implicit */_Bool) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))))) ? (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)51))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36137))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) - (1152921504606846975LL)))));
        arr_14 [0U] [0U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1865150440632620623LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (arr_13 [i_5]))) << (((((/* implicit */int) arr_12 [i_5])) - (39217)))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_13 [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (2480691838U))))));
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 22; i_9 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) (_Bool)1);
                        var_16 = (_Bool)1;
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_17 ^= ((/* implicit */unsigned short) arr_24 [i_6] [8LL] [i_6] [i_6] [i_10]);
            arr_28 [i_6] [i_10] [i_6] = ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)508)) || ((_Bool)1)))), (((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6] [i_10]))) + (1865150440632620614LL))))));
            var_18 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_26 [(unsigned char)18])))) != (-3894066634586540392LL)));
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            arr_36 [i_6] [i_6] [0LL] [i_12] [(_Bool)1] |= ((/* implicit */unsigned long long int) -6371005092009627353LL);
                            arr_37 [i_6] [i_10] [i_11] [i_12] [i_13] [i_10] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_10] [i_11] [i_12]))) - (arr_25 [i_10] [i_11] [i_12] [i_12]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (1152921504606846981LL)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 2; i_14 < 23; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (signed char)10))));
                            var_20 = ((/* implicit */long long int) arr_18 [i_10]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) (((((_Bool)0) && (((/* implicit */_Bool) max((arr_40 [i_6] [i_10] [i_11] [i_10]), (((/* implicit */unsigned short) (_Bool)1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) || (((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))))) : (((/* implicit */int) ((((/* implicit */_Bool) -1152921504606846975LL)) || (((/* implicit */_Bool) arr_17 [i_10] [i_10])))))));
            }
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 2) 
    {
        arr_47 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4371581265787037509LL)) ? (2085234390U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-1152921504606846981LL)))))));
        arr_48 [i_16] [i_16 + 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)56550)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-105)))) == (((((/* implicit */int) arr_30 [i_16] [i_16] [i_16] [i_16])) + (((/* implicit */int) arr_29 [16LL] [16LL] [i_16]))))));
        arr_49 [i_16] [i_16 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8614677609694361089LL)) ? (((/* implicit */int) arr_44 [i_16 + 2])) : (((/* implicit */int) (unsigned short)13882))));
    }
    var_22 = ((/* implicit */unsigned char) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned short)34296)) % (((/* implicit */int) (unsigned char)66)))))))));
}
