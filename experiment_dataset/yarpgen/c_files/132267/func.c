/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132267
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
    var_14 = ((/* implicit */signed char) (_Bool)1);
    var_15 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)15889)) : (((/* implicit */int) (_Bool)1)))))) ? (((unsigned int) (~(var_10)))) : ((~(var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */unsigned char) var_3);
                    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 8001458412422099376LL))) - (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(short)0] [i_2])) ? (((/* implicit */long long int) var_2)) : (var_11)))) || (((/* implicit */_Bool) min((arr_1 [i_2] [(signed char)8]), (arr_1 [(unsigned char)9] [6]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */long long int) var_4))))) && (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned short)14846)))))))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((var_4) << (((var_4) - (1827430785U)))))) ? (((((/* implicit */int) var_8)) >> (((/* implicit */int) var_8)))) : (((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
}
