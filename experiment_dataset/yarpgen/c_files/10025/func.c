/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10025
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
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) ^ ((+(var_5))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 7ULL)) ? (18ULL) : (7ULL))))))));
        var_17 = ((/* implicit */long long int) max((var_10), (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_14)))))));
        arr_2 [i_0] = min((max((var_7), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_10)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_10 [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5448348914566654836LL)))))));
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+((~(var_0))))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        arr_18 [i_3] [i_3] [i_3] [(unsigned char)13] = ((/* implicit */long long int) (~((+(((/* implicit */int) var_14))))));
                        var_20 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_2))))));
                    }
                    var_21 = ((unsigned long long int) (-(((/* implicit */int) var_1))));
                    arr_19 [i_1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) var_0));
                    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 2; i_6 < 15; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) var_9);
                        arr_22 [i_1] [i_3] = ((/* implicit */long long int) ((unsigned long long int) var_2));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    }
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) > (((/* implicit */int) ((unsigned char) var_6)))));
                        arr_27 [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_11))) >> (((var_5) - (6905284743926566284ULL)))));
                        /* LoopSeq 4 */
                        for (int i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)30773)) - (30756)))));
                            arr_30 [i_1] [i_3] [1LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_7)))) ? ((~(((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            arr_31 [i_3] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 7ULL))))));
                        }
                        for (int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                        {
                            arr_34 [i_1] [i_3] [i_4] [i_7] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8)))))));
                            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) - (18446744073709551598ULL))))));
                            arr_35 [i_3] [i_7] [i_4] [0] [i_3] = ((/* implicit */long long int) ((unsigned char) var_1));
                            var_28 += ((/* implicit */int) ((unsigned long long int) var_8));
                            arr_36 [i_1] [i_3] [i_4] [1LL] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_6)))));
                        }
                        for (int i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                        {
                            var_29 &= ((/* implicit */unsigned char) ((var_10) / ((-(((/* implicit */int) var_1))))));
                            arr_40 [i_3] [i_3] [i_7] [i_7] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) == (var_11)));
                        }
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (~(var_5))))));
                            arr_44 [i_3] [i_7] [i_3] = ((/* implicit */unsigned long long int) ((long long int) (~(var_5))));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        var_31 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */long long int) var_12))))), (min((var_5), (((/* implicit */unsigned long long int) var_6))))));
        arr_47 [20] [20] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_3))))));
    }
    for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((var_6), (var_3))))))))))));
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */unsigned long long int) ((((var_0) + (9223372036854775807LL))) >> (((/* implicit */int) var_8))))) * (max((var_11), (((/* implicit */unsigned long long int) var_4)))))) : ((~(var_5)))));
    }
    var_34 = ((/* implicit */unsigned char) ((int) min((((/* implicit */unsigned long long int) var_14)), (((unsigned long long int) var_4)))));
}
