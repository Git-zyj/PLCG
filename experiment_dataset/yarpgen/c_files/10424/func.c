/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10424
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_20 -= ((/* implicit */unsigned char) var_12);
            arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) (+((-2147483647 - 1))));
        }
        arr_7 [(short)15] = (short)2035;
        arr_8 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(562949953421311LL)))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0]))) : ((+(-657436212)))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2029))) : (arr_14 [i_3 - 1] [i_4] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)63340)))) : ((+(2947487192U)))));
                    arr_15 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_12)) ? (arr_10 [i_3] [(unsigned char)11]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3])))))));
                    var_22 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_19))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(short)3]))) : (var_5))))) <= (((/* implicit */unsigned long long int) arr_10 [i_3] [i_4]))));
                    arr_16 [i_3] [7] = ((/* implicit */long long int) (+(-3)));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) var_3);
        arr_17 [i_2] = ((/* implicit */unsigned short) var_18);
    }
    var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) var_5))));
}
