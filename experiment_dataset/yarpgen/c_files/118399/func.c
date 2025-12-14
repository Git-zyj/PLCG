/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118399
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (!(var_13))))));
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_0))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (27113630U))) >> ((((~(((/* implicit */int) var_9)))) + (31210)))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (((+(0LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_0)))))))))));
        var_17 = ((/* implicit */signed char) (((-(((((/* implicit */int) var_9)) / (((/* implicit */int) var_0)))))) > ((-(((((/* implicit */_Bool) 2038865861)) ? (((/* implicit */int) var_0)) : (-472444696)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
        var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) (short)-3515))))));
    }
    for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 10; i_4 += 1) 
            {
                for (unsigned char i_5 = 1; i_5 < 8; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483644)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)3514)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)3508)) & (((/* implicit */int) var_10)))))))));
                        arr_16 [i_2] [i_4] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3514)) ? (((/* implicit */unsigned int) ((var_8) ^ (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) var_8)) ^ (1U))))))));
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-((-(((/* implicit */int) (short)8455)))))))));
                        arr_17 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) != (((/* implicit */int) (!(((/* implicit */_Bool) 0)))))));
                        var_22 = ((/* implicit */unsigned int) var_6);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 9; i_6 += 1) 
        {
            for (unsigned char i_7 = 2; i_7 < 10; i_7 += 1) 
            {
                {
                    var_23 = ((((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) ((((/* implicit */_Bool) 1U)) && (((/* implicit */_Bool) var_10)))))))) != (((/* implicit */int) var_0)));
                    /* LoopSeq 3 */
                    for (unsigned short i_8 = 4; i_8 < 8; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) (short)-8451);
                        arr_24 [i_2] [i_6 - 2] [i_2] [i_7] = ((/* implicit */unsigned char) (+(((1344777282714228587ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                    }
                    for (short i_9 = 1; i_9 < 10; i_9 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 947619172U)) ? (2750079845142609718ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (var_8))))))))));
                        var_26 = ((/* implicit */int) ((((((/* implicit */int) (signed char)8)) < (var_6))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned char) (short)-8449);
                        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2292324688U))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) / (((/* implicit */int) (_Bool)1)))))));
                    }
                    arr_33 [i_2] [i_6] [i_7] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-102)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (4022))))) | (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (482712186U))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0)))))))))));
                }
            } 
        } 
    }
}
