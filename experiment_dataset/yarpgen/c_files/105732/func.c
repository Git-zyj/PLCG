/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105732
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) 1818770200U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)183))) : (var_10))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_3 + 3] [i_4] [i_2])) ? (-1674919496) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_1])))))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_10 [(signed char)11] [i_3] [i_2] [i_2] [9ULL] [i_1] [i_0]))));
                                var_20 = (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) (_Bool)1)))))))));
                                var_21 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)6000)), (((arr_0 [i_0]) + (((/* implicit */unsigned long long int) 1403706892211163242LL))))));
                            }
                        } 
                    } 
                    var_22 = min((2147483647), (((/* implicit */int) (short)-9715)));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            {
                var_24 = ((/* implicit */short) (((+(((((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_5] [7] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [i_6] [i_6] [(_Bool)1] [i_6])))))) < (((/* implicit */int) (unsigned short)39121))));
                var_25 = ((/* implicit */short) ((unsigned short) (+(26U))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_23 [i_10] [i_8] [i_8]))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)6014)) ? (((/* implicit */int) arr_5 [i_10] [i_9] [i_8] [(unsigned char)9])) : ((+(((/* implicit */int) arr_18 [i_7] [i_7] [i_7])))))) / (var_15))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) var_12);
                        var_31 -= ((/* implicit */_Bool) (-(var_15)));
                    }
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_32 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)42)) & (((/* implicit */int) (short)22494))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_3)) & (3858982080855293577ULL)));
                        var_34 = ((/* implicit */unsigned char) arr_13 [i_9] [i_9]);
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_35 += ((/* implicit */signed char) var_16);
                            var_36 = ((/* implicit */short) (+(((/* implicit */int) arr_23 [i_13] [i_12] [(unsigned char)3]))));
                            var_37 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)59535))));
                        }
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                        {
                            var_38 = ((/* implicit */_Bool) ((signed char) arr_9 [i_14] [i_12] [i_9] [(unsigned short)15] [(unsigned short)15]));
                            var_39 &= ((/* implicit */short) ((int) (unsigned char)225));
                            var_40 = ((/* implicit */unsigned char) arr_1 [i_14] [i_8]);
                        }
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 2) /* same iter space */
                        {
                            var_41 = ((/* implicit */unsigned long long int) 3308978970U);
                            var_42 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59535)) << (((arr_24 [i_7] [i_7] [i_7] [i_7]) + (3794489499332996456LL)))))) ? (((unsigned long long int) var_15)) : ((+(arr_21 [i_7] [i_7] [i_7] [i_7]))));
                            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (~(18446744073709551615ULL))))));
                        }
                        var_44 += ((unsigned long long int) var_2);
                    }
                    var_45 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_7] [i_7] [i_7] [(unsigned char)7] [i_7] [4ULL]))))), (((unsigned int) var_6))));
                    var_46 = ((/* implicit */int) var_3);
                }
            } 
        } 
    } 
}
