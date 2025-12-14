/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163425
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
    var_10 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) var_5))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_8))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)12)))))));
                        arr_9 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (var_2) : (((/* implicit */unsigned long long int) var_8))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            arr_12 [i_4] [(short)19] [i_4] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)62833)))));
                            arr_13 [(unsigned char)7] [(unsigned char)7] [i_4] [i_3] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2 + 2] [i_4] [i_4] [i_2 - 2]))));
                        }
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-14)) && (((/* implicit */_Bool) 1549850682543332282LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-4763))));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((int) var_3))) : ((+(arr_3 [10U] [10U] [(short)19])))));
                            var_14 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                            var_15 = ((/* implicit */long long int) (signed char)-38);
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_21 [i_1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))));
                            var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_2 - 1] [i_3] [i_3])))))));
                            arr_22 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_0]))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_24 [i_2 + 1] [i_2 + 2] [23] [i_2 - 1] [i_2 + 1]))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_2 + 1])) : (((/* implicit */int) var_5))));
                        }
                        var_19 = ((/* implicit */short) (-((~(-1)))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) ((short) (unsigned short)35152));
    }
    for (short i_8 = 3; i_8 < 10; i_8 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_7);
        var_22 += ((/* implicit */unsigned short) var_9);
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-14)) ? (9223372036854775807LL) : (-9223372036854775807LL)));
}
