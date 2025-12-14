/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178525
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
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (unsigned char)138)))) * (((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (2158174905908743854ULL))))));
        var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (8325509060075191746LL))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_21 = (+(((/* implicit */int) (_Bool)1)));
        var_22 |= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) max(((short)16110), (((/* implicit */short) arr_2 [i_1]))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3])) && (((/* implicit */_Bool) arr_0 [i_2] [i_2]))))) < (((((/* implicit */_Bool) 1706588656)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_8 [i_4]))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 2; i_6 < 8; i_6 += 1) 
                        {
                            var_24 ^= (-((+(((/* implicit */int) arr_8 [i_2])))));
                            var_25 = ((/* implicit */short) ((signed char) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-102))) : (var_8))));
                            arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (var_13)))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) ((_Bool) arr_16 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            var_26 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)42934))))));
                            var_27 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))));
                        }
                        for (int i_8 = 1; i_8 < 9; i_8 += 3) 
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) (unsigned char)166)))));
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (signed char)-102)))) / (((/* implicit */int) ((((/* implicit */int) (short)-16111)) != (((/* implicit */int) (signed char)-1)))))));
                            arr_26 [i_5] = ((((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])) >> (((((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) - (152))))) | ((~(((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) 1363954848)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            var_28 = ((/* implicit */int) ((((((/* implicit */int) (signed char)-107)) / (-1706588648))) >= (1706588644)));
                        }
                    }
                    for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        arr_30 [i_2] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) 0ULL)))));
                        arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((var_1) >= (((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) && (((((/* implicit */_Bool) var_5)) && ((_Bool)1)))));
                        arr_32 [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */int) (unsigned short)45933)) >= (564103697));
                        var_29 -= ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) + (var_6)))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        arr_35 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((long long int) var_15))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            var_30 = ((((/* implicit */_Bool) ((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) / (-564103698)))) && ((!(((/* implicit */_Bool) (unsigned short)5353)))));
                            arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)166)))) != (((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]) - (arr_21 [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            arr_41 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (-1009625825)))) ? (((((/* implicit */int) arr_7 [i_3] [i_3])) / (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (short)7198)) ? (-1) : (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
                        }
                        for (unsigned char i_12 = 4; i_12 < 8; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_3]))))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-107)) > (var_1))))));
                            arr_46 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_14))))));
                            var_32 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (unsigned char)74))))));
                            arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))));
                            var_33 = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (var_17))));
                        }
                        arr_48 [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_11 [i_2] [i_2] [i_2] [i_2])))));
                        arr_49 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 907812656)) ? (arr_29 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_3])) >= (arr_44 [i_2] [i_2] [i_2] [i_2] [i_2]))))) : ((~(arr_6 [i_4] [i_4])))));
                        var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)89))))) ? (((3328782508391226945LL) % (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned char)5))))));
                    }
                    for (short i_13 = 1; i_13 < 10; i_13 += 3) 
                    {
                        var_35 = ((/* implicit */int) max((var_35), (((((((/* implicit */int) var_5)) * (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) (signed char)106)) + (var_4)))))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5259)) ? (1482019475) : (((/* implicit */int) (_Bool)0))))) && (((/* implicit */_Bool) ((int) (_Bool)1)))));
                    }
                    var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (signed char)107)))));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) (-(((long long int) arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                                var_39 *= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 7098222690180217201LL)) ? (((/* implicit */int) var_9)) : (var_3)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_40 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)222))))) & (((unsigned long long int) var_6))));
    }
    /* LoopNest 3 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (unsigned char i_17 = 1; i_17 < 21; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 23; i_19 += 4) 
                    {
                        for (int i_20 = 2; i_20 < 22; i_20 += 2) 
                        {
                            {
                                var_41 = ((((unsigned long long int) (~(-8325509060075191744LL)))) > (((((/* implicit */_Bool) ((11959413543358344309ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218)))))) ? (((/* implicit */unsigned long long int) min((1323179646U), (((/* implicit */unsigned int) var_6))))) : (((((/* implicit */_Bool) arr_60 [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_57 [i_16]))))));
                                arr_68 [i_16] = ((/* implicit */long long int) (((+(((((/* implicit */unsigned long long int) var_6)) * (arr_57 [i_20]))))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((unsigned char)210), (((/* implicit */unsigned char) var_7))))))))));
                                var_42 = ((/* implicit */_Bool) ((((/* implicit */int) ((1568229555686655945LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-76)))))) + (((/* implicit */int) max((max(((short)8191), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((unsigned char) (signed char)89))))))));
                            }
                        } 
                    } 
                    arr_69 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) ((arr_58 [i_17]) * (((/* implicit */int) arr_67 [i_17] [i_17]))))))));
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */short) ((unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)233)) && (((/* implicit */_Bool) (unsigned short)4932))))), (((((((/* implicit */int) (signed char)-107)) + (2147483647))) >> (((((/* implicit */int) var_11)) + (29129))))))));
}
