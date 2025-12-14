/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141204
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((short) (unsigned char)184))) || (((/* implicit */_Bool) var_4))))) | (((((/* implicit */_Bool) -790942678)) ? (((/* implicit */int) (short)-10088)) : (790942678)))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -2102482896)) ? (var_11) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), (((-790942691) - (((/* implicit */int) (unsigned short)39169)))))))));
        var_17 *= min((((/* implicit */unsigned long long int) -790942678)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483631)) ? (((/* implicit */int) var_0)) : (790942690)))) : (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) var_12)))))));
        var_18 = ((/* implicit */_Bool) (~((~(790942678)))));
        var_19 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 3) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) % (var_4)))) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 1]))))) ^ (max((((/* implicit */unsigned long long int) arr_4 [i_1 + 1])), (((unsigned long long int) -3077060395114266081LL))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) (((((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 790942707)))) != (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned char) arr_4 [i_1 - 1])))));
            var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(-790942691)))), (12ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)187)), (var_1)))) && (((/* implicit */_Bool) -1304062359908439711LL)))))) : (((long long int) ((int) 11803284370307093744ULL)))));
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_23 = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3]);
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) max((var_24), ((!(((/* implicit */_Bool) arr_8 [i_4]))))));
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (signed char)-37))));
                        var_26 = arr_14 [i_5] [i_4] [i_1];
                        arr_16 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)5826)) : (((/* implicit */int) (unsigned short)65515))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)46)) <= ((~(-2147483631))))))) : (min((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) (signed char)-51))))));
                    }
                } 
            } 
            var_27 = (-(min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_3] [i_1] [i_1])) != (((/* implicit */int) var_0))))))));
            arr_17 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
        }
        var_28 = ((/* implicit */unsigned long long int) ((short) ((long long int) (+(-3271055626770929642LL)))));
        var_29 *= ((/* implicit */int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)64)), (14790105980723845579ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1])) != (arr_12 [i_1] [15ULL]))))) : (((unsigned long long int) (signed char)-33))))));
        arr_18 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1]))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)107))))))) ? ((~(((long long int) arr_11 [i_1] [i_1] [i_1 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)37)))))))))));
    }
    for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
    {
        arr_21 [i_6] = ((/* implicit */int) (-(18446744073709551601ULL)));
        var_30 += ((/* implicit */_Bool) (short)8210);
        var_31 ^= ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_6]))))) >> (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_11 [i_6 + 1] [(unsigned char)13] [i_6])));
        arr_22 [i_6] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) arr_0 [i_6])));
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 7; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                {
                    var_32 &= ((/* implicit */unsigned long long int) ((min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)37)) : (var_7))), (((/* implicit */int) (unsigned char)37)))) != (((/* implicit */int) ((_Bool) (unsigned short)65532)))));
                    /* LoopSeq 3 */
                    for (int i_9 = 4; i_9 < 9; i_9 += 1) 
                    {
                        arr_31 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) -790942672))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)118)), ((unsigned short)50941))))) : (9223372036854775807LL)))) ? (9373952054632558180ULL) : (((/* implicit */unsigned long long int) var_13))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_36 [i_6] [i_7] [i_7] [i_6] [i_10] [i_7 + 1] [i_7] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_28 [i_6] [i_7] [(unsigned short)3])) ? (arr_28 [i_7] [i_7] [i_7]) : (arr_28 [i_7] [i_7] [i_8]))), ((~(arr_7 [i_9 - 1] [i_8] [i_7 + 3])))));
                            var_33 += ((/* implicit */int) (unsigned char)118);
                            arr_37 [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) (unsigned short)2);
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)9))));
                    }
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3)) - (((/* implicit */int) (_Bool)1))))) ? (17267080845699370587ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_40 [i_6] [i_7])), (-690696043))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_6 - 2] [i_7 + 3] [i_7])) ? (((/* implicit */int) ((unsigned short) 1610612736))) : (((/* implicit */int) min(((signed char)-65), (((/* implicit */signed char) (_Bool)1)))))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) arr_5 [i_8] [i_7 + 2] [i_8])) : (-1303013755773432345LL)))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (short)-11078))));
                    }
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (16092775099987474280ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        arr_47 [i_6 - 1] [i_7] [i_7] [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_6] [i_6]))))) ? (((int) (-(((/* implicit */int) (unsigned char)0))))) : (((/* implicit */int) (short)-31478))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                        {
                            arr_50 [i_7] = (+(((/* implicit */int) (_Bool)1)));
                            var_39 = ((/* implicit */unsigned short) (~(((var_8) >> (((((/* implicit */int) var_2)) - (25888)))))));
                        }
                    }
                }
            } 
        } 
    }
}
