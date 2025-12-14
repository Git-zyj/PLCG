/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170063
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 16; i_2 += 1) 
                {
                    var_16 = ((/* implicit */signed char) var_8);
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_13))));
                    arr_8 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (~(var_10)));
                }
                /* LoopNest 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        for (signed char i_5 = 3; i_5 < 14; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_15 [i_0] [14U] [i_4] [i_5 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_15 [i_5 + 3] [i_3] [i_1] [i_0]))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned int) -187311798)) % (3163819969U))))))))));
                                arr_16 [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_9)))) ? (max((((/* implicit */long long int) 111178139U)), (-504456144842336449LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)128)) % (var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_4 - 2] [i_5 + 2] [i_5 + 3]) > (((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) 111178139U)) ? (((((/* implicit */_Bool) -504456144842336455LL)) ? (((/* implicit */unsigned long long int) arr_14 [i_4 + 2] [i_1] [(unsigned char)11] [i_4] [3LL])) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_10 [i_0] [i_1] [i_3] [i_5 + 3])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_7 = 1; i_7 < 16; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)86)) ? (-187311798) : (arr_11 [i_7 + 1] [(unsigned short)15] [(unsigned char)10] [i_0])))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 3; i_8 < 15; i_8 += 3) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((2011692400U) - (3236633162U)))) ? (((((/* implicit */long long int) 2011692416U)) + ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)-14))))));
                            var_21 = ((/* implicit */signed char) var_9);
                        }
                        var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 2147483647)) & (12LL))))));
                    }
                    for (long long int i_9 = 3; i_9 < 16; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_20 [(short)12] [i_9] [i_9 + 1] [i_9 - 1])) ? (arr_22 [i_9 - 2] [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 2]) : (var_9))), (max((2509273881753777967LL), (-20LL)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_10 = 2; i_10 < 16; i_10 += 3) /* same iter space */
                        {
                            arr_31 [i_10] [i_1] [i_6] [3LL] = ((/* implicit */int) ((((arr_21 [(signed char)3] [i_10 + 1] [i_10] [i_10] [i_10] [i_10 + 1] [i_0]) + (9223372036854775807LL))) >> (((arr_21 [i_10] [i_10] [i_10] [i_10 - 2] [i_10] [i_10 - 2] [4LL]) + (6301656081314865082LL)))));
                            var_24 = ((((/* implicit */_Bool) arr_20 [i_9 - 2] [(unsigned short)12] [i_6] [i_6])) ? (arr_20 [i_9 - 2] [i_9] [i_6] [i_6]) : (((/* implicit */int) var_15)));
                        }
                        for (signed char i_11 = 2; i_11 < 16; i_11 += 3) /* same iter space */
                        {
                            var_25 += ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((long long int) var_10))))) ? (((((/* implicit */_Bool) var_5)) ? (4183789156U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_9] [i_1] [11LL] [i_0] [i_9])) ? (((/* implicit */int) (unsigned char)238)) : (((/* implicit */int) (short)(-32767 - 1)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 15; i_12 += 4) 
                    {
                        for (int i_13 = 2; i_13 < 14; i_13 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (arr_26 [(unsigned short)11] [i_1] [i_6] [i_6] [i_12] [i_12])))) ? (((/* implicit */unsigned long long int) -5853121457736752457LL)) : (((((/* implicit */_Bool) -187311795)) ? (((/* implicit */unsigned long long int) -6239198880029948050LL)) : (1913022156160247503ULL)))))));
                                var_28 = ((/* implicit */unsigned int) (~(((int) max((((/* implicit */unsigned int) (unsigned char)25)), (111178139U))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? (((((/* implicit */_Bool) (~(4428810408888790414LL)))) ? (max((2147483647), (((/* implicit */int) var_13)))) : (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (long long int i_14 = 2; i_14 < 21; i_14 += 2) 
    {
        for (signed char i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            {
                arr_46 [i_14 + 1] [i_14] [i_15] = ((/* implicit */signed char) arr_42 [i_14]);
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned int i_17 = 2; i_17 < 19; i_17 += 1) 
                    {
                        {
                            var_30 |= 1757034231U;
                            var_31 = max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) max((-2147483647), (187311798)))) : (((((/* implicit */_Bool) 1641637298)) ? (((/* implicit */long long int) 4294967283U)) : (-1254194180580945682LL))))), ((+(((var_3) ? (var_11) : (var_9))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) var_4);
}
