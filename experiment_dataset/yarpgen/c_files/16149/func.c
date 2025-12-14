/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16149
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)1001)) >> (((((/* implicit */int) (short)-21850)) * (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) var_2)), (((short) var_1)))))));
        var_15 = ((/* implicit */unsigned char) var_11);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */long long int) (unsigned short)6893);
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) % (((/* implicit */int) arr_4 [(unsigned char)2]))));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_18 += ((/* implicit */short) (unsigned char)76);
        var_19 = ((/* implicit */unsigned char) var_10);
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) arr_7 [i_3 + 1])) : (((/* implicit */int) arr_6 [i_3 + 1]))));
        arr_13 [(short)7] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)25137)) < (((/* implicit */int) (unsigned char)91)))))) > (((((/* implicit */long long int) arr_10 [i_3 - 1] [i_3 - 1])) / (var_10)))));
        arr_14 [(_Bool)1] [i_3] = ((/* implicit */short) (-(arr_12 [i_3 - 1])));
    }
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        for (unsigned int i_5 = 2; i_5 < 23; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) (unsigned short)35881)), (arr_21 [i_5 + 2] [i_5] [i_5 + 1]))));
                    var_22 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned short)29655)))) != (max(((~(((/* implicit */int) (unsigned short)3763)))), (((/* implicit */int) var_2))))));
                    arr_22 [i_4] [i_4] [i_4] [5LL] = ((/* implicit */short) (~(max((((((/* implicit */_Bool) (unsigned short)29667)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-3185326659718836017LL))), (((/* implicit */long long int) arr_20 [i_4] [i_5 - 2] [i_5] [i_6]))))));
                }
            } 
        } 
    } 
}
