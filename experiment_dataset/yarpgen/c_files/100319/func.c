/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100319
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
    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) min((var_0), (((/* implicit */long long int) var_10)))))), (var_12)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_15 += ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) ((_Bool) -1LL))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) << (((var_12) - (389605789U)))))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_9) : (var_13)))))));
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))), (var_0)));
                arr_9 [i_0] [i_1] [i_2] = var_6;
            }
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                var_17 = var_8;
                var_18 = var_7;
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) (!((_Bool)1)))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((long long int) (~(((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_3)))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_4))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_3] [i_3] = ((/* implicit */_Bool) min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) var_5))));
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_24 [i_7] [i_1] [i_0] = ((/* implicit */unsigned char) (((~(16776742134546874552ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4))))));
                    var_23 = var_12;
                }
                arr_25 [i_1] [i_1] = ((_Bool) (unsigned char)7);
            }
            var_24 = ((/* implicit */unsigned int) ((_Bool) 2666298826876301117ULL));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) var_7)))));
            var_26 = ((/* implicit */unsigned long long int) ((unsigned char) (+(((unsigned long long int) var_1)))));
            var_27 -= ((/* implicit */unsigned char) (-((+(var_11)))));
        }
        var_28 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) ((_Bool) var_8))));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    {
                        var_29 = (!(((/* implicit */_Bool) (+(-3913293643305274011LL)))));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_13))))), ((+(1048575U)))))), (var_3))))));
                    }
                } 
            } 
            var_31 *= ((/* implicit */_Bool) max((min((var_2), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (min((var_9), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
    {
        arr_37 [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) var_13)), (var_11))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (var_4)))))))));
        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)0))));
        var_33 *= (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (_Bool)0)), (0U)))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
    {
        var_34 = ((/* implicit */_Bool) var_3);
        var_35 = ((/* implicit */_Bool) ((unsigned long long int) max(((+((-9223372036854775807LL - 1LL)))), (((long long int) var_3)))));
        var_36 = ((_Bool) ((long long int) (_Bool)0));
        arr_40 [i_13] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (min((-3548515323988401946LL), (9223372036854775807LL))))), (((6LL) << (((18446744073709551615ULL) - (18446744073709551557ULL)))))));
    }
}
