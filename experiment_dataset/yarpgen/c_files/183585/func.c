/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183585
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
    var_11 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2080083735U)) ? (var_2) : (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)-9750), ((short)-9779))))) : (((((/* implicit */_Bool) 7324595723371993269LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-7324595723371993270LL)))))));
    var_12 = ((/* implicit */unsigned char) var_5);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (var_3)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= (var_7)))) * (var_2)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_14 *= ((/* implicit */long long int) min((min((((/* implicit */unsigned short) ((short) arr_0 [i_0] [i_0]))), (((unsigned short) (signed char)94)))), (((/* implicit */unsigned short) arr_1 [i_0]))));
        var_15 &= min((var_8), (((/* implicit */long long int) ((unsigned short) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((((/* implicit */int) ((unsigned char) (_Bool)1))) - ((~(((/* implicit */int) arr_0 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_10 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-60))));
                        var_16 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (((_Bool)1) ? (var_8) : (((/* implicit */long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1]))) : ((~(1U)))))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)94)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))) : (min((((/* implicit */unsigned long long int) var_5)), (892564982781364496ULL))))))));
}
