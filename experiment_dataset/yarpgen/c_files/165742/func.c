/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165742
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max(((unsigned short)21140), (((/* implicit */unsigned short) max((((/* implicit */short) ((_Bool) var_10))), ((short)25375))))));
                                arr_16 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */_Bool) ((signed char) min((((var_12) < (((/* implicit */long long int) ((/* implicit */int) (short)25359))))), ((_Bool)1))));
                                arr_17 [i_2] [i_1] [i_1] = ((((unsigned long long int) min((((/* implicit */short) (_Bool)0)), ((short)-20260)))) | (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)7839)) != (((/* implicit */int) (signed char)-8))))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (signed char)100))))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((signed char) (short)-29944)))));
                                var_20 = ((/* implicit */unsigned char) min(((short)32767), (((/* implicit */short) (signed char)100))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 22; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)29944)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29944))));
                                var_21 = ((/* implicit */int) (unsigned short)65535);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((1125898833100800LL), (((/* implicit */long long int) (_Bool)1))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) min((((/* implicit */short) ((signed char) (_Bool)1))), ((short)-32762))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        arr_27 [i_7] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (var_13)));
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
        {
            for (int i_9 = 1; i_9 < 12; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                {
                    {
                        arr_37 [i_8] [i_9] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-2)) >= (((/* implicit */int) (!(((/* implicit */_Bool) 12)))))));
                        var_24 = ((/* implicit */short) (signed char)92);
                        arr_38 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) var_16);
                        var_25 += ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                        arr_39 [i_7] [i_8] [i_8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)87))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                for (long long int i_13 = 3; i_13 < 11; i_13 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_14 = 0; i_14 < 13; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-9129))));
                            arr_52 [i_7] [i_11] [i_13] [i_13] = ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) (signed char)-10))));
                            var_27 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32765))) ^ (var_11))));
                        }
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) (_Bool)0)) <= (1859239414))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                {
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_15))))))))));
                    arr_61 [i_7] [i_7] [i_7] [i_16] |= ((unsigned int) 1462000861509146816LL);
                    var_30 = ((/* implicit */int) var_12);
                }
            } 
        } 
    }
    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 1) 
    {
        arr_65 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((long long int) 640380479U)), (((/* implicit */long long int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))))))) ? (min((min((2508923156016690204ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (~(var_8)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) != (((int) (_Bool)0))))))));
        var_31 = ((/* implicit */short) (-(3846454452871643827ULL)));
        var_32 &= ((/* implicit */unsigned char) min((1078461335), (((/* implicit */int) (_Bool)1))));
    }
    for (short i_18 = 0; i_18 < 21; i_18 += 4) 
    {
        var_33 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((12133981648796076816ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_34 *= ((/* implicit */_Bool) var_6);
    }
}
