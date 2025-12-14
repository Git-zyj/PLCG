/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18162
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
    var_14 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned short)35969))))))) ? (((/* implicit */int) ((((/* implicit */long long int) max((1443359826), (560027116)))) > ((+(-862127562619712736LL)))))) : ((-(var_5)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) (_Bool)1);
        var_15 -= ((/* implicit */_Bool) (+((~(((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) (unsigned char)82);
                            var_17 = ((/* implicit */signed char) -560027112);
                            var_18 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 9223231299366420480ULL)) ? (var_0) : (((/* implicit */unsigned long long int) 560027111)))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_1] [i_1 - 2] [i_1] [i_1])))))));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 19; i_5 += 2) /* same iter space */
    {
        var_20 += ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) (short)25278)) : (((/* implicit */int) arr_8 [i_5 - 2] [i_5 - 2] [i_5] [(unsigned short)8])))) + (((/* implicit */int) arr_10 [i_5] [i_5 + 2] [i_5 + 1]))));
        arr_16 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((715562894U) | (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119))) : (1031515696U)))) : ((+(-1346589266104125533LL)))));
        arr_17 [i_5 - 1] [i_5] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)24155)) ^ (((/* implicit */int) (signed char)-112))))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_20 [i_6] = ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (short)22654))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_8 [12] [i_6] [i_6] [i_6])) : (-1443359849)))) : (((((/* implicit */_Bool) var_10)) ? (arr_7 [i_6] [i_6] [i_6] [i_6]) : (((/* implicit */unsigned long long int) 560027111)))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) == (5861100188397795675ULL)));
        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) 3263451599U)) ? (arr_4 [i_6] [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    }
}
