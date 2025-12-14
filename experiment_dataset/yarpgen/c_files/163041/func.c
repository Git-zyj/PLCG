/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163041
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 1096043019U))))) >> (((((/* implicit */int) ((signed char) ((((/* implicit */int) var_8)) ^ (0))))) + (95)))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-3777)) ? (2) : (((/* implicit */int) (unsigned char)252))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    {
                        var_14 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) : (var_7)))) + (var_4)));
                        var_15 *= ((/* implicit */unsigned int) ((unsigned long long int) arr_9 [i_0] [i_1]));
                    }
                } 
            } 
            arr_13 [i_1] &= ((/* implicit */_Bool) ((3670016U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned char) arr_3 [i_1])))));
            arr_14 [i_0] = ((/* implicit */unsigned char) ((((arr_9 [i_0] [i_0]) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned short)20])) ^ (13)))) : (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
        }
        /* vectorizable */
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            arr_19 [i_0] [i_0] [19U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-18332)) - (((/* implicit */int) arr_15 [i_4]))));
            arr_20 [i_0] [i_0] = ((/* implicit */short) ((18446744073709551615ULL) >> (((((/* implicit */int) (signed char)-60)) + (66)))));
        }
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (var_7))) + (9223372036854775807LL))) >> (((((unsigned int) var_6)) - (3911362055U)))))) ? (9037406757539799693ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2292063986773410360ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6))))));
}
