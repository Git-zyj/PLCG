/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144254
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
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)70)))))));
        var_10 ^= ((/* implicit */long long int) (-(((/* implicit */int) (short)14497))));
        var_11 = ((/* implicit */signed char) (short)-10535);
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            var_12 = (!(((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0])));
            var_13 = ((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_1 + 2]) + (((/* implicit */int) (!(((/* implicit */_Bool) 552559993165985610LL)))))));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_14 *= ((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 - 3] [i_1 + 2]));
                        var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))) : (1375639318U)));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned short) arr_12 [i_0]);
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_1] [i_1 + 3] [i_0] [i_0]);
        }
        var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)55064))));
    }
    for (short i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_18 = ((/* implicit */_Bool) (short)-32527);
        var_19 = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))))));
        arr_16 [i_4] = ((/* implicit */short) var_9);
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)70)) ? (max((((((/* implicit */_Bool) var_8)) ? (3304992245U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_22 = ((/* implicit */int) (signed char)-70);
}
