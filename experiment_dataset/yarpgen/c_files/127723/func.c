/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127723
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
    var_10 = ((/* implicit */int) ((long long int) (~(-8933045453883323080LL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_11 = var_3;
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((_Bool) 6216076299649203939ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_13 ^= ((/* implicit */short) var_2);
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (-(arr_10 [i_0] [i_1] [i_2] [i_3]))))));
                            var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_11 [i_3] [i_0] [i_3 - 1])));
                            var_16 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_3 - 2])) < (((/* implicit */int) arr_4 [i_0]))));
                        }
                        var_17 = ((/* implicit */int) (short)-1);
                    }
                    for (long long int i_5 = 2; i_5 < 10; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)21))));
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 3; i_6 < 9; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) / (((int) (unsigned short)55475))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21)) ? (((/* implicit */int) arr_13 [i_5 - 1] [i_1] [i_6 - 3] [i_6 - 3])) : (((/* implicit */int) (unsigned short)16404))));
                            var_21 = ((/* implicit */_Bool) ((arr_16 [i_0] [i_0] [i_6 + 2] [i_1] [i_6 + 2] [i_6 - 3] [i_5 - 1]) ? (((/* implicit */int) (unsigned short)35622)) : (((/* implicit */int) arr_16 [i_0] [i_5] [i_6 - 2] [i_1] [i_2] [i_5] [i_5 + 2]))));
                            var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_16 [i_0] [(short)5] [i_2] [i_1] [i_6] [i_5 + 2] [i_6]))));
                        }
                        for (int i_7 = 2; i_7 < 10; i_7 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2088326961)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1))));
                            var_24 &= ((/* implicit */long long int) ((int) (unsigned short)29913));
                            var_25 = ((/* implicit */long long int) min((var_25), (var_7)));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == ((+(1644618970)))));
                        }
                        for (int i_8 = 2; i_8 < 10; i_8 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned char) ((arr_14 [i_1] [i_5 + 2] [i_5 + 2] [i_8 - 2]) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_8 + 1] [i_5 + 2])))));
                            var_28 |= ((/* implicit */unsigned char) (unsigned short)1836);
                        }
                        for (int i_9 = 2; i_9 < 10; i_9 += 3) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) (unsigned char)246);
                            var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
                        }
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)0)))))));
                    }
                }
            } 
        } 
    }
}
