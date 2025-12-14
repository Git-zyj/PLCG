/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118277
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
    var_10 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned short) -6428092001161384901LL))) ? (((/* implicit */int) var_2)) : (((var_4) / (((/* implicit */int) var_2)))))), (((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_0))))) >> (((((((-6428092001161384901LL) + (9223372036854775807LL))) << (((/* implicit */int) var_7)))) - (5590560071386781801LL)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_11 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_0])) - ((-(7296897298442677725LL))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) min((-6516432065326230506LL), (((/* implicit */long long int) arr_1 [i_0]))))) : (arr_2 [i_0])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? ((~(-7296897298442677725LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (min((7296897298442677725LL), (((/* implicit */long long int) (_Bool)0)))));
        var_12 = ((/* implicit */unsigned char) -402337512);
        arr_4 [13] = ((/* implicit */long long int) (-(1)));
        var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)10))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_14 = ((((/* implicit */_Bool) (~(-6428092001161384911LL)))) ? (((int) 18446744073709551615ULL)) : (((/* implicit */int) arr_11 [(signed char)13] [i_2] [i_1 - 1])));
            var_15 = ((/* implicit */unsigned int) arr_5 [i_1 - 1]);
            var_16 &= ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) min((16744448LL), (((/* implicit */long long int) var_7))))))));
            var_17 = ((/* implicit */long long int) var_6);
        }
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
        {
            arr_14 [i_1] [i_3] = ((/* implicit */int) (~((-(arr_9 [i_1 - 1] [i_1] [i_3])))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    {
                        var_18 -= ((/* implicit */short) (((_Bool)1) ? (var_3) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)28)))))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) arr_17 [i_3] [i_4]);
                            arr_22 [8LL] [i_1] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) var_4);
                        }
                    }
                } 
            } 
            var_20 = ((/* implicit */signed char) max((((long long int) ((((/* implicit */int) var_7)) | (var_4)))), (((/* implicit */long long int) var_7))));
            var_21 &= ((/* implicit */long long int) arr_6 [(unsigned char)6]);
        }
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
        {
            arr_26 [i_1] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_7]))) == (((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (var_1)))))));
            var_22 = ((/* implicit */long long int) arr_18 [i_1 - 1] [i_1] [i_1] [i_7]);
            var_23 += ((/* implicit */signed char) (!(var_5)));
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 1; i_9 < 21; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1 - 1] [2U] [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (var_4)))))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (min((max((var_3), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_6))))));
                            var_26 -= ((/* implicit */short) -1LL);
                        }
                    } 
                } 
            } 
        }
        for (short i_11 = 1; i_11 < 23; i_11 += 1) 
        {
            var_27 *= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) -8061329616075392578LL)) ? (((((/* implicit */int) (unsigned char)228)) + (((/* implicit */int) (unsigned char)191)))) : ((~(((/* implicit */int) var_5)))))));
            /* LoopNest 3 */
            for (unsigned int i_12 = 3; i_12 < 22; i_12 += 1) 
            {
                for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */int) arr_13 [i_11] [i_12 + 2] [i_1]);
                            var_29 = (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
        }
        arr_46 [i_1] = ((/* implicit */int) min((min(((unsigned char)207), (((/* implicit */unsigned char) arr_45 [i_1] [i_1 - 1] [i_1])))), (((unsigned char) arr_45 [i_1] [i_1 - 1] [i_1]))));
        var_30 = ((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    for (int i_15 = 0; i_15 < 25; i_15 += 4) 
    {
        var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) 1893501193))))) ? (var_4) : (((/* implicit */int) arr_48 [i_15] [i_15])))) <= (min((((((/* implicit */_Bool) arr_47 [i_15] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((arr_48 [i_15] [i_15]), (arr_48 [i_15] [i_15]))))))));
        /* LoopNest 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_32 -= ((/* implicit */int) var_8);
                    arr_53 [i_15] [i_16] [i_16] = ((/* implicit */unsigned short) arr_50 [i_15] [i_15]);
                    var_33 = ((/* implicit */unsigned long long int) ((short) (_Bool)0));
                    var_34 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_49 [i_16] [i_16] [i_16])))), (arr_48 [i_16] [i_17])));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
}
