/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163746
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned short) (short)-10687)), ((unsigned short)48)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = arr_0 [i_0] [i_1];
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -36028797018963968LL))));
                    var_16 = ((/* implicit */unsigned char) var_1);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
    }
    for (short i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((68719476735LL) - (((/* implicit */long long int) arr_11 [i_3] [i_3]))))) ? ((~(((/* implicit */int) (unsigned short)49275)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) var_2)))))));
        arr_13 [i_3] = ((/* implicit */short) (+(-1918510409)));
    }
    for (int i_4 = 3; i_4 < 13; i_4 += 4) 
    {
        var_18 = ((/* implicit */int) ((arr_5 [i_4] [i_4] [i_4] [i_4]) << (((arr_5 [(short)21] [i_4] [i_4 - 3] [i_4]) - (2627726238U)))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((((((/* implicit */_Bool) (unsigned short)40216)) ? (36028797018963968LL) : (((/* implicit */long long int) ((int) (unsigned char)0))))), (((/* implicit */long long int) max((((505039049U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_4]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6885532928373911273LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [23ULL])))))))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_4 + 4])))) % ((~(4931909442788824151ULL)))));
    }
    var_21 ^= ((/* implicit */long long int) ((unsigned long long int) (unsigned short)16246));
}
