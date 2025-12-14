/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141693
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_3] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (1537318376)))) ? (((/* implicit */int) ((unsigned short) (signed char)125))) : ((+(((/* implicit */int) (_Bool)1)))))), (((int) var_10))));
                        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */int) var_1)) / (((/* implicit */int) (short)32490)))), (((((/* implicit */_Bool) 3099516780U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-31743))))))) ? (((/* implicit */unsigned int) (+(arr_3 [i_3] [i_1] [i_0])))) : ((-(1072693248U)))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_1 [i_0]);
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13515)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (((unsigned long long int) 2305843009213693952ULL))));
                    }
                    arr_14 [i_0] = ((/* implicit */_Bool) ((-4990496189240740219LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((unsigned short) max((min((((/* implicit */int) (unsigned char)232)), (1082809431))), ((+(var_5))))));
}
