/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169497
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) var_3))))), ((~(var_12))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
                    arr_9 [i_0] [i_0] = (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_2)))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (min((var_8), (var_10))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) var_17)) != (((/* implicit */int) var_9))))), (var_6)))))));
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 3; i_7 < 8; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(var_1)))) : (((var_4) & (((/* implicit */int) var_14))))));
                                arr_24 [i_3] = ((/* implicit */unsigned short) (!(var_3)));
                                arr_25 [(unsigned char)9] [8] [i_3] [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) & (((var_3) ? (var_16) : (var_12)))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (-((+(((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_32 [i_5] [i_4] [i_3] [i_8] [2ULL] = ((/* implicit */unsigned long long int) ((var_10) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_21 = (((~(var_4))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                        }
                        for (unsigned short i_10 = 3; i_10 < 9; i_10 += 3) /* same iter space */
                        {
                            var_22 = (+(((((/* implicit */_Bool) var_17)) ? (var_16) : (var_10))));
                            var_23 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)18656))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL))));
                        }
                        for (unsigned short i_11 = 3; i_11 < 9; i_11 += 3) /* same iter space */
                        {
                            arr_37 [i_3] [i_3] [i_3] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)218))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-1)) : (-17)))));
                            arr_38 [i_3] [i_8] [i_3] = ((/* implicit */short) var_10);
                            arr_39 [i_11] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_6))))) > ((~(((/* implicit */int) var_2))))));
                        }
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (5049302108383739386ULL))))));
                        arr_40 [i_3] [9LL] [i_4] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_10)))) ? ((+(((/* implicit */int) var_0)))) : (((var_15) << (((((/* implicit */int) var_6)) - (45130)))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        var_25 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_8)))))));
                        arr_43 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_7)))) == (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_1)))))));
                    }
                }
                for (int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) (((~(-5379163507020754662LL))) < (((/* implicit */long long int) min((((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-10503))))))))));
                                arr_52 [i_3] [i_14] [i_13] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((-842601145) ^ (((((/* implicit */int) (unsigned char)213)) & ((-(((/* implicit */int) (signed char)-8))))))));
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) <= (((var_14) ? (((/* implicit */unsigned long long int) var_4)) : (var_8))))))) <= (((min((-5379163507020754652LL), (((/* implicit */long long int) var_0)))) & (((/* implicit */long long int) min((((/* implicit */int) (short)-5257)), (-705867432))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((min((var_11), (((/* implicit */unsigned int) var_9)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))))) | (var_10)));
                }
                var_29 = ((/* implicit */_Bool) var_6);
                var_30 |= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_14))))) : (min((((/* implicit */unsigned long long int) var_15)), (var_8)))))));
            }
        } 
    } 
}
