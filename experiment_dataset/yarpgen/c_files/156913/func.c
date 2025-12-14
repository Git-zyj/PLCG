/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156913
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */int) min((2143289344U), (((/* implicit */unsigned int) var_2))));
                    var_15 = ((/* implicit */unsigned short) arr_0 [i_1]);
                    arr_7 [i_2] [i_1] [i_0] = ((((((((/* implicit */_Bool) arr_6 [(short)8] [i_1] [i_1 - 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0 - 1])))) <= ((~(arr_4 [i_0]))))) ? (3ULL) : (((/* implicit */unsigned long long int) ((int) arr_4 [i_0 + 1]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) ((short) var_12))) : (((((/* implicit */_Bool) (short)-22933)) ? (var_9) : (((/* implicit */int) (unsigned char)3))))))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (2631129712534801929LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        var_17 *= ((/* implicit */unsigned long long int) (-(2151677936U)));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 3) 
        {
            for (unsigned short i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                for (short i_6 = 1; i_6 < 22; i_6 += 3) 
                {
                    {
                        var_18 = ((/* implicit */short) ((unsigned char) arr_10 [i_3]));
                        var_19 *= ((/* implicit */short) (!(((/* implicit */_Bool) 1U))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 2; i_8 < 23; i_8 += 1) 
            {
                for (unsigned int i_9 = 3; i_9 < 21; i_9 += 1) 
                {
                    {
                        arr_26 [i_3 + 1] [i_7] [i_3] [17] [i_3 - 1] [i_7 - 1] = ((/* implicit */_Bool) 1379913389);
                        arr_27 [i_3] [(short)11] [(short)11] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_12))))));
                        arr_28 [i_9] [i_3] [i_3] = ((/* implicit */long long int) (short)-18964);
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    }
    var_21 = ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */int) (short)28290)) << (((((/* implicit */int) var_4)) - (24636))))) << (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_10)) : (var_12))) - (2193227051ULL))))));
}
