/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13201
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~((+(189034191U)))));
        var_13 = ((/* implicit */unsigned short) 496086483881601012ULL);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-7))))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 11545353841042469541ULL))))));
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-7)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            arr_18 [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1215558885U))));
            var_14 = ((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned char)149))))));
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) 4099430891U))));
            var_16 = ((/* implicit */unsigned long long int) 8506663381313897666LL);
        }
        arr_19 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775807LL))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 1; i_5 < 12; i_5 += 1) 
        {
            var_17 = 3042019925038064202LL;
            arr_22 [13LL] [i_3] = ((/* implicit */int) (!((_Bool)1)));
            var_18 = (!((!(((/* implicit */_Bool) (unsigned char)70)))));
        }
        /* vectorizable */
        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)20639))));
            arr_26 [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!((_Bool)1))))));
            arr_27 [i_3] [(signed char)2] |= ((/* implicit */short) (unsigned short)2634);
        }
        arr_28 [i_3] [i_3] |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 6409224978893761356ULL))))));
        arr_29 [i_3] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(18446744073709551615ULL))))))));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 23; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                {
                    arr_37 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned long long int) (+((+(1465795104)))));
                    var_20 = (-(((/* implicit */int) (unsigned short)2634)));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_21 -= ((/* implicit */short) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) 664863122755323491LL)))))))));
                        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 275277944U))));
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) 1313614472U)))))))));
                    }
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_12 = 4; i_12 < 20; i_12 += 1) 
                        {
                            arr_44 [i_7] [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(4009363051U))))));
                            arr_45 [i_7] [i_8] [i_7] [i_7] [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) (unsigned char)201);
                            var_24 = ((/* implicit */signed char) (unsigned char)64);
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2426233292U))));
                        }
                        /* vectorizable */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_26 &= 4099430919U;
                            var_27 = ((/* implicit */_Bool) max((var_27), ((!(((/* implicit */_Bool) (~(((/* implicit */int) (short)32754)))))))));
                            var_28 = ((/* implicit */int) min((var_28), ((-((~(((/* implicit */int) (short)-17540))))))));
                        }
                        for (long long int i_14 = 2; i_14 < 22; i_14 += 1) /* same iter space */
                        {
                            arr_53 [i_7] [i_11] [i_7] = ((/* implicit */short) 1039656708U);
                            arr_54 [i_7] [i_7] [i_9] [i_11] [i_14 - 1] [i_14 - 1] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)38930)))))))));
                        }
                        for (long long int i_15 = 2; i_15 < 22; i_15 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) (signed char)-16);
                            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)241)))))));
                            var_31 += ((/* implicit */unsigned long long int) (+((+(2197935680U)))));
                        }
                        var_32 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)0))));
                        var_33 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    } 
}
