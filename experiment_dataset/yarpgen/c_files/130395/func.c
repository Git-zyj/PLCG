/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130395
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
    var_12 = ((/* implicit */short) (~(2019123981U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1 - 2] [i_2] = ((/* implicit */long long int) var_10);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (((+(2019123981U))) | (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(7153258726956058087LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) : (max((var_6), (var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) : ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_11))))))))));
                                var_15 ^= (((-((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))) / (((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)53)))));
                                arr_16 [i_0] [i_3] [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)10268)) : (((/* implicit */int) var_4)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1614105962U)) ? (var_3) : (((/* implicit */long long int) var_6)))))))) : (((/* implicit */int) (unsigned short)10276))));
                                arr_17 [i_0] [(short)5] [i_2] [i_3] [(short)5] = ((/* implicit */unsigned int) (unsigned char)62);
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (927148586)))))));
                }
                for (short i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((int) (_Bool)1)))));
                        arr_24 [i_0] = ((/* implicit */short) 6U);
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_17 *= ((/* implicit */signed char) ((((var_3) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-107))))) == (((/* implicit */long long int) var_8))));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_9))));
                                arr_32 [i_5] [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) (+(var_3)));
                                var_19 -= ((/* implicit */signed char) ((((((/* implicit */long long int) (-(var_2)))) / ((~(var_3))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((~(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (5ULL))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) -5274898180921930547LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_2))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 1; i_9 < 22; i_9 += 2) 
                    {
                        var_21 = ((/* implicit */signed char) (-(max((var_8), ((+(67108608U)))))));
                        var_22 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(((int) var_0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -927148585)) ? (5274898180921930546LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) var_11))))));
                        var_23 = ((/* implicit */signed char) (-((-(((/* implicit */int) ((_Bool) var_9)))))));
                        arr_35 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (6432101208508506721LL) : (((/* implicit */long long int) var_8))))) | (10254964701867428896ULL)))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_0))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) > (var_6))))))) ? (((/* implicit */int) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_7)))))));
                        var_25 = ((/* implicit */int) (((_Bool)1) ? (3605663176U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193)))));
                    }
                }
                for (short i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) * (12604544761350487644ULL))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
                    {
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_27 *= ((/* implicit */_Bool) (-((~(((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)216))))))));
                                var_28 = ((/* implicit */short) (+(((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_1)))))));
                                arr_45 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (((!(((/* implicit */_Bool) 12383590942379608924ULL)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
                            }
                        } 
                    } 
                    arr_46 [i_11] [(unsigned short)10] [(unsigned short)10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(var_11)))) - ((+((-(12604544761350487648ULL)))))));
                    arr_47 [i_0] [i_0] [i_0] = var_11;
                }
                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */long long int) (-(var_8)))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_8)) : (-460457287542588447LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) var_9)))))));
                var_30 -= ((/* implicit */unsigned char) (-(((int) var_6))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 1) 
    {
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            for (signed char i_16 = 2; i_16 < 13; i_16 += 2) 
            {
                {
                    arr_57 [i_14] [i_14] = ((/* implicit */int) var_2);
                    var_31 *= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_1)))))));
                    arr_58 [i_14] [i_15] [i_14] = ((/* implicit */long long int) var_11);
                }
            } 
        } 
    } 
}
