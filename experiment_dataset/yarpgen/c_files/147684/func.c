/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147684
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
    for (unsigned int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        arr_10 [i_2] [(unsigned char)22] [(signed char)2] [(signed char)2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_0 - 1] [i_2] [i_0 - 1]))));
                        arr_11 [(unsigned short)17] [i_2] [i_2] [i_3] [10LL] [10LL] = ((((arr_9 [(unsigned short)22] [i_0 - 1] [7LL]) + (2147483647))) >> (((((((/* implicit */_Bool) var_14)) ? (var_4) : (8575863169392131878ULL))) - (7619466615399095375ULL))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_17 *= ((/* implicit */short) ((signed char) arr_2 [i_0 - 1] [i_0 - 2]));
            var_18 = ((/* implicit */unsigned int) var_15);
        }
        for (int i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            arr_16 [15] [i_5] = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_7 [i_5] [i_5])) : (((/* implicit */int) arr_7 [i_5] [i_5])));
            var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)62834))));
        }
    }
    for (signed char i_6 = 4; i_6 < 13; i_6 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) arr_7 [0U] [0U]);
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_17 [i_6 - 1]) ? (((/* implicit */int) arr_6 [(unsigned char)14] [i_6] [i_6])) : (((/* implicit */int) (unsigned short)63719)))))));
        var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) 936791545)) == ((-9223372036854775807LL - 1LL)))))));
    }
    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (var_11)));
    var_24 &= ((/* implicit */long long int) var_11);
}
