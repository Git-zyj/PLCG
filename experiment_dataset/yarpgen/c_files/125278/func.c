/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125278
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_1))));
                    var_17 = ((/* implicit */unsigned char) max((4455626679089066220ULL), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) (signed char)93)))))))));
                    var_18 -= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_13) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8064)) ? (var_4) : (((/* implicit */int) arr_6 [i_2] [13LL] [i_0] [i_0]))))) : (arr_0 [i_0]))) % ((~(-5702096229849539669LL))));
                    var_19 = ((/* implicit */int) ((unsigned long long int) var_2));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) -218070264)) ? (0) : (-195598497)));
    }
    var_21 = var_7;
    var_22 = ((/* implicit */long long int) min((min((max((var_13), (var_14))), (((/* implicit */unsigned long long int) (~(var_5)))))), (((/* implicit */unsigned long long int) -1882074268991999772LL))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 2) 
    {
        arr_9 [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_3)) : (var_7)));
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) (-((~(var_3)))));
    }
}
