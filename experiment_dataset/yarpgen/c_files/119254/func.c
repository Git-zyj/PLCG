/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119254
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) (short)6825)))) + (min(((~(((/* implicit */int) (short)6825)))), (((/* implicit */int) (signed char)-121))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 ^= ((unsigned short) min((var_1), (((/* implicit */int) (unsigned short)55358))));
                                var_12 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) (~(((/* implicit */int) min((var_0), (arr_4 [i_0] [i_0] [i_0])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 22; i_5 += 3) 
    {
        for (int i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                    {
                        arr_24 [i_6] = ((/* implicit */unsigned short) max((min((1108307720798208LL), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((arr_21 [i_7]) ? (((/* implicit */int) arr_16 [(unsigned char)5])) : (((/* implicit */int) (signed char)-121)))) : (((((/* implicit */_Bool) arr_16 [i_7])) ? (((/* implicit */int) arr_16 [i_6])) : (((/* implicit */int) (unsigned char)70)))))))));
                        arr_25 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)-5)))), (((/* implicit */int) (unsigned char)186))));
                        var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_5 - 1]))))) ? (((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? (((/* implicit */int) arr_15 [i_5 - 1])) : (((/* implicit */int) arr_15 [i_5 + 1])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_5 + 1])) : (((/* implicit */int) arr_15 [i_5 - 1]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5 - 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_5]))))) : (arr_19 [i_5] [i_5 + 1])));
                        var_15 -= ((long long int) ((((/* implicit */_Bool) -1108307720798211LL)) && (((/* implicit */_Bool) arr_23 [i_5] [i_6] [i_7] [i_9]))));
                        var_16 = ((/* implicit */unsigned int) (short)-22539);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1108307720798243LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_6] [i_7] [i_9])))))) ? (((/* implicit */int) arr_23 [i_9] [i_6] [i_5 - 1] [i_6])) : (((/* implicit */int) (signed char)-124))));
                        var_18 = ((/* implicit */unsigned int) (-(-1108307720798204LL)));
                    }
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
                    {
                        var_19 |= ((/* implicit */int) (+((~(arr_19 [i_5] [i_5 - 1])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 4; i_11 < 20; i_11 += 2) /* same iter space */
                        {
                            var_20 ^= var_3;
                            var_21 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) + ((~(var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_5 + 1])) || (((/* implicit */_Bool) var_2)))))));
                        }
                        for (unsigned char i_12 = 4; i_12 < 20; i_12 += 2) /* same iter space */
                        {
                            arr_37 [i_5] [i_6] [i_10] [i_10] [i_12] [i_5] [i_12] &= ((/* implicit */long long int) min((((/* implicit */int) ((arr_28 [i_6] [i_12] [i_12] [i_12] [i_12 + 1] [i_12]) > (((/* implicit */int) (short)16444))))), (((((/* implicit */_Bool) (signed char)-15)) ? (arr_30 [i_5] [i_5] [i_7] [i_7] [i_12 + 3] [i_12]) : (((/* implicit */int) (short)-22550))))));
                            var_22 -= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_33 [i_5] [i_6])))), (((int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (var_2) : (((/* implicit */long long int) var_1)))))));
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_7), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22543))) : (var_3)))))) ? (((/* implicit */int) ((short) ((((/* implicit */unsigned int) arr_28 [i_5] [i_6] [i_7] [i_10] [i_12] [i_12])) - (arr_18 [i_7]))))) : (((((/* implicit */_Bool) (signed char)-12)) ? (arr_30 [i_5] [i_6] [i_7] [i_5 + 1] [i_6] [i_5]) : (var_1)))));
                        }
                        var_24 |= max(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_7] [i_6] [i_5] [i_10]))))))), (((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (((/* implicit */int) ((-928387575) <= (((/* implicit */int) (short)-15270))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 13U))))))));
                        var_25 &= ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */unsigned long long int) 263670952)) : (arr_26 [(short)7] [i_6]))))) > (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64)))))) : (((((/* implicit */_Bool) var_1)) ? (arr_26 [i_5] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22540)))))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_16 [i_5 - 1])) ? (((/* implicit */int) min((((/* implicit */short) arr_20 [i_5])), (var_0)))) : (((/* implicit */int) arr_33 [i_5] [i_6])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)-22558)) + (1709857020)))) == (var_4))))));
                    }
                    var_27 = ((/* implicit */signed char) ((1108307720798195LL) != (((/* implicit */long long int) ((((/* implicit */_Bool) 756888596)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_36 [i_7] [i_7] [(unsigned short)19] [i_6] [(unsigned short)19])))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5]))) : (2147483648U))))))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 8524079121871394805ULL)) || (var_10)))))))));
                }
            } 
        } 
    } 
    var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)2)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)6))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))));
}
