/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164132
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
    var_17 = ((/* implicit */unsigned int) var_15);
    var_18 = ((/* implicit */unsigned int) -2081084921);
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) -2081084920)) && (((/* implicit */_Bool) 0ULL)))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_12))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) + (1982541903505397505ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)103)) << (((4294967269U) - (4294967253U)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4205910362214312540LL)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 1])) : (((/* implicit */int) (unsigned char)105))))), ((+(arr_6 [i_0] [i_0 - 1] [i_0 - 1])))));
                    var_21 = ((((/* implicit */_Bool) max((arr_6 [i_1 - 1] [i_0 - 1] [i_0 + 1]), (((/* implicit */long long int) 2768133808U))))) || (((/* implicit */_Bool) min((var_6), (arr_0 [i_1 - 1])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_22 = ((((((/* implicit */int) ((unsigned char) (unsigned char)128))) / ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))))) <= (((/* implicit */int) (unsigned char)128)));
                    var_23 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 + 1])), (((long long int) arr_1 [i_0 - 1] [i_0 + 1]))));
                    var_24 = ((/* implicit */_Bool) arr_4 [i_0] [i_3]);
                    var_25 = (((_Bool)1) ? (max(((((_Bool)0) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_4]) : (var_15))), (((/* implicit */long long int) ((unsigned char) (unsigned char)128))))) : (((/* implicit */long long int) var_4)));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */long long int) ((_Bool) (~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)32336)))))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-24071)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)106))) : (-7942302864618314594LL)))));
        var_27 = ((/* implicit */long long int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_5])))));
    }
}
