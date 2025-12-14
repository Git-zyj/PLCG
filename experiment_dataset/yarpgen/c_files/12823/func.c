/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12823
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
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [17LL] [i_4] = ((/* implicit */short) (-(((((/* implicit */int) ((short) var_10))) - (((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */int) arr_0 [i_0]))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_4 [i_2] [i_2] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_13)), (var_9))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)51)))))) ? (((((/* implicit */_Bool) (~(-1535609214)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28804))) : (((((/* implicit */_Bool) (signed char)-16)) ? (516966260098210491LL) : (((/* implicit */long long int) -2036847900)))))) : (((((/* implicit */long long int) (~(-2036847900)))) | (((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_8)))))))));
                                var_19 &= ((((/* implicit */_Bool) min((var_5), (((/* implicit */signed char) ((var_2) <= (var_13))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_12))) >= ((-(((/* implicit */int) (short)-24143)))))))) : ((~(((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 4; i_7 < 17; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */long long int) arr_14 [i_0] [i_7] [i_2] [i_7] [i_8])), ((~(((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_2] [i_8]))) - (-6142120412074759898LL))))))))));
                                var_21 = ((/* implicit */long long int) ((min((var_8), (((/* implicit */long long int) (-(-1535609214)))))) > (max((var_17), (((((/* implicit */_Bool) arr_13 [i_0] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_8)))))));
                                var_22 ^= ((/* implicit */unsigned char) -9223372036854775796LL);
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (~(var_6)));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (arr_8 [i_0] [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_2)) != (var_17)))))))) < ((~(var_14)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        for (long long int i_10 = 2; i_10 < 7; i_10 += 3) 
        {
            {
                var_24 += ((/* implicit */short) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_25 [i_9] [(signed char)12] [i_9] [i_10] [10] [0LL])) : (var_4))) > ((+(((/* implicit */int) (signed char)127)))))) || (((/* implicit */_Bool) ((-152010920939080761LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    for (signed char i_12 = 3; i_12 < 10; i_12 += 2) 
                    {
                        {
                            arr_37 [i_9] [i_10] [i_12] [i_12 + 1] [(unsigned char)6] = ((/* implicit */long long int) var_1);
                            var_25 = ((/* implicit */signed char) min((((/* implicit */long long int) (-((-(var_13)))))), (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) 632873542)) : (9223372036854775807LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */int) arr_2 [i_12])))))))));
                            var_26 = var_15;
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (min((var_2), (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))), (var_2)));
    var_28 = ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
}
