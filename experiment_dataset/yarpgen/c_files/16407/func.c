/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16407
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
    var_10 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((min((var_0), (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) max(((_Bool)1), (var_5))))))), (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))), ((+(2575381584174132096ULL)))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_11 ^= ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) min((arr_1 [i_0] [i_0]), ((signed char)-64)))) : (((/* implicit */int) ((648372055) != (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
            arr_5 [i_1 + 1] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (short)811)) << (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) max((-1), (((/* implicit */int) (_Bool)1))))) ? (((long long int) arr_0 [i_0 - 1] [i_0 + 2])) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 + 1]))))))))));
        }
        var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)69)) & (((/* implicit */int) (signed char)-98))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) arr_1 [i_2] [i_2])))) ? (((/* implicit */int) ((signed char) 4))) : (((/* implicit */int) (_Bool)1))));
        var_15 -= ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_2] [i_2]));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) 775170768);
                    var_17 = ((/* implicit */unsigned char) ((long long int) min((arr_9 [i_3]), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-545341946)))))));
                }
            } 
        } 
        arr_15 [i_3] [(signed char)0] = ((/* implicit */_Bool) min((min((-1733572825), (((((/* implicit */int) (_Bool)1)) >> (((1125899906842623ULL) - (1125899906842613ULL))))))), (((/* implicit */int) ((_Bool) -7152347655021692050LL)))));
    }
}
